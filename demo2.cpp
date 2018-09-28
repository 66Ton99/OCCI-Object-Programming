#ifndef DEMO2_ORACLE
# include "demo2.h"
#endif


/*****************************************************************/
//  generated method implementations for the FULLNAME object type.
/*****************************************************************/

OCCI_STD_NAMESPACE::string CFullName::getFirst_name() const
{
    return FIRST_NAME;
}

void CFullName::setFirst_name(const OCCI_STD_NAMESPACE::string &value)
{
    FIRST_NAME = value;
}

OCCI_STD_NAMESPACE::string CFullName::getLast_name() const
{
    return LAST_NAME;
}

void CFullName::setLast_name(const OCCI_STD_NAMESPACE::string &value)
{
    LAST_NAME = value;
}

void *CFullName::operator new(size_t size)
{
    return oracle::occi::PObject::operator new(size);
}

void *CFullName::operator new(size_t size, const oracle::occi::Connection * sess,
                              const OCCI_STD_NAMESPACE::string& table)
{
    return oracle::occi::PObject::operator new(size, sess, table,
                                               (char *) "DEMOUSR.FULLNAME");
}

void *CFullName::operator new(size_t size, void *ctxOCCI_)
{
    return oracle::occi::PObject::operator new(size, ctxOCCI_);
}

void *CFullName::operator new(size_t size,
                              const oracle::occi::Connection *sess,
                              const OCCI_STD_NAMESPACE::string &tableName,
                              const OCCI_STD_NAMESPACE::string &typeName,
                              const OCCI_STD_NAMESPACE::string &tableSchema,
                              const OCCI_STD_NAMESPACE::string &typeSchema)
{
    return oracle::occi::PObject::operator new(size, sess, tableName,
                                               typeName, tableSchema, typeSchema);
}

OCCI_STD_NAMESPACE::string CFullName::getSQLTypeName() const
{
    return OCCI_STD_NAMESPACE::string("DEMOUSR.FULLNAME");
}

void CFullName::getSQLTypeName(oracle::occi::Environment *env, void **schemaName,
                               unsigned int &schemaNameLen, void **typeName, unsigned int &typeNameLen) const
{
    PObject::getSQLTypeName(env, &CFullName::readSQL, schemaName,
                            schemaNameLen, typeName, typeNameLen);
}

CFullName::CFullName()
{
}

CFullName::CFullName(void *ctxOCCI_) : oracle::occi::PObject (ctxOCCI_)
{
}

void *CFullName::readSQL(void *ctxOCCI_)
{
    CFullName *objOCCI_ = new(ctxOCCI_) CFullName(ctxOCCI_);
    oracle::occi::AnyData streamOCCI_(ctxOCCI_);

    try
    {
        if (streamOCCI_.isNull())
            objOCCI_->setNull();
        else
            objOCCI_->readSQL(streamOCCI_);
    }
    catch (oracle::occi::SQLException& excep)
    {
        delete objOCCI_;
        excep.setErrorCtx(ctxOCCI_);
        return (void *)NULL;
    }
    return (void *)objOCCI_;
}

void CFullName::readSQL(oracle::occi::AnyData& streamOCCI_)
{
    FIRST_NAME = streamOCCI_.getString();
    LAST_NAME = streamOCCI_.getString();
}

void CFullName::writeSQL(void *objectOCCI_, void *ctxOCCI_)
{
    CFullName *objOCCI_ = (CFullName *) objectOCCI_;
    oracle::occi::AnyData streamOCCI_(ctxOCCI_);

    try
    {
        if (objOCCI_->isNull())
            streamOCCI_.setNull();
        else
            objOCCI_->writeSQL(streamOCCI_);
    }
    catch (oracle::occi::SQLException& excep)
    {
        excep.setErrorCtx(ctxOCCI_);
    }
    return;
}

void CFullName::writeSQL(oracle::occi::AnyData& streamOCCI_)
{
    streamOCCI_.setString(FIRST_NAME);
    streamOCCI_.setString(LAST_NAME);
}

CFullName::~CFullName()
{
    int i;
}

