//
// Created by samso on 02/09/2019.
//

#include <iostream>


#include "Bank.h"


Bank::Bank(const Customer &custDetails, const Loan &loanDetails, const Transaction &transDetails) : custDetails(
        custDetails), loanDetails(loanDetails), transDetails(transDetails) {}

const Customer &Bank::getCustDetails() const
{
    return custDetails;
}

void Bank::setCustDetails(const Customer &custDetails)
{
    Bank::custDetails = custDetails;
}

const Loan &Bank::getLoanDetails() const
{
    return loanDetails;
}

void Bank::setLoanDetails(const Loan &loanDetails)
{
    Bank::loanDetails = loanDetails;
}

const Transaction &Bank::getTransDetails() const
{
    return transDetails;
}

void Bank::setTransDetails(const Transaction &transDetails)
{
    Bank::transDetails = transDetails;
}

