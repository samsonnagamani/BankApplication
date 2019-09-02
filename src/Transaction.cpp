//
// Created by samso on 02/09/2019.
//

#include "Transaction.h"

Transaction::Transaction(int transNum, time_t transDateTime) : trans_num(transNum), trans_date_time(transDateTime) {}

Transaction::Transaction() {}

int Transaction::getTransNum() const
{
    return trans_num;
}

void Transaction::setTransNum(int transNum)
{
    trans_num = transNum;
}

time_t Transaction::getTransDateTime() const
{
    return trans_date_time;
}

void Transaction::setTransDateTime(time_t transDateTime)
{
    trans_date_time = transDateTime;
}


