#include"Customer.h"
int Customer::getId() const
{
    return id;
}
void Customer::setId(int id)
{
    this->id = id;
}
string Customer::getFullName()
{
    return fullName;
}
void Customer::setFullName(string name)
{
    this->fullName = name;
}
string Customer::getPhone()
{
    return phone;
}
void Customer::setPhone(string phone)
{

    this->phone = phone;
}
string Customer::toString(){
    return to_string(id) + "|" + fullName + "|" + phone + "|";
}
istream &operator>>(istream &in, Customer &a){
    cout << "Nhap ho ten:";
    in >> a.fullName;
    cout  <<endl;
    cout <<"Nhap so dien thoai:";

    in >> a.phone;

    return in;
}
bool Customer::operator== (const Customer &a)const{
    return a.id==id;
}