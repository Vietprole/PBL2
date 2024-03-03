
using namespace std;
#ifndef Room_h
#define Room_h
#include <iostream>
#include <string>
class Room
{
private:
    int idRoom;
    string nameRoom;

public:
    int getId() const;
    void setId(int id);
    string getName();
    void setName(string name);
    string toString();
    friend istream &operator>>(istream &in, Room &a);
    bool operator== (const Room &a)const;
};

#endif
