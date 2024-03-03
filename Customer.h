
using namespace std;
#ifndef Customer_h
#define Customer_h
#include <iostream>
#include <string>
class Customer
{
private:
    int id;
    string fullName;
    string phone;

public:
    int getId() const;
    void setId(int id);
    string getFullName();
    void setFullName(string name);
    string getPhone();
    void setPhone(string phone);
    string toString();
    friend istream &operator>>(istream &in, Customer &a);
    bool operator== (const Customer &a)const;
};

#endif