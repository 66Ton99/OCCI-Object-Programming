CONNECT system/Oradoc_db1;
ALTER SESSION SET "_ORACLE_SCRIPT"=true;
CREATE USER demousr IDENTIFIED BY demousr;
GRANT CREATE SESSION TO demousr;
ALTER USER demousr quota unlimited ON USERS;

CREATE SCHEMA AUTHORIZATION demousr;
ALTER SESSION SET CURRENT_SCHEMA = demousr;


CREATE TYPE FULLNAME AS OBJECT (first_name CHAR(20), last_name CHAR(20))
/
CREATE TYPE ADDRESS AS OBJECT (state CHAR(20), zip CHAR(20))
/
CREATE TYPE ADDRESS_TAB  AS VARRAY(3) OF REF ADDRESS
/
CREATE TYPE PERSON AS OBJECT (id NUMBER, name FULLNAME,curr_addr REF ADDRESS,
prev_addr_l ADDRESS_TAB) NOT FINAL
/
CREATE TYPE STUDENT UNDER  PERSON (school_name CHAR(20))
/
CREATE TABLE ADDR_TAB OF ADDRESS
/
CREATE TABLE PERSON_TAB OF PERSON;

CONNECT demousr/demousr;