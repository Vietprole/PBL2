#include <iostream>
// #include "Bill.h"
// #include "Customer.h"
// #include "Movie.h"
// #include "Schedule.h"
// #include "Seat.h"
// #include "Ticket.h"
#include "Manage.h"
// #include"DAO.h"
#include <string>

// #include <cursesm.h> // curses menu
using namespace std;
// DAO dao;
// const string bill_data = "data/bill.txt";
// const string ticket_data = "data/ticket.txt";
// const string seat_data = "data/seat.txt";
// const string movie_data = "data/movie.txt";
// const string schedule_data = "data/schedule.txt";
// const string customer_data = "data/customer.txt";
// const string room_data = "data/room.txt";
// LinkedList<Bill> listBill;// = dao.getAllBill(bill_data);
// LinkedList<Ticket> listTicket;//= dao.getAllTicket(ticket_data);
// LinkedList<Seat> listSeat = dao.getAllSeat(seat_data);
// LinkedList<Movie> listMovie = dao.getAllMovie(movie_data);
// LinkedList<Schedule> listSchedule;// = dao.getAllSchedule(schedule_data);
// LinkedList<Customer> listCustomer = dao.getAllCustomer(customer_data);
// LinkedList<Room> listRoom = dao.getAllRoom(room_data);
// void viewBillDetail()
// {
   
// }
// void displayList() {
//     cout << "LIEN KE DANH SACH:" << endl;
//     cout << "1. Liet ke danh sach Bill." << endl;
//     cout << "2. Liet ke danh sach Ticket" << endl;
//     cout << "3. Liet ke danh sach Schedule" << endl;
//     cout << "4. Liet ke danh sach Customer." << endl;
//     cout << "5. Liet ke danh sach Movie." << endl;
//     cout << "6. Liet ke danh sach Seat." << endl;
//     cout << "7. Liet ke danh sach Room." << endl;
//     int i;
//     cin >> i;
//     switch (i)
//     {
//     case 1:
//         cout << dao.getAllBill(bill_data).toString();

//         break;
//     case 2:
//         cout << dao.getAllTicket(ticket_data).toString();
//         break;
//     case 3:
//         cout << dao.getAllSchedule(schedule_data).toString();
//         break;
//     case 4:
//         cout << dao.getAllCustomer(customer_data).toString();
//         break;
//     case 5:
//         cout << dao.getAllMovie(movie_data).toString();
//         break;
//     case 6:
//         cout << dao.getAllSeat(seat_data).toString();
//         break;
//     case 7:
//         cout << dao.getAllRoom(room_data).toString();
//         break;
//     }
// }
// void add() {
//     Bill bill;
//     Ticket ticket;
//     Schedule schedule;
//     Customer customer;
//     Movie movie;
//     Seat seat;
//     Room room;
//     cout << "THEM VAO DANH SACH:" << endl;
//     cout << "1. Danh sach Bill." << endl;
//     cout << "2. Danh sach Ticket" << endl;
//     cout << "3. Danh sach Schedule" << endl;
//     cout << "4. Danh sach Customer." << endl;
//     cout << "5. Danh sach Movie." << endl;
//     cout << "6. Danh sach Seat." << endl;
//     cout << "7. Danh sach Room." << endl;
//     int i, j, c = 0;
//     cin >> i;
//     switch (i)
//     {
//     case 1:
//         // Bill bill;
//         // cout << "Nhap thong tin Bill:" << endl;
//         // cout << "Nhap id:";
//         // listBill.push_back(bill);
//         do
//         {
//             cout << "Nhap thong tin hoa don:" << endl;
//             bill.setId(dao.getCountIdBill());
//             cin >> bill;
//             listBill.push_back(bill);c++;
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveCustomer(listCustomer);
//                 dao.setCountIdBill(c + dao.getCountIdBill());
//                 break;
//             }
//         } while (1);
//         break;
//     case 2:
//         do
//         {
//             cout << "Nhap thong tin khach hang:" << endl;
//             customer.setId(dao.getCountIdCustomer());
//             cin >> customer;
//             listCustomer.push_back(customer);
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveCustomer(listCustomer);
//                 break;
//             }
//         } while (1);
//         break;
//     case 3:
//         do
//         {
//             cout << "Nhap thong tin lich:" << endl;
//             customer.setId(dao.getCountIdCustomer());
//             cin >> customer;
//             listCustomer.push_back(customer);
//             c++;
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveCustomer(listCustomer);
//                 dao.setCountIdCustomer(c + dao.getCountIdCustomer());
//                 break;
//             }
//         } while (1);

//         break;
//     case 4:
//         do
//         {
//             cout << "Nhap thong tin khach hang:" << endl;
//             customer.setId(dao.getCountIdCustomer());
//             cin >> customer;
//             listCustomer.push_back(customer);
//             c++;
//             cout << listCustomer.toString();
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveCustomer(listCustomer);
//                 dao.setCountIdCustomer(c + dao.getCountIdCustomer());
//                 break;
//             }
//         } while (1);

//         break;
//     case 5:
//         do
//         {
//             cout << "Nhap thong tin phim:" << endl;
//             movie.setId(dao.getCountIdMovie());
//             cin >> movie;
//             listMovie.push_back(movie);
//             c++;
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveMovie(listMovie);
//                 dao.setCountIdMovie(c + dao.getCountIdMovie());
//                 break;
//             }
//         } while (1);
//         break;
//     case 6:
//         do
//         {
//             cout << "Nhap thong tin ghe:" << endl;
//             seat.setId(dao.getCountIdSeat());
//             cin >> seat;
//             listSeat.push_back(seat);
//             c++;
//             //cout << listSeat.toString();
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveSeat(listSeat);
//                 dao.setCountIdSeat(c + dao.getCountIdSeat());
//                 break;
//             }
//         } while (1);
//         break;

//     case 7:
//         do
//         {
//             cout << "Nhap thong tin phong:" << endl;
//             room.setId(dao.getCountIdRoom());
//             cin >> room;
//             listRoom.push_back(room);
//             c++;
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveRoom(listRoom);
//                 dao.setCountIdRoom(c + dao.getCountIdRoom());
//                 break;
//             }
//         } while (1);
//         break;
//     }
// }
// void remove() {
//     cout << "XOA KHOI DANH SACH:" << endl;
//     cout << "1. Danh sach Bill." << endl;
//     cout << "2. Danh sach Ticket" << endl;
//     cout << "3. Danh sach Schedule" << endl;
//     cout << "4. Danh sach Customer." << endl;
//     cout << "5. Danh sach Movie." << endl;
//     cout << "6. Danh sach Seat." << endl;
//     cout << "7. Danh sach Room." << endl;
//     int i, j, c = 0, id;
//     cin >> i;
//     switch (i)
//     {
//     case 1:
//         do
//         {
//             cout << listBill.toString() << endl;
//             cout << "Nhap id de xoa:" << endl;
//             cin >> id;
//             listBill.remove(dao.findBillById(id));
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveBill(listBill);
//                 break;
//             }
//         } while (1);
//         break;
//     case 2:
//         do
//         {
//             cout << listTicket.toString() << endl;
//             cout << "Nhap id de xoa:" << endl;
//             cin >> id;
//             listTicket.remove(dao.findTicketById(id));
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveTicket(listTicket);
//                 break;
//             }
//         } while (1);
//         break;
//     case 3:
//         do
//         {
//             cout << listSchedule.toString() << endl;
//             cout << "Nhap id de xoa:" << endl;
//             cin >> id;
//             listSchedule.remove(dao.findScheduleById(id));
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveSchedule(listSchedule);
//                 break;
//             }
//         } while (1);
//         break;
//     case 4:
//         do
//         {
//             cout << listCustomer.toString() << endl;
//             cout << "Nhap id de xoa:" << endl;
//             cin >> id;
//             listCustomer.remove(dao.findCusById(id));
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveCustomer(listCustomer);
//                 break;
//             }
//         } while (1);
//         break;
//     case 5:
//         do
//         {
//             cout << listMovie.toString() << endl;
//             cout << "Nhap id de xoa:" << endl;
//             cin >> id;
//             listMovie.remove(dao.findMovieById(id));
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveMovie(listMovie);
//                 break;
//             }
//         } while (1);
//         break;
//     case 6:
//         do
//         {
//             cout << listSeat.toString() << endl;
//             cout << "Nhap id de xoa:" << endl;
//             cin >> id;
//             listSeat.remove(dao.findSeatById(id));
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveSeat(listSeat);
//                 break;
//             }
//         } while (1);
//         break;
//     case 7:
//         do
//         {
//             cout << listRoom.toString() << endl;
//             cout << "Nhap id de xoa:" << endl;
//             cin >> id;
//             listRoom.remove(dao.findRoomById(id));
//             cout << endl;
//             cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
//             cin >> j;
//             if (j == 1)
//             {
//                 dao.saveRoom(listRoom);
//                 break;
//             }
//         } while (1);
//         break;
//     }
// }
// void search() {}
// void sortList() {}
// void update() {}
// void menu1() {}
int main()
{
    //add();
    // Customer cus;
    // Room room;
    // // cout << listCustomer.toString() <<endl;
    // // cout << listMovie.toString() <<endl;
    // // cout << listSeat.toString() <<endl;
    // cout << listRoom.toString() <<endl;
    // cin >> room;
    // listRoom.push_back(room);
    // cout << listRoom.toString() <<endl;
    // dao.saveRoom(listRoom);
    //add();
     //cout << "1";
    Manage a;
//    DAO dao;
    //a.displayList();
    // a.add();
    // a.remove();
    // a.sortList();
    // a.search();
    // a.update();
//     cout << dao.getAllBill("data/bill.txt").toString() << endl;
//     cout << dao.getAllMovie("data/movie.txt").toString() << endl;
//    cout << dao.getAllSeat("data/seat.txt").toString() << endl;
//     cout << dao.getAllRoom("data/room.txt").toString() << endl;
//     cout << dao.getAllSchedule("data/schedule.txt").toString() << endl;
// cout << stoi("35");
    // cout << dao.getAllTicket("data/ticket.txt").toString() << endl;
//    cout << dao.findCusById(14).toString();
    //cout << dao.getAllSchedule("data/schedule.txt");
   
    a.menu2();
    // a.manage_customer();
    // a.viewBillDetail();
    return 0;
}

