
using namespace std;
#ifndef Seat_h
#define Seat_h
#include<iostream>
#include<string>
class Seat
{
    private:
        int id;
        string name;
        bool isVip;
    public:
        
        int getId()const;
        void setId(int id);
        string getName();
        void setName (string name);
        
        bool getVip();
        void setVip (bool isVip);
        string toString();
        friend istream &operator>>(istream &in, Seat &a);
        bool operator== (const Seat &a)const;
};


#endif