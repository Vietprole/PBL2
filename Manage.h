

#ifndef Manage_H
#define Manage_H
#include <iostream>
#include "DAO.h"
#include "BillDetail.h"
class Manage
{
    // private:
    // enum class SortType
    // {
    //     Ascending = 1,
    //     Descending
    // };
    // pair<bool, SortType> m_isSorted;
    // void sort(SortType sortType);

public:
    Manage();
    ~Manage();
    DAO dao;
    const string bill_data = "data/bill.txt";
    const string ticket_data = "data/ticket.txt";
    const string seat_data = "data/seat.txt";
    const string movie_data = "data/movie.txt";
    const string schedule_data = "data/schedule.txt";
    const string customer_data = "data/customer.txt";
    const string room_data = "data/room.txt";

    // LinkedList<Bill> listBill; //= dao.getAllBill(bill_data);
    // LinkedList<Ticket> listTicket;// = dao.getAllTicket(ticket_data);
    // LinkedList<Seat> listSeat; //= dao.getAllSeat(seat_data);
    // LinkedList<Movie> listMovie;// = dao.getAllMovie(movie_data);
    // LinkedList<Schedule> listSchedule;// = dao.getAllSchedule(schedule_data);
    // LinkedList<Customer> listCustomer; //= dao.getAllCustomer(customer_data);
    // LinkedList<Room> listRoom; //= dao.getAllRoom(room_data);
    LinkedList<Bill> listBill = dao.getAllBill(bill_data);
    LinkedList<Ticket> listTicket = dao.getAllTicket(ticket_data);
    LinkedList<Seat> listSeat = dao.getAllSeat(seat_data);
    LinkedList<Movie> listMovie = dao.getAllMovie(movie_data);
    LinkedList<Schedule> listSchedule = dao.getAllSchedule(schedule_data);
    LinkedList<Customer> listCustomer = dao.getAllCustomer(customer_data);
    LinkedList<Room> listRoom = dao.getAllRoom(room_data);
    // template <class T>
    // bool ascending(const T &a, const T &b);
    // template <class T>
    // bool descending(const T &a, const T &b);
    void manage_ticket();
    void manage_bill();
    void manage_schedule();
    void manage_customer();
    void manage_seat();
    void manage_room();
    void manage_movie();
    void viewBillDetail();
    void statistic();
    void displayList();
    void add();
    void remove();
    void search();
    void sortList();
    void update();
    void menu();
    void menu2();
};
#endif