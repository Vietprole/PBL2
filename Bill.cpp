#include"Bill.h"
int Bill::getId() const{
    return id;
}
void Bill::setId(int id){
    this->id = id;
}
string Bill::getCreatedTime(){
    return createdTime;
}
void Bill::setCreatedTime(string createdTime){
    this->createdTime = createdTime;
}
Customer Bill::getCustomer(){
    return customer;
}
void Bill::setCustomer(Customer customer){
    this->customer = customer;
}
double Bill::getTotal(){
    return total;
}
void Bill::setTotal(double total){
    this->total = total;
}
string Bill::toString(){
    return to_string(id) + "|" + createdTime + "|" + to_string(customer.getId()) + "|" +  to_string(total) + "|";
}
istream &operator>>(istream &in, Bill &a){
    cout << "Ngay lap:";
    in >> a.createdTime;
    return in;

}
bool Bill::operator== (const Bill &a)const{
    return a.id==id;
}