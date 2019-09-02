//
// Created by samso on 02/09/2019.
//

#pragma once


#include "Address.h"

class Customer
{
public:

    int getCustId() const;

    void setCustId(int custId);

    const std::string &getCustName() const;

    void setCustName(const std::string &custName);

    int getAccNum() const;

    void setAccNum(int accNum);

    const Address &getAddress() const;

    void setAddress(const Address &address);

    std::string getPhoneNum() const;

    void setPhoneNum(std::string phoneNum);

    Customer(int custId, const std::string &custName, int accNum, const Address &address, std::string phoneNum);

    Customer();


private:
    int cust_id;
    std::string cust_name;
    int acc_num;
    Address address;
    std::string phone_num;
};

