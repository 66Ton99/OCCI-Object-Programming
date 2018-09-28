#ifndef DEMO2_ORACLE
# define DEMO2_ORACLE

#ifndef OCCI_ORACLE
# include <occi.h>
#endif

class CFullName;
class CAddress;
class CPerson;
class CStudent;

/************************************************************/
//  generated declarations for the FULLNAME object type.
/************************************************************/

class CFullName : public oracle::occi::PObject {

private:

    OCCI_STD_NAMESPACE::string FIRST_NAME;
    OCCI_STD_NAMESPACE::string LAST_NAME;

public:

    OCCI_STD_NAMESPACE::string getFirst_name() const;

    void setFirst_name(const OCCI_STD_NAMESPACE::string &value);

    OCCI_STD_NAMESPACE::string getLast_name() const;

    void setLast_name(const OCCI_STD_NAMESPACE::string &value);

    void *operator new(size_t size);

    void *operator new(size_t size, const oracle::occi::Connection * sess,
                       const OCCI_STD_NAMESPACE::string& table);

    void *operator new(size_t, void *ctxOCCI_);

    void *operator new(size_t size, const oracle::occi::Connection *sess,
                       const OCCI_STD_NAMESPACE::string &tableName,
                       const OCCI_STD_NAMESPACE::string &typeName,
                       const OCCI_STD_NAMESPACE::string &tableSchema,
                       const OCCI_STD_NAMESPACE::string &typeSchema);

    OCCI_STD_NAMESPACE::string getSQLTypeName() const;

    void getSQLTypeName(oracle::occi::Environment *env, void **schemaName,
                        unsigned int &schemaNameLen, void **typeName,
                        unsigned int &typeNameLen) const;

    CFullName();

    CFullName(void *ctxOCCI_);

    static void *readSQL(void *ctxOCCI_);

    virtual void readSQL(oracle::occi::AnyData& streamOCCI_);

    static void writeSQL(void *objOCCI_, void *ctxOCCI_);

    virtual void writeSQL(oracle::occi::AnyData& streamOCCI_);

    ~CFullName();

};

/************************************************************/
//  generated declarations for the ADDRESS object type.
/************************************************************/

class CAddress : public oracle::occi::PObject {

private:

    OCCI_STD_NAMESPACE::string STATE;
    OCCI_STD_NAMESPACE::string ZIP;

public:

    OCCI_STD_NAMESPACE::string getState() const;

    void setState(const OCCI_STD_NAMESPACE::string &value);

    OCCI_STD_NAMESPACE::string getZip() const;

    void setZip(const OCCI_STD_NAMESPACE::string &value);

    void *operator new(size_t size);

    void *operator new(size_t size, const oracle::occi::Connection * sess,
                       const OCCI_STD_NAMESPACE::string& table);

    void *operator new(size_t, void *ctxOCCI_);

    void *operator new(size_t size, const oracle::occi::Connection *sess,
                       const OCCI_STD_NAMESPACE::string &tableName,
                       const OCCI_STD_NAMESPACE::string &typeName,
                       const OCCI_STD_NAMESPACE::string &tableSchema,
                       const OCCI_STD_NAMESPACE::string &typeSchema);

    OCCI_STD_NAMESPACE::string getSQLTypeName() const;

    void getSQLTypeName(oracle::occi::Environment *env, void **schemaName,
                        unsigned int &schemaNameLen, void **typeName,
                        unsigned int &typeNameLen) const;

    CAddress();

    CAddress(void *ctxOCCI_);

    static void *readSQL(void *ctxOCCI_);

    virtual void readSQL(oracle::occi::AnyData& streamOCCI_);

    static void writeSQL(void *objOCCI_, void *ctxOCCI_);

    virtual void writeSQL(oracle::occi::AnyData& streamOCCI_);

    ~CAddress();

};

/************************************************************/
//  generated declarations for the PERSON object type.
/************************************************************/

class CPerson : public oracle::occi::PObject {

private:

    oracle::occi::Number ID;
    CFullName * NAME;
    oracle::occi::Ref< CAddress > CURR_ADDR;
    OCCI_STD_NAMESPACE::vector< oracle::occi::Ref< CAddress > > PREV_ADDR_L;

public:

    oracle::occi::Number getId() const;

    void setId(const oracle::occi::Number &value);

    CFullName * getName() const;

    void setName(CFullName * value);

    oracle::occi::Ref< CAddress > getCurr_addr() const;

    void setCurr_addr(const oracle::occi::Ref< CAddress > &value);

    OCCI_STD_NAMESPACE::vector< oracle::occi::Ref< CAddress > >& getPrev_addr_l();

    const OCCI_STD_NAMESPACE::vector< oracle::occi::Ref< CAddress > >& getPrev_addr_l() const;

    void setPrev_addr_l(const OCCI_STD_NAMESPACE::vector< oracle::occi::Ref< CAddress > > &value);

    void *operator new(size_t size);

    void *operator new(size_t size, const oracle::occi::Connection * sess,
                       const OCCI_STD_NAMESPACE::string& table);

    void *operator new(size_t, void *ctxOCCI_);

    void *operator new(size_t size, const oracle::occi::Connection *sess,
                       const OCCI_STD_NAMESPACE::string &tableName,
                       const OCCI_STD_NAMESPACE::string &typeName,
                       const OCCI_STD_NAMESPACE::string &tableSchema,
                       const OCCI_STD_NAMESPACE::string &typeSchema);

    OCCI_STD_NAMESPACE::string getSQLTypeName() const;

    void getSQLTypeName(oracle::occi::Environment *env, void **schemaName,
                        unsigned int &schemaNameLen, void **typeName,
                        unsigned int &typeNameLen) const;

    CPerson();

    CPerson(void *ctxOCCI_);

    static void *readSQL(void *ctxOCCI_);

    virtual void readSQL(oracle::occi::AnyData& streamOCCI_);

    static void writeSQL(void *objOCCI_, void *ctxOCCI_);

    virtual void writeSQL(oracle::occi::AnyData& streamOCCI_);

    ~CPerson();

};

/************************************************************/
//  generated declarations for the STUDENT object type.
/************************************************************/

class CStudent : public CPerson {

private:

    OCCI_STD_NAMESPACE::string SCHOOL_NAME;

public:

    OCCI_STD_NAMESPACE::string getSchool_name() const;

    void setSchool_name(const OCCI_STD_NAMESPACE::string &value);

    void *operator new(size_t size);

    void *operator new(size_t size, const oracle::occi::Connection * sess,
                       const OCCI_STD_NAMESPACE::string& table);

    void *operator new(size_t, void *ctxOCCI_);

    void *operator new(size_t size, const oracle::occi::Connection *sess,
                       const OCCI_STD_NAMESPACE::string &tableName,
                       const OCCI_STD_NAMESPACE::string &typeName,
                       const OCCI_STD_NAMESPACE::string &tableSchema,
                       const OCCI_STD_NAMESPACE::string &typeSchema);

    OCCI_STD_NAMESPACE::string getSQLTypeName() const;

    void getSQLTypeName(oracle::occi::Environment *env, void **schemaName,
                        unsigned int &schemaNameLen, void **typeName,
                        unsigned int &typeNameLen) const;

    CStudent();

    CStudent(void *ctxOCCI_);

    static void *readSQL(void *ctxOCCI_);

    virtual void readSQL(oracle::occi::AnyData& streamOCCI_);

    static void writeSQL(void *objOCCI_, void *ctxOCCI_);

    virtual void writeSQL(oracle::occi::AnyData& streamOCCI_);

    ~CStudent();

};

#endif
