cmake_minimum_required(VERSION 3.14)
project(BankApplication)

set(CMAKE_CXX_STANDARD 17)


include_directories( ./include ./src ./libs/Logger/include ./libs/Randomize/include )

add_executable(BankApplication src/main.cpp include/Bank.h include/Customer.h include/Loan.h include/Transaction.h src/Bank.cpp src/Address.cpp include/Address.h src/Customer.cpp src/Loan.cpp src/Transaction.cpp)