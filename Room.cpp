#include"Room.h"
int Room::getId() const
{
    return idRoom;
}
void Room::setId(int id)
{
    this->idRoom = id;
}
string Room::getName()
{
    return nameRoom;
}
void Room::setName(string name)
{
    nameRoom = name;
}
string Room::toString()
{
    return to_string(idRoom) + "|" + nameRoom + "|";
}
istream &operator>>(istream &in, Room &a){
    cout << "Nhap ten phong:";
    in >> a.nameRoom;
    return in;
}
bool Room::operator== (const Room &a)const{
    return a.idRoom==idRoom;
}