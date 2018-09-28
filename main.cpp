#include <iostream>
#include "demo2.h"
#include "myDemo.h"
#include "mappings.h"

using namespace std;
using namespace oracle::occi;

int main()
{
    Environment *env = Environment::createEnvironment(Environment::OBJECT);
    mappings(env);

    try {
        Connection *conn = env->createConnection("DEMOUSR", "demousr", "oracle-db:1521/ORCLCDB.localdomain");

        /* Call the OTT generated function to register the mappings */
        /* create a persistent object of type ADDRESS in the database table,
           ADDR_TAB */
        MyAddress *addr1 = new(conn, "ADDR_TAB") MyAddress("CA", "94065");
        conn->commit();

        Statement *st = conn->createStatement("select ref(a) from addr_tab a");
        ResultSet *rs = st->executeQuery();
        Ref<MyAddress> r1;
        if ( rs->next())
            r1 = rs->getRef(1);
        st->closeResultSet(rs);
        conn->terminateStatement(st);

        MyFullName * name1 = new MyFullName("Joe", "Black");

        /* create a persistent object of type Person in the database table
           PERSON_TAB */
        MyPerson *person1 = new(conn, "PERSON_TAB") MyPerson(1,name1,r1);
        conn->commit();

        /* selecting the inserted information */
        Statement *stmt = conn->createStatement();
        ResultSet *resultSet =
                stmt->executeQuery("SELECT REF(a) from person_tab a where id = 1");

        if (resultSet->next())
        {
            Ref<MyPerson> joe_ref = (Ref<MyPerson>) resultSet->getRef(1);
            joe_ref->displayInfo();

            /* create a persistent object of type ADDRESS in the database table
               ADDR_TAB */
            MyAddress *new_addr1 = new(conn, "ADDR_TAB") MyAddress("PA", "92140");
            joe_ref->move(new_addr1->getRef());
        }

        /* commit the transaction which results in the newly created object
            new_addr and the dirty object joe to be flushed to the server.
            Note that joe was marked dirty in move(). */
        conn->commit();

        person1->displayInfo();

        conn->terminateStatement(stmt);
        env->terminateConnection(conn);
    }

    catch ( exception &x)

    {
        cout << x.what () << endl;
    }
    Environment::terminateEnvironment(env);
    return 0;
}