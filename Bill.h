
using namespace std;
#ifndef Bill_h
#define Bill_h
#include <iostream>
#include <string>
#include "Customer.h"
class Bill
{
protected:
    int id;
    string createdTime;
    Customer customer;
    double total;

public:
    int getId() const;
    void setId(int id);
    string getCreatedTime();
    void setCreatedTime(string createdTime);
    Customer getCustomer();
    void setCustomer(Customer customer);
    double getTotal();
    void setTotal(double total);
    string toString();
    friend istream &operator>>(istream &in, Bill &a);
    bool operator==(const Bill &) const;
};

#endif