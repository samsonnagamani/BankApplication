//
// Created by samso on 02/09/2019.
//

#pragma once


class Loan
{
public:
    Loan();

    Loan(double amount, int length, float aprRate);

    double getAmount() const;

    void setAmount(double amount);

    int getLength() const;

    void setLength(int length);

    float getAprRate() const;

    void setAprRate(float aprRate);


private:
    double amount;
    int length;
    float apr_rate;
};

