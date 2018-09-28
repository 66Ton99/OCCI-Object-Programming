#ifndef MAPPINGS_ORACLE
# include "mappings.h"
#endif

void mappings(oracle::occi::Environment* envOCCI_)
{
    oracle::occi::Map *mapOCCI_ = envOCCI_->getMap();
    mapOCCI_->put("DEMOUSR.FULLNAME", &CFullName::readSQL, &CFullName::writeSQL);
    mapOCCI_->put("DEMOUSR.ADDRESS", &CAddress::readSQL, &CAddress::writeSQL);
    mapOCCI_->put("DEMOUSR.PERSON", &CPerson::readSQL, &CPerson::writeSQL);
    mapOCCI_->put("DEMOUSR.STUDENT", &CStudent::readSQL, &CStudent::writeSQL);
}