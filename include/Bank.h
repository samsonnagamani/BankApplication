//
// Created by samson on 02/09/2019.
//

#pragma once


#include "Customer.h"
#include "Loan.h"
#include "Transaction.h"

class Bank
{
public:

    Bank(const Customer &custDetails, const Loan &loanDetails, const Transaction &transDetails);

    const Customer &getCustDetails() const;

    void setCustDetails(const Customer &custDetails);

    const Loan &getLoanDetails() const;

    void setLoanDetails(const Loan &loanDetails);

    const Transaction &getTransDetails() const;

    void setTransDetails(const Transaction &transDetails);

private:
    Customer custDetails;
    Loan loanDetails;
    Transaction transDetails;
};
