#include <iostream>

#include "Bank.h"

int main()
{
    Address address;
    address.setCountry("UK");
    address.setDoorNum(1);
    address.setStreetName("Tennison Road");
    address.setZippostCode("SE25 5NF");

    Customer customer;
    customer.setAccNum(12345678);
    customer.setCustId(1);
    customer.setAddress(address);
    customer.setPhoneNum("07414295127");
    customer.setCustName("Samson");

    Loan loan;
    loan.setAmount(5000);
    loan.setAprRate(10);
    loan.setLength(36);

    Transaction transaction;
    transaction.setTransDateTime(std::time(0));
    transaction.setTransNum(1);


    Bank bank = Bank(customer, loan, transaction);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}