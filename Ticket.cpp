#include "Ticket.h"
int Ticket::getId() const
{
    return id;
}
void Ticket::setId(int id)
{
    this->id = id;
}
Movie Ticket::getMovie()
{
    return movie;
}
void Ticket::setMovie(Movie movie)
{
    this->movie = movie;
}
Seat Ticket::getSeat()
{
    return seat;
}
void Ticket::setSeat(Seat seat)
{
    this->seat = seat;
}
Schedule Ticket::getSchedule()
{
    return schedule;
}
void Ticket::setSchedule(Schedule schedule)
{
    this->schedule = schedule;
}
Bill Ticket::getBill()
{
    return bill;
}
void Ticket::setBill(Bill bill)
{
    this->bill = bill;
}
Room Ticket::getRoom()
{
    return room;
}
void Ticket::setRoom(Room room)
{
    this->room = room;
}
double Ticket::getPrice()
{
    return price;
}
void Ticket::setPrice(double price)
{
    this->price = price;
}
string Ticket::toString()
{
    return to_string(id) + "|" + to_string(movie.getId()) + "|" + to_string(seat.getId()) + "|" + to_string(schedule.getId()) + "|" + to_string(bill.getId()) + "|" + to_string(room.getId()) + "|" + to_string(price) + "|";
}
bool Ticket::operator==(const Ticket &a) const
{
    return a.id == id;
}