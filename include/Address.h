//
// Created by samson on 02/09/2019.
//

#pragma once


#include <string>

class Address
{
private:
    int door_num;
    std::string street_name;
    std::string country;
    std::string zippost_code;

public:
    Address();

    Address(int doorNum, const std::string &streetName, const std::string &country, const std::string &zippostCode);

    int getDoorNum() const;

    void setDoorNum(int doorNum);

    const std::string &getStreetName() const;

    void setStreetName(const std::string &streetName);

    const std::string &getCountry() const;

    void setCountry(const std::string &country);

    const std::string &getZippostCode() const;

    void setZippostCode(const std::string &zippostCode);


};

