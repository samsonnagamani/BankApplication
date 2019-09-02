//
// Created by samson on 02/09/2019.
//

#include "Loan.h"

Loan::Loan(double amount, int length, float aprRate) : amount(amount), length(length), apr_rate(aprRate) {}

Loan::Loan() {}

double Loan::getAmount() const
{
    return amount;
}

void Loan::setAmount(double amount)
{
    Loan::amount = amount;
}

int Loan::getLength() const
{
    return length;
}

void Loan::setLength(int length)
{
    Loan::length = length;
}

float Loan::getAprRate() const
{
    return apr_rate;
}

void Loan::setAprRate(float aprRate)
{
    apr_rate = aprRate;
}

