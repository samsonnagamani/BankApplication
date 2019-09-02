//
// Created by samso on 02/09/2019.
//

#pragma once

#include <ctime>


class Transaction
{
public:
    Transaction();

    Transaction(int transNum, time_t transDateTime);

    int getTransNum() const;

    void setTransNum(int transNum);

    time_t getTransDateTime() const;

    void setTransDateTime(time_t transDateTime);

private:
    int trans_num;
    std::time_t trans_date_time;
};

