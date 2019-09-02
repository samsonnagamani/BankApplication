//
// Created by samso on 02/09/2019.
//

#include "Address.h"

Address::Address() {}

Address::Address(int doorNum, const std::string &streetName, const std::string &country, const std::string &zippostCode)
        : door_num(doorNum), street_name(streetName), country(country), zippost_code(zippostCode) {}

int Address::getDoorNum() const
{
    return door_num;
}

void Address::setDoorNum(int doorNum)
{
    door_num = doorNum;
}

const std::string &Address::getStreetName() const
{
    return street_name;
}

void Address::setStreetName(const std::string &streetName)
{
    street_name = streetName;
}

const std::string &Address::getCountry() const
{
    return country;
}

void Address::setCountry(const std::string &country)
{
    Address::country = country;
}

const std::string &Address::getZippostCode() const
{
    return zippost_code;
}

void Address::setZippostCode(const std::string &zippostCode)
{
    zippost_code = zippostCode;
}


