#include"Seat.h"
int Seat::getId() const
{
    return id;
}
void Seat::setId(int id){
    this->id = id;
}
string Seat::getName()
{
    return name;
}
void Seat::setName(string name)
{
    this -> name = name;
}
bool Seat::getVip(){
    return isVip;
}
void Seat::setVip(bool isVip)
{
    this -> isVip = isVip;
}
string Seat::toString(){
    string u;
    if(isVip) u = "1";
    else u = "0";
    return to_string(id) + "|" + name + "|" + u + "|";
}
istream &operator>>(istream &in, Seat &a){
    cout << "Nhap ten ghe:";
    in >> a.name;
    cout << "Nhap hang ghe:";
    in >> a.isVip;
    return in;
}
bool Seat::operator== (const Seat &a)const{
    return a.id==id;
}