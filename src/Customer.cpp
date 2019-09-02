//
// Created by samso on 02/09/2019.
//

#include "Customer.h"

int Customer::getCustId() const
{
    return cust_id;
}

void Customer::setCustId(int custId)
{
    cust_id = custId;
}

const std::string &Customer::getCustName() const
{
    return cust_name;
}

void Customer::setCustName(const std::string &custName)
{
    cust_name = custName;
}

int Customer::getAccNum() const
{
    return acc_num;
}

void Customer::setAccNum(int accNum)
{
    acc_num = accNum;
}

const Address &Customer::getAddress() const
{
    return address;
}

void Customer::setAddress(const Address &address)
{
    Customer::address = address;
}

std::string Customer::getPhoneNum() const
{
    return phone_num;
}

void Customer::setPhoneNum(std::string phoneNum)
{
    phone_num = phoneNum;
}

Customer::Customer(int custId, const std::string &custName, int accNum, const Address &address, std::string phoneNum) : cust_id(
        custId), cust_name(custName), acc_num(accNum), address(address), phone_num(phoneNum) {}

Customer::Customer() {}

