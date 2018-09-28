#ifndef DEMO2_ORACLE
#include <cassert>
#include "myDemo.h"
#endif

/* initialize MyFullName */
MyFullName::MyFullName(std::string first_name, std::string last_name)
{
    setFirst_name(first_name);
    setLast_name(last_name);
}

/* display all the information in MyFullName */
void MyFullName::displayInfo()
{
    std::cout << "FIRST NAME is" << getFirst_name() << std::endl;
    std::cout << "LAST NAME is" << getLast_name() << std::endl;
}

MyFullName::MyFullName(void *ctxOCCI_):CFullName(ctxOCCI_)
{
}

/* METHOD IMPLEMENTATIONS FOR MyAddress CLASS. */

/* initialize MyAddress */
MyAddress::MyAddress(std::string state_i, std::string zip_i)
{
    setState(state_i);
    setZip(zip_i);
}

/* display all the information in MyAddress */
void MyAddress::displayInfo()
{
    std::cout << "STATE is" << getState() << std::endl;
    std::cout << "ZIP is" << getZip() << std::endl;
}

MyAddress::MyAddress(void *ctxOCCI_) :CAddress(ctxOCCI_)
{
    std::cout << "MyAddress::MyAddress" << std::endl;
}

/* METHOD IMPLEMENTATIONS FOR MyPerson CLASS. */

/* initialize MyPerson */
MyPerson::MyPerson(oracle::occi::Number id_i, MyFullName* name_i,
                   const oracle::occi::Ref<MyAddress>& addr_i)
{
    setId(id_i);
    setName(name_i);
    setCurr_addr((oracle::occi::Ref<CAddress>)addr_i);
}

MyPerson::MyPerson(void *ctxOCCI_) :CPerson(ctxOCCI_)
{
}

/* move Person from curr_addr to new_addr */
void MyPerson::move(const oracle::occi::Ref<MyAddress>& new_addr)
{
    // append curr_addr to the vector //
    getPrev_addr_l().push_back(getCurr_addr());
    setCurr_addr((oracle::occi::Ref<CAddress>)new_addr);

    // mark the object as dirty
    this->markModified();
}

/*  display all the information of MyPerson */
void MyPerson::displayInfo()
{
    std::cout << "ID is" << (int)getId() << std::endl;
    ((MyFullName*)getName())->displayInfo();

    try{
        if (!getCurr_addr()->isNull())
        {
            std::cout << "Current Address:" << std::endl;
            // de-referencing the Ref attribute using -> operator
            ((MyAddress*)&*getCurr_addr())->displayInfo();
        }
    }
    catch (...)
    {
        std::cout << "No Address" << std::endl;
    }
    std::cout << "Prev Addr List: " << std::endl;
//    oracle::occi::Ref::
    for (int i = 0; i < getPrev_addr_l().size(); i++)
    {
        // access the collection elements using [] operator
        ((oracle::occi::Ref<MyAddress>)getPrev_addr_l()[i])->displayInfo();
    }
}
//
//MyPerson::MyPerson()
//{
//}
//
//MyStudent::MyStudent(void *ctxOCCI_) : CStudent(ctxOCCI_)
//{
//}