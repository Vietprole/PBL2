

using namespace std;
#ifndef DAO_H
#define DAO_h
#include "Ticket.h"
#include "Bill.h"
// #include"BillDetail.h"
#include "Customer.h"
#include "Movie.h"
#include "Schedule.h"
#include "Seat.h"
#include "LinkedList.h"
#include "Room.h"
#include <fstream>
#include <string>
#include <bits/stdc++.h>
class DAO
{
public:
    int getCountIdBill();
    int getCountIdTicket();
    int getCountIdRoom();
    int getCountIdMovie();
    int getCountIdSchedule();
    int getCountIdCustomer();
    int getCountIdSeat();
    void setCountIdBill(int c);
    void setCountIdTicket(int c);
    void setCountIdRoom(int c);
    void setCountIdMovie(int c);
    void setCountIdSchedule(int c);
    void setCountIdCustomer(int c);
    void setCountIdSeat(int c);
    friend Bill splitBill(string s, char del);
    friend Ticket splitTicket(string s, char del);
    friend Movie splitMovie(string s, char del);
    friend Schedule splitSchedule(string s, char del);
    friend Seat splitSeat(string s, char del);
    friend Room splitRoom(string s, char del);
    friend Customer splitCustomer(string s, char del);
    friend LinkedList<string> readDataFromFile(std::string file);
    friend void writeDataToFile(std::string file, LinkedList<string> list);
    LinkedList<Bill> getAllBill(string file);
    LinkedList<Ticket> getAllTicket(string file);
    LinkedList<Movie> getAllMovie(string file);
    LinkedList<Schedule> getAllSchedule(string file);
    LinkedList<Seat> getAllSeat(string file);
    LinkedList<Room> getAllRoom(string file);
    LinkedList<Customer> getAllCustomer(string file);
    Customer findCusById(int id);
    Seat findSeatById(int id);
    Schedule findScheduleById(int id);
    Movie findMovieById(int id);
    Room findRoomById(int id);
    Bill findBillById(int id);
    Ticket findTicketById(int id);
    LinkedList<Ticket> findListTicketByIdBill(int id);
    LinkedList<Bill> findListBillByIdCustomer(int id);
    LinkedList<Ticket> findListTicketByIdMovie(int id);
    void saveBill(LinkedList<Bill> list);
    void saveMovie(LinkedList<Movie> list);
    void saveSchedule(LinkedList<Schedule> list);
    void saveCustomer(LinkedList<Customer> list);
    void saveTicket(LinkedList<Ticket> list);
    void saveRoom(LinkedList<Room> list);
    void saveSeat(LinkedList<Seat> list);

};

#endif