/*****************************************************************/
//  generated method implementations for the ADDRESS object type.
/*****************************************************************/

OCCI_STD_NAMESPACE::string CAddress::getState() const
{
    return STATE;
}

void CAddress::setState(const OCCI_STD_NAMESPACE::string &value)
{
    STATE = value;
}

OCCI_STD_NAMESPACE::string CAddress::getZip() const
{
    return ZIP;
}

void CAddress::setZip(const OCCI_STD_NAMESPACE::string &value)
{
    ZIP = value;
}

void *CAddress::operator new(size_t size)
{
    return oracle::occi::PObject::operator new(size);
}

void *CAddress::operator new(size_t size, const oracle::occi::Connection * sess,
                             const OCCI_STD_NAMESPACE::string& table)
{
    return oracle::occi::PObject::operator new(size, sess, table,
                                               (char *) "DEMOUSR.ADDRESS");
}

void *CAddress::operator new(size_t size, void *ctxOCCI_)
{
    return oracle::occi::PObject::operator new(size, ctxOCCI_);
}

void *CAddress::operator new(size_t size,
                             const oracle::occi::Connection *sess,
                             const OCCI_STD_NAMESPACE::string &tableName,
                             const OCCI_STD_NAMESPACE::string &typeName,
                             const OCCI_STD_NAMESPACE::string &tableSchema,
                             const OCCI_STD_NAMESPACE::string &typeSchema)
{
    return oracle::occi::PObject::operator new(size, sess, tableName,
                                               typeName, tableSchema, typeSchema);
}

OCCI_STD_NAMESPACE::string CAddress::getSQLTypeName() const
{
    return OCCI_STD_NAMESPACE::string("DEMOUSR.ADDRESS");
}

void CAddress::getSQLTypeName(oracle::occi::Environment *env, void **schemaName,
                              unsigned int &schemaNameLen, void **typeName, unsigned int &typeNameLen) const
{
    PObject::getSQLTypeName(env, &CAddress::readSQL, schemaName,
                            schemaNameLen, typeName, typeNameLen);
}

CAddress::CAddress()
{
}

CAddress::CAddress(void *ctxOCCI_) : oracle::occi::PObject (ctxOCCI_)
{
}

void *CAddress::readSQL(void *ctxOCCI_)
{
    CAddress *objOCCI_ = new(ctxOCCI_) CAddress(ctxOCCI_);
    oracle::occi::AnyData streamOCCI_(ctxOCCI_);

    try
    {
        if (streamOCCI_.isNull())
            objOCCI_->setNull();
        else
            objOCCI_->readSQL(streamOCCI_);
    }
    catch (oracle::occi::SQLException& excep)
    {
        delete objOCCI_;
        excep.setErrorCtx(ctxOCCI_);
        return (void *)NULL;
    }
    return (void *)objOCCI_;
}

void CAddress::readSQL(oracle::occi::AnyData& streamOCCI_)
{
    STATE = streamOCCI_.getString();
    ZIP = streamOCCI_.getString();
}

void CAddress::writeSQL(void *objectOCCI_, void *ctxOCCI_)
{
    CAddress *objOCCI_ = (CAddress *) objectOCCI_;
    oracle::occi::AnyData streamOCCI_(ctxOCCI_);

    try
    {
        if (objOCCI_->isNull())
            streamOCCI_.setNull();
        else
            objOCCI_->writeSQL(streamOCCI_);
    }
    catch (oracle::occi::SQLException& excep)
    {
        excep.setErrorCtx(ctxOCCI_);
    }
    return;
}

void CAddress::writeSQL(oracle::occi::AnyData& streamOCCI_)
{
    streamOCCI_.setString(STATE);
    streamOCCI_.setString(ZIP);
}

CAddress::~CAddress()
{
    int i;
}

/*****************************************************************/
//  generated method implementations for the PERSON object type.
/*****************************************************************/

oracle::occi::Number CPerson::getId() const
{
    return ID;
}

void CPerson::setId(const oracle::occi::Number &value)
{
    ID = value;
}

CFullName * CPerson::getName() const
{
    return NAME;
}

void CPerson::setName(CFullName * value)
{
    NAME = value;
}

oracle::occi::Ref< CAddress > CPerson::getCurr_addr() const
{
    return CURR_ADDR;
}

void CPerson::setCurr_addr(const oracle::occi::Ref< CAddress > &value)
{
    CURR_ADDR = value;
}

OCCI_STD_NAMESPACE::vector< oracle::occi::Ref< CAddress > >& CPerson::getPrev_addr_l()
{
    return PREV_ADDR_L;
}

const OCCI_STD_NAMESPACE::vector< oracle::occi::Ref< CAddress > >& CPerson::getPrev_addr_l() const
{
    return PREV_ADDR_L;
}

void CPerson::setPrev_addr_l(const OCCI_STD_NAMESPACE::vector< oracle::occi::Ref< CAddress > > &value)
{
    PREV_ADDR_L = value;
}

void *CPerson::operator new(size_t size)
{
    return oracle::occi::PObject::operator new(size);
}

void *CPerson::operator new(size_t size, const oracle::occi::Connection * sess,
                            const OCCI_STD_NAMESPACE::string& table)
{
    return oracle::occi::PObject::operator new(size, sess, table,
                                               (char *) "DEMOUSR.PERSON");
}

void *CPerson::operator new(size_t size, void *ctxOCCI_)
{
    return oracle::occi::PObject::operator new(size, ctxOCCI_);
}

void *CPerson::operator new(size_t size,
                            const oracle::occi::Connection *sess,
                            const OCCI_STD_NAMESPACE::string &tableName,
                            const OCCI_STD_NAMESPACE::string &typeName,
                            const OCCI_STD_NAMESPACE::string &tableSchema,
                            const OCCI_STD_NAMESPACE::string &typeSchema)
{
    return oracle::occi::PObject::operator new(size, sess, tableName,
                                               typeName, tableSchema, typeSchema);
}

OCCI_STD_NAMESPACE::string CPerson::getSQLTypeName() const
{
    return OCCI_STD_NAMESPACE::string("DEMOUSR.PERSON");
}

void CPerson::getSQLTypeName(oracle::occi::Environment *env, void **schemaName,
                             unsigned int &schemaNameLen, void **typeName, unsigned int &typeNameLen) const
{
    PObject::getSQLTypeName(env, &CPerson::readSQL, schemaName,
                            schemaNameLen, typeName, typeNameLen);
}

CPerson::CPerson()
{
    NAME = (CFullName *) 0;
}

CPerson::CPerson(void *ctxOCCI_) : oracle::occi::PObject (ctxOCCI_)
{
    NAME = (CFullName *) 0;
}

void *CPerson::readSQL(void *ctxOCCI_)
{
    CPerson *objOCCI_ = new(ctxOCCI_) CPerson(ctxOCCI_);
    oracle::occi::AnyData streamOCCI_(ctxOCCI_);

    try
    {
        if (streamOCCI_.isNull())
            objOCCI_->setNull();
        else
            objOCCI_->readSQL(streamOCCI_);
    }
    catch (oracle::occi::SQLException& excep)
    {
        delete objOCCI_;
        excep.setErrorCtx(ctxOCCI_);
        return (void *)NULL;
    }
    return (void *)objOCCI_;
}

void CPerson::readSQL(oracle::occi::AnyData& streamOCCI_)
{
    ID = streamOCCI_.getNumber();
    NAME = (CFullName *) streamOCCI_.getObject(&CFullName::readSQL);
    CURR_ADDR = streamOCCI_.getRef();
    oracle::occi::getVectorOfRefs(streamOCCI_, PREV_ADDR_L);
}

void CPerson::writeSQL(void *objectOCCI_, void *ctxOCCI_)
{
    CPerson *objOCCI_ = (CPerson *) objectOCCI_;
    oracle::occi::AnyData streamOCCI_(ctxOCCI_);

    try
    {
        if (objOCCI_->isNull())
            streamOCCI_.setNull();
        else
            objOCCI_->writeSQL(streamOCCI_);
    }
    catch (oracle::occi::SQLException& excep)
    {
        excep.setErrorCtx(ctxOCCI_);
    }
    return;
}

void CPerson::writeSQL(oracle::occi::AnyData& streamOCCI_)
{
    streamOCCI_.setNumber(ID);
    streamOCCI_.setObject(NAME);
    streamOCCI_.setRef(CURR_ADDR);
    oracle::occi::setVectorOfRefs(streamOCCI_, PREV_ADDR_L);
}

CPerson::~CPerson()
{
    int i;
    delete NAME;
}

/*****************************************************************/
//  generated method implementations for the STUDENT object type.
/*****************************************************************/

OCCI_STD_NAMESPACE::string CStudent::getSchool_name() const
{
    return SCHOOL_NAME;
}

void CStudent::setSchool_name(const OCCI_STD_NAMESPACE::string &value)
{
    SCHOOL_NAME = value;
}

void *CStudent::operator new(size_t size)
{
    return oracle::occi::PObject::operator new(size);
}

void *CStudent::operator new(size_t size, const oracle::occi::Connection * sess,
                             const OCCI_STD_NAMESPACE::string& table)
{
    return oracle::occi::PObject::operator new(size, sess, table,
                                               (char *) "DEMOUSR.STUDENT");
}

void *CStudent::operator new(size_t size, void *ctxOCCI_)
{
    return oracle::occi::PObject::operator new(size, ctxOCCI_);
}

void *CStudent::operator new(size_t size,
                             const oracle::occi::Connection *sess,
                             const OCCI_STD_NAMESPACE::string &tableName,
                             const OCCI_STD_NAMESPACE::string &typeName,
                             const OCCI_STD_NAMESPACE::string &tableSchema,
                             const OCCI_STD_NAMESPACE::string &typeSchema)
{
    return oracle::occi::PObject::operator new(size, sess, tableName,
                                               typeName, tableSchema, typeSchema);
}

OCCI_STD_NAMESPACE::string CStudent::getSQLTypeName() const
{
    return OCCI_STD_NAMESPACE::string("DEMOUSR.STUDENT");
}

void CStudent::getSQLTypeName(oracle::occi::Environment *env, void **schemaName,
                              unsigned int &schemaNameLen, void **typeName, unsigned int &typeNameLen) const
{
    PObject::getSQLTypeName(env, &CStudent::readSQL, schemaName,
                            schemaNameLen, typeName, typeNameLen);
}

CStudent::CStudent()
{
}

CStudent::CStudent(void *ctxOCCI_) : CPerson (ctxOCCI_)
{
}

void *CStudent::readSQL(void *ctxOCCI_)
{
    CStudent *objOCCI_ = new(ctxOCCI_) CStudent(ctxOCCI_);
    oracle::occi::AnyData streamOCCI_(ctxOCCI_);

    try
    {
        if (streamOCCI_.isNull())
            objOCCI_->setNull();
        else
            objOCCI_->readSQL(streamOCCI_);
    }
    catch (oracle::occi::SQLException& excep)
    {
        delete objOCCI_;
        excep.setErrorCtx(ctxOCCI_);
        return (void *)NULL;
    }
    return (void *)objOCCI_;
}

void CStudent::readSQL(oracle::occi::AnyData& streamOCCI_)
{
    CPerson::readSQL(streamOCCI_);
    SCHOOL_NAME = streamOCCI_.getString();
}

void CStudent::writeSQL(void *objectOCCI_, void *ctxOCCI_)
{
    CStudent *objOCCI_ = (CStudent *) objectOCCI_;
    oracle::occi::AnyData streamOCCI_(ctxOCCI_);

    try
    {
        if (objOCCI_->isNull())
            streamOCCI_.setNull();
        else
            objOCCI_->writeSQL(streamOCCI_);
    }
    catch (oracle::occi::SQLException& excep)
    {
        excep.setErrorCtx(ctxOCCI_);
    }
    return;
}

void CStudent::writeSQL(oracle::occi::AnyData& streamOCCI_)
{
    CPerson::writeSQL(streamOCCI_);
    streamOCCI_.setString(SCHOOL_NAME);
}

CStudent::~CStudent()
{
    int i;
}