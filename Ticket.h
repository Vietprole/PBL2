
using namespace std;
#ifndef Ticket_h
#define Ticket_h
#include<iostream>
#include<string>
#include"Bill.h"
#include"Seat.h"
#include"Schedule.h"
#include"Movie.h"
#include"Room.h"
class Ticket{
    private:
        int id;
        Movie movie;
        Seat seat;
        Schedule schedule; 
        Bill bill;
        Room room;
        double price;
    public:
        int getId() const;
        void setId(int id);
        Movie getMovie();
        void setMovie(Movie movie);
        Seat getSeat();
        void setSeat(Seat seat);
        Schedule getSchedule();
        void setSchedule(Schedule schedule);
        Bill getBill();
        void setBill(Bill bill);
        Room getRoom();
        void setRoom(Room room);
        string toString();
        double getPrice();
        void setPrice(double price);

        friend istream &operator>>(istream &in, Ticket &a);
        bool operator== (const Ticket &a)const;
};

#endif