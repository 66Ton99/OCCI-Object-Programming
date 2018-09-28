#pragma once

#include <iostream>
#include <string>
#include "demo2.h"

// declarations for the MyFullName class.
class MyFullName : public  CFullName
{  public:
    MyFullName(std::string first_name, std::string last_name);
    MyFullName(void *ctxOCCI_);
    void displayInfo();
};

// declarations for the MyAddress class.
class MyAddress : public CAddress
{  public:
    MyAddress(std::string state_i, std::string zip_i);
    MyAddress(void *ctxOCCI_);
    void displayInfo();
};

// declarations for the MyPerson class.
class MyPerson : public CPerson
{  public:
    MyPerson(oracle::occi::Number id_i, MyFullName *name_i,
             const oracle::occi::Ref<MyAddress>& addr_i);
    MyPerson(void *ctxOCCI_);
    void move(const oracle::occi::Ref<MyAddress>& new_addr);
    void displayInfo();
};