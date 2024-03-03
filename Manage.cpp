#include "Manage.h"
// #include "BillDetail.h"
Manage::Manage()
{
    // m_isSorted.first = false;
    // listBill = dao.getAllBill(bill_data);
    // cout << listBill.toString();
    // listTicket = dao.getAllTicket(ticket_data);
    // listSeat = dao.getAllSeat(seat_data);
    // listMovie = dao.getAllMovie(movie_data);
    // listSchedule = dao.getAllSchedule(schedule_data);
    // listCustomer = dao.getAllCustomer(customer_data);
    // listRoom = dao.getAllRoom(room_data);
    // LinkedList<Bill>
    // listBill = dao.getAllBill(bill_data);
    // //LinkedList<Ticket>
    // listTicket = dao.getAllTicket(ticket_data);
    // //LinkedList<Seat>
    // listSeat = dao.getAllSeat(seat_data);
    // //LinkedList<Movie>
    // listMovie = dao.getAllMovie(movie_data);
    // //LinkedList<Schedule>
    // listSchedule = dao.getAllSchedule(schedule_data);
    // //LinkedList<Customer>
    // listCustomer = dao.getAllCustomer(customer_data);
    // //LinkedList<Room>
    // listRoom = dao.getAllRoom(room_data);
}
Manage::~Manage()
{
}
void Manage::displayList()
{
    cout << "LIEN KE DANH SACH:" << endl;
    cout << "1. Liet ke danh sach Bill." << endl;
    cout << "2. Liet ke danh sach Ticket" << endl;
    cout << "3. Liet ke danh sach Schedule" << endl;
    cout << "4. Liet ke danh sach Customer." << endl;
    cout << "5. Liet ke danh sach Movie." << endl;
    cout << "6. Liet ke danh sach Seat." << endl;
    cout << "7. Liet ke danh sach Room." << endl;
    int i;
    cin >> i;
    switch (i)
    {
    case 1:
        cout << dao.getAllBill(bill_data).toString();
        break;
    case 2:
        cout << dao.getAllTicket(ticket_data).toString();
        break;
    case 3:
        cout << dao.getAllSchedule(schedule_data).toString();
        break;
    case 4:
        cout << dao.getAllCustomer(customer_data).toString();
        break;
    case 5:
        cout << dao.getAllMovie(movie_data).toString();
        break;
    case 6:
        cout << dao.getAllSeat(seat_data).toString();
        break;
    case 7:
        cout << dao.getAllRoom(room_data).toString();
        break;
    }
}
void Manage::add()
{
    Bill bill;
    Ticket ticket;
    Schedule schedule;
    Customer customer;
    Movie movie;
    Seat seat;
    Room room;
    cout << "THEM VAO DANH SACH:" << endl;
    cout << "1. Danh sach Bill." << endl;
    cout << "2. Danh sach Ticket" << endl;
    cout << "3. Danh sach Schedule" << endl;
    cout << "4. Danh sach Customer." << endl;
    cout << "5. Danh sach Movie." << endl;
    cout << "6. Danh sach Seat." << endl;
    cout << "7. Danh sach Room." << endl;
    int i, j, c = 0;
    cin >> i;
    switch (i)
    {
    case 1:
        // Bill bill;
        cout << "Nhap thong tin Bill:" << endl;
        cout << "Nhap id:";
        listBill.push_back(bill);

        break;
    case 2:
        do
        {
            cout << "Nhap thong tin khach hang:" << endl;
            customer.setId(dao.getCountIdCustomer());
            cin >> customer;
            listCustomer.push_back(customer);
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveCustomer(listCustomer);
                break;
            }
        } while (1);
        break;
    case 3:
        do
        {
            cout << "Nhap thong tin lich:" << endl;
            customer.setId(c + dao.getCountIdCustomer());
            cin >> customer;
            listCustomer.push_back(customer);
            c++;
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveCustomer(listCustomer);
                dao.setCountIdCustomer(c + dao.getCountIdCustomer());
                break;
            }
        } while (1);

        break;
    case 4:
        do
        {
            cout << "Nhap thong tin khach hang:" << endl;
            customer.setId(c + dao.getCountIdCustomer());
            cin >> customer;
            listCustomer.push_back(customer);
            c++;
            cout << listCustomer.toString();
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveCustomer(listCustomer);
                dao.setCountIdCustomer(c + dao.getCountIdCustomer());
                break;
            }
        } while (1);

        break;
    case 5:
        do
        {
            cout << "Nhap thong tin phim:" << endl;
            movie.setId(c + dao.getCountIdMovie());
            cin >> movie;
            listMovie.push_back(movie);
            c++;
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                cout << c + dao.getCountIdMovie();
                dao.setCountIdMovie(c + dao.getCountIdMovie());
                dao.saveMovie(listMovie);
                break;
            }
        } while (1);
        break;
    case 6:
        do
        {
            cout << "Nhap thong tin ghe:" << endl;
            seat.setId(c + dao.getCountIdSeat());
            cin >> seat;
            listSeat.push_back(seat);
            c++;
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveSeat(listSeat);
                cout << c + dao.getCountIdSeat();
                dao.setCountIdSeat(c + dao.getCountIdSeat());
                break;
            }
        } while (1);
        break;

    case 7:
        do
        {
            cout << "Nhap thong tin phong:" << endl;
            room.setId(c + dao.getCountIdRoom());
            cin >> room;
            listRoom.push_back(room);
            c++;
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveRoom(listRoom);
                dao.setCountIdRoom(c + dao.getCountIdRoom());
                break;
            }
        } while (1);
        break;
    }
}

void Manage::remove()
{
    cout << "XOA KHOI DANH SACH:" << endl;
    cout << "1. Danh sach Bill." << endl;
    cout << "2. Danh sach Ticket" << endl;
    cout << "3. Danh sach Schedule" << endl;
    cout << "4. Danh sach Customer." << endl;
    cout << "5. Danh sach Movie." << endl;
    cout << "6. Danh sach Seat." << endl;
    cout << "7. Danh sach Room." << endl;
    int i, j, c = 0, id;
    cin >> i;
    switch (i)
    {
    case 1:
        do
        {
            cout << listBill.toString() << endl;
            cout << "Nhap id de xoa:" << endl;
            cin >> id;
            listBill.remove(dao.findBillById(id));
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveBill(listBill);
                break;
            }
        } while (1);
        break;
    case 2:
        do
        {
            cout << listTicket.toString() << endl;
            cout << "Nhap id de xoa:" << endl;
            cin >> id;
            listTicket.remove(dao.findTicketById(id));
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveTicket(listTicket);
                break;
            }
        } while (1);
        break;
    case 3:
        do
        {
            cout << listSchedule.toString() << endl;
            cout << "Nhap id de xoa:" << endl;
            cin >> id;
            listSchedule.remove(dao.findScheduleById(id));
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveSchedule(listSchedule);
                break;
            }
        } while (1);
        break;
    case 4:
        do
        {
            cout << listCustomer.toString() << endl;
            cout << "Nhap id de xoa:" << endl;
            cin >> id;
            listCustomer.remove(dao.findCusById(id));
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
            cin >> j;
            cout << listCustomer.toString();
            if (j == 1)
            {

                dao.saveCustomer(listCustomer);
                break;
            }
        } while (1);
        break;
    case 5:
        do
        {
            cout << listMovie.toString() << endl;
            cout << "Nhap id de xoa:" << endl;
            cin >> id;
            listMovie.remove(dao.findMovieById(id));
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveMovie(listMovie);
                break;
            }
        } while (1);
        break;
    case 6:
        do
        {
            cout << listSeat.toString() << endl;
            cout << "Nhap id de xoa:" << endl;
            cin >> id;
            listSeat.remove(dao.findSeatById(id));
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveSeat(listSeat);
                break;
            }
        } while (1);
        break;
    case 7:
        do
        {
            cout << listRoom.toString() << endl;
            cout << "Nhap id de xoa:" << endl;
            cin >> id;
            listRoom.remove(dao.findRoomById(id));
            cout << endl;
            cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
            cin >> j;
            if (j == 1)
            {
                dao.saveRoom(listRoom);
                break;
            }
        } while (1);
        break;
    }
}
void Manage::search()
{
    Bill bill;
    Ticket ticket;
    Schedule schedule;
    Customer customer;
    Movie movie;
    Seat seat;
    Room room;
    cout << "TIM TRONG DANH SACH:" << endl;
    cout << "1. Danh sach Bill." << endl;
    cout << "2. Danh sach Ticket" << endl;
    cout << "3. Danh sach Schedule" << endl;
    cout << "4. Danh sach Customer." << endl;
    cout << "5. Danh sach Movie." << endl;
    cout << "6. Danh sach Seat." << endl;
    cout << "7. Danh sach Room." << endl;
    int i, j, c = 0, id;
    cin >> i;
    switch (i)
    {
    case 1:
        do
        {
            cout << listBill.toString() << endl;
            cout << "Nhap id:" << endl;
            cin >> id;
            listBill.remove(dao.findBillById(id));
            cout << endl;
        } while (1);
        break;
    case 2:
        do
        {
            cout << listTicket.toString() << endl;
            cout << "Nhap id:" << endl;
            cin >> id;
            // cout << dao.find
            cout << endl;
        } while (1);
        break;
    case 3:
        do
        {
            cout << listSchedule.toString() << endl;
            cout << "Nhap id:" << endl;
            cin >> id;
            listSchedule.remove(dao.findScheduleById(id));
            cout << endl;
        } while (1);
        break;
    case 4:
        cout << listCustomer.toString() << endl;
        do
        {
            cout << "Nhap id:" << endl;
            cin >> id;
            cout << dao.findCusById(id).toString();
            cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
            cin >> j;
            if (j != 1)
            {
                break;
            }
        } while (1);
        break;
    case 5:
        cout << listMovie.toString() << endl;
        do
        {
            cout << "Nhap id:" << endl;
            cin >> id;
            cout << dao.findMovieById(id).toString();
            cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
            cin >> j;
            if (j != 1)
            {
                break;
            }
        } while (1);
        break;
    case 6:
        cout << listSeat.toString() << endl;
        do
        {
            cout << "Nhap id:" << endl;
            cin >> id;
            cout << dao.findSeatById(id).toString();
            cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
            cin >> j;
            if (j != 1)
            {
                break;
            }
        } while (1);
        break;
    case 7:
        cout << listRoom.toString() << endl;
        do
        {
            cout << "Nhap id:" << endl;
            cin >> id;
            cout << dao.findRoomById(id).toString();
            cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
            cin >> j;
            if (j != 1)
            {
                break;
            }
        } while (1);
        break;
    }
}
template <class T>
bool ascending(const T &a, const T &b)
{
    return a.getId() < b.getId();
}
template <class T>
bool descending(const T &a, const T &b)
{
    return !ascending(a, b);
}
void Manage::sortList()
{
    cout << "SAP XEP DANH SACH:" << endl;
    cout << "1. Danh sach Bill." << endl;
    cout << "2. Danh sach Ticket" << endl;
    cout << "3. Danh sach Schedule" << endl;
    cout << "4. Danh sach Customer." << endl;
    cout << "5. Danh sach Movie." << endl;
    cout << "6. Danh sach Seat." << endl;
    cout << "7. Danh sach Room." << endl;
    int i, j, c = 0, id;
    cin >> i;
    switch (i)
    {
    case 1:
        cout << listBill.toString() << endl;
        cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
        cin >> j;
        if (j == 1)
        {
            cout << listBill.sorting(ascending<Bill>).toString();
            system("pause");
        }
        else
            cout << listBill.sorting(descending<Bill>).toString();
        system("pause");
        break;
    case 2:
        cout << listBill.toString() << endl;

        cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
        cin >> j;
        if (j == 1)
        {
            cout << listBill.sorting(ascending<Bill>).toString();
        }
        else
            cout << listBill.sorting(descending<Bill>).toString();
        break;
    case 3:
        cout << listBill.toString() << endl;
        cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
        cin >> j;
        if (j == 1)
        {
            cout << listBill.sorting(ascending<Bill>).toString();
        }
        else
            cout << listBill.sorting(descending<Bill>).toString();
        break;
    case 4:
        cout << listCustomer.toString() << endl;
        cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
        cin >> j;
        if (j == 1)
        {
            cout << listCustomer.sorting(ascending<Customer>).toString();
        }
        else
            cout << listCustomer.sorting(descending<Customer>).toString();
        break;
    case 5:
        cout << listMovie.toString() << endl;
        cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
        cin >> j;
        if (j == 1)
        {
            cout << listMovie.sorting(ascending<Movie>).toString();
        }
        else
            cout << listMovie.sorting(descending<Movie>).toString();
        break;
    case 6:
        cout << listSeat.toString() << endl;
        cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
        cin >> j;
        if (j == 1)
        {
            cout << listSeat.sorting(ascending<Seat>).toString();
        }
        else
            cout << listSeat.sorting(descending<Seat>).toString();
        break;
    case 7:
        cout << listRoom.toString() << endl;
        cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
        cin >> j;
        if (j == 1)
        {
            cout << listRoom.sorting(ascending<Room>).toString();
        }
        else
            cout << listRoom.sorting(descending<Room>).toString();
        break;
    }
}
void Manage::update()
{
    Bill bill;
    Ticket ticket;
    Schedule schedule;
    Customer customer;
    Movie movie;
    Seat seat;
    Room room;
    cout << "THAY DOI TRONG DANH SACH:" << endl;
    cout << "1. Danh sach Bill." << endl;
    cout << "2. Danh sach Ticket" << endl;
    cout << "3. Danh sach Schedule" << endl;
    cout << "4. Danh sach Customer." << endl;
    cout << "5. Danh sach Movie." << endl;
    cout << "6. Danh sach Seat." << endl;
    cout << "7. Danh sach Room." << endl;
    int i, j, c = 0, id;
    cin >> i;
    switch (i)
    {
    case 1:
        do
        {
            cout << listBill.toString() << endl;
            cout << "Nhap id:" << endl;
            cin >> id;
            listBill.remove(dao.findBillById(id));
            cout << endl;
        } while (1);
        break;
    case 2:
        do
        {
            cout << listTicket.toString() << endl;
            cout << "Nhap id:" << endl;
            cin >> id;
            // cout << dao.find
            cout << endl;
        } while (1);
        break;
    case 3:
        do
        {
            cout << listSchedule.toString() << endl;
            cout << "Nhap id:" << endl;
            cin >> id;
            listSchedule.remove(dao.findScheduleById(id));
            cout << endl;
        } while (1);
        break;
    case 4:
        cout << listCustomer.toString() << endl;
        do
        {
            cout << "Nhap id:" << endl;
            cin >> id;
            cout << dao.findCusById(id).toString();
            customer.setId(dao.findCusById(id).getId());
            cin >> customer;
            listCustomer.update(customer);
            cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
            cin >> j;
            if (j != 1)
            {
                cout << listCustomer.toString();
                dao.saveCustomer(listCustomer);
                break;
            }
        } while (1);
        break;
    case 5:
        cout << listMovie.toString() << endl;
        do
        {
            cout << "Nhap id:" << endl;
            cin >> id;
            cout << dao.findMovieById(id).toString();
            movie.setId(dao.findMovieById(id).getId());
            cin >> movie;
            listMovie.update(movie);
            cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
            cin >> j;
            if (j != 1)
            {
                cout << listMovie.toString();
                dao.saveMovie(listMovie);
                break;
            }
        } while (1);
        break;
    case 6:
        cout << listSeat.toString() << endl;
        do
        {
            cout << "Nhap id:" << endl;
            cin >> id;
            cout << dao.findSeatById(id).toString();
            seat.setId(dao.findSeatById(id).getId());
            cin >> seat;
            listSeat.update(seat);
            cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
            cin >> j;
            if (j != 1)
            {
                cout << listSeat.toString();
                dao.saveSeat(listSeat);
                break;
            }
        } while (1);
        break;
    case 7:
        cout << listRoom.toString() << endl;
        do
        {
            cout << "Nhap id:" << endl;
            cin >> id;
            cout << dao.findRoomById(id).toString();
            room.setId(dao.findRoomById(id).getId());
            cin >> room;
            listRoom.update(room);
            cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
            cin >> j;
            if (j != 1)
            {
                cout << listRoom.toString();
                dao.saveRoom(listRoom);
                break;
            }
        } while (1);
        break;
    }
}

void Manage::viewBillDetail()
{
    int i;
    cout << "Nhap ma hoa don de xem chi tiet:";
    cin >> i;
    // dao.findBillById(i);
    Bill bill = dao.findBillById(i);
    BillDetail billDetail;
    billDetail.setId(bill.getId());
    billDetail.setCreatedTime(bill.getCreatedTime());
    billDetail.setCustomer(bill.getCustomer());
    // billDetail.setListTicket(dao.findListTicketByIdBill(i));
    cout << dao.findListTicketByIdBill(i).toString();
}
void Manage::manage_ticket()
{
    int task, subtask, j, id, c = 0;
    double price;
    Ticket ticket;
    do
    {
        system("cls");
        cout << " ------------------------- " << endl;
        cout << "|  Quan ly ve xem phim:   |" << endl;
        cout << "1. Liet ke danh sach." << endl;
        cout << "2. Them vao danh sach." << endl;
        cout << "3. Thay doi thong tin." << endl;
        cout << "4. Xoa khoi danh sach." << endl;
        cout << "5. Tim trong danh sach." << endl;
        cout << "6. Sap xep danh sach." << endl;
        cout << "7. Quay lai." << endl;
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            cout << dao.getAllTicket(ticket_data).toString();
            system("pause");
            break;
        case 2:
            // add();
            do
            {
                cout << "Nhap thong tin ve xem phim:" << endl;
                ticket.setId(c + dao.getCountIdTicket());
                // cin >> ticket;
                cout << dao.getAllMovie(movie_data).toString() << endl;
                cout << "Nhap id phim:" << endl;
                cin >> id;
                ticket.setMovie(dao.findMovieById(id));
                cout << dao.getAllSeat(seat_data).toString() << endl;
                cout << "Nhap id ghe:" << endl;
                cin >> id;
                ticket.setSeat(dao.findSeatById(id));
                cout << dao.getAllSchedule(schedule_data).toString() << endl;
                cout << "Nhap id lich chieu:" << endl;
                cin >> id;
                ticket.setSchedule(dao.findScheduleById(id));
                cout << dao.getAllBill(bill_data).toString() << endl;
                cout << "Nhap id bill:" << endl;
                cin >> id;
                ticket.setBill(dao.findBillById(id));
                cout << dao.getAllRoom(room_data).toString() << endl;
                cout << "Nhap id phim:" << endl;
                cin >> id;
                ticket.setRoom(dao.findRoomById(id));
                cout << "Nhap gia ve:" << endl;
                cin >> price;
                ticket.setPrice(price);
                listTicket.push_back(ticket);
                c++;

                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveTicket(listTicket);
                    dao.setCountIdTicket(c + dao.getCountIdTicket());
                    break;
                }
            } while (1);

            system("pause");
            break;
        case 3:
        {
            // system("cls");
            // cout << "Nhap k: ";
            // int k;
            // cin >> k;
            // update();
            cout << dao.getAllTicket(ticket_data).toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findTicketById(id).toString();
                ticket.setId(dao.findTicketById(id).getId());
                // cin >> ticket;
                cout << dao.getAllMovie(movie_data).toString() << endl;
                cout << "Nhap id phim:" << endl;
                cin >> id;
                ticket.setMovie(dao.findMovieById(id));
                cout << dao.getAllSeat(seat_data).toString() << endl;
                cout << "Nhap id ghe:" << endl;
                cin >> id;
                ticket.setSeat(dao.findSeatById(id));
                cout << dao.getAllSchedule(schedule_data).toString() << endl;
                cout << "Nhap id lich chieu:" << endl;
                cin >> id;
                ticket.setSchedule(dao.findScheduleById(id));
                cout << dao.getAllBill(bill_data).toString() << endl;
                cout << "Nhap id hoa don:" << endl;
                cin >> id;
                ticket.setBill(dao.findBillById(id));
                cout << dao.getAllRoom(room_data).toString() << endl;
                cout << "Nhap id phong:" << endl;
                cin >> id;
                ticket.setRoom(dao.findRoomById(id));
                cout << "Nhap gia ve:" << endl;
                cin >> price;
                ticket.setPrice(price);
                listTicket.update(ticket);
                cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    // cout << listTicket.toString();
                    dao.saveTicket(listTicket);
                    break;
                }
            } while (1);
            system("pause");
            break;
        }
        case 4:
            // remove();
            cout << dao.getAllTicket(ticket_data).toString() << endl;
            do
            {

                cout << "Nhap id de xoa:" << endl;
                cin >> id;
                listTicket.remove(dao.findTicketById(id));
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveTicket(listTicket);
                    break;
                }
            } while (1);
            system("pause");
            break;
        case 5:
            // system("cls");
            // search();
            cout << dao.getAllTicket(ticket_data).toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findTicketById(id).toString();
                cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    break;
                }
            } while (1);
            break;
            system("pause");
            break;
        case 6:
            // sortList();
            cout << listTicket.toString() << endl;
            cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
            cin >> j;
            if (j == 1)
            {
                cout << listTicket.sorting(ascending<Ticket>).toString();
            }
            else
                cout << listTicket.sorting(descending<Ticket>).toString();
            system("pause");
            break;
        case 7:
            // viewBillDetail();
            cout << "Back to previous page!";
            system("pause");
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;

            break;
        }
    } while (task != 7);
}
void Manage::manage_bill()
{
    int task, subtask, j, id, c = 0;
    double total;
    Bill bill;
    do
    {
        system("cls");
        cout << " ------------------------- " << endl;
        cout << "|  Quan ly hoa don:   |" << endl;
        cout << "1. Liet ke danh sach." << endl;
        cout << "2. Them vao danh sach." << endl;
        cout << "3. Thay doi thong tin." << endl;
        cout << "4. Xoa khoi danh sach." << endl;
        cout << "5. Tim trong danh sach." << endl;
        cout << "6. Sap xep danh sach." << endl;
        cout << "7. Xem hoa don chi tiet." << endl;
        cout << "8. Quay lai." << endl;
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            cout << dao.getAllBill(bill_data).toString();
            system("pause");
            break;
        case 2:
            // add();
            do
            {
                cout << "Nhap thong tin hoa don:" << endl;
                bill.setId(c + dao.getCountIdBill());
                cin >> bill;
                cout << dao.getAllCustomer(customer_data).toString() << endl;
                cout << "Nhap id customer trong danh sach tren:" << endl;
                cin >> id;
                bill.setCustomer(dao.findCusById(id));
                bill.setTotal(0);
                listBill.push_back(bill);
                c++;
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveBill(listBill);
                    dao.setCountIdBill(c + dao.getCountIdBill());
                    break;
                }
            } while (1);

            system("pause");
            break;
        case 3:
        {
            // system("cls");
            // cout << "Nhap k: ";
            // int k;
            // cin >> k;
            // update();
            cout << listBill.toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findBillById(id).toString();
                bill.setId(dao.findBillById(id).getId());
                cin >> bill;
                cout << dao.getAllCustomer(customer_data).toString() << endl;
                cout << "Nhap id customer trong danh sach tren:" << endl;
                cin >> id;
                bill.setCustomer(dao.findCusById(id));
                cout << "Nhap tong bill:" << endl;
                cin >> total;
                bill.setTotal(total);
                listBill.update(bill);
                cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    // cout << listBill.toString();
                    dao.saveBill(listBill);
                    break;
                }
            } while (1);
            system("pause");
            break;
        }
        case 4:
            // remove();
            do
            {
                cout << listBill.toString() << endl;
                cout << "Nhap id de xoa:" << endl;
                cin >> id;
                listBill.remove(dao.findBillById(id));
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveBill(listBill);
                    break;
                }
            } while (1);
            system("pause");
            break;
        case 5:
            // system("cls");
            // search();
            cout << listBill.toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findBillById(id).toString();
                cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    break;
                }
            } while (1);
            break;
            system("pause");
            break;
        case 6:
            // sortList();
            cout << listBill.toString() << endl;
            cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
            cin >> j;
            if (j == 1)
            {
                cout << listBill.sorting(ascending<Bill>).toString();
            }
            else
                cout << listBill.sorting(descending<Bill>).toString();
            system("pause");
            break;
        case 7:
            // viewBillDetail();
            cout << "Nhap id:" << endl;
            cin >> id;
            cout << dao.findListTicketByIdBill(id).toString();
            system("pause");
            break;
        case 8:
            // viewBillDetail();
            cout << "Back to previous page!";
            // system("pause");
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;

            break;
        }
    } while (task != 8);
}
void Manage::manage_schedule()
{
    int task, subtask, j, id, c = 0;
    Schedule obj;
    do
    {
        system("cls");
        cout << " ------------------------- " << endl;
        cout << "|  Quan ly lich chieu phim:   |" << endl;
        cout << "1. Liet ke danh sach." << endl;
        cout << "2. Them vao danh sach." << endl;
        cout << "3. Thay doi thong tin." << endl;
        cout << "4. Xoa khoi danh sach." << endl;
        cout << "5. Tim trong danh sach." << endl;
        cout << "6. Sap xep danh sach." << endl;
        cout << "7. Quay lai." << endl;
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            cout << dao.getAllSchedule(schedule_data).toString() << endl;
            system("pause");
            break;
        case 2:
            // add();
            do
            {
                cout << "Nhap thong tin ve xem phim:" << endl;
                obj.setId(c + dao.getCountIdSchedule());
                cin >> obj;
                listSchedule.push_back(obj);
                c++;
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveSchedule(listSchedule);
                    dao.setCountIdSchedule(c + dao.getCountIdSchedule());
                    break;
                }
            } while (1);

            system("pause");
            break;
        case 3:
        {
            // system("cls");
            // cout << "Nhap k: ";
            // int k;
            // cin >> k;
            // update();
            cout << dao.getAllSchedule(schedule_data).toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findScheduleById(id).toString();
                obj.setId(dao.findScheduleById(id).getId());
                cin >> obj;
                listSchedule.update(obj);
                cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    cout << listSchedule.toString();
                    dao.saveSchedule(listSchedule);
                    break;
                }
            } while (1);
            system("pause");
            break;
        }
        case 4:
            // remove();
            cout << dao.getAllSchedule(schedule_data).toString() << endl;
            do
            {
                cout << listSchedule.toString() << endl;
                cout << "Nhap id de xoa:" << endl;
                cin >> id;
                listSchedule.remove(dao.findScheduleById(id));
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveSchedule(listSchedule);
                    break;
                }
            } while (1);
            system("pause");
            break;
        case 5:
            // system("cls");
            // search();
            cout << dao.getAllSchedule(schedule_data).toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findScheduleById(id).toString();
                cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    break;
                }
            } while (1);
            break;
            system("pause");
            break;
        case 6:
            // sortList();
            cout << dao.getAllSchedule(schedule_data).toString() << endl;
            cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
            cin >> j;
            if (j == 1)
            {
                cout << listSchedule.sorting(ascending<Schedule>).toString();
            }
            else
                cout << listSchedule.sorting(descending<Schedule>).toString();
            system("pause");
            break;
        case 7:
            // viewBillDetail();
            cout << "Back to previous page!";
            // system("pause");
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;

            break;
        }
    } while (task != 7);
}
void Manage::manage_customer()
{
    int task, subtask, j, id, c = 0;
    Customer obj;
    do
    {
        system("cls");
        cout << " ------------------------- " << endl;
        cout << "|  Quan ly khach hang:   |" << endl;
        cout << "1. Liet ke danh sach." << endl;
        cout << "2. Them vao danh sach." << endl;
        cout << "3. Thay doi thong tin." << endl;
        cout << "4. Xoa khoi danh sach." << endl;
        cout << "5. Tim trong danh sach." << endl;
        cout << "6. Sap xep danh sach." << endl;
        cout << "7. Quay lai." << endl;
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            cout << dao.getAllCustomer(customer_data).toString() << endl;
            system("pause");
            break;
        case 2:
            // add();
            cout << dao.getAllCustomer(customer_data).toString() << endl;
            do
            {
                cout << "Nhap thong tin ve xem phim:" << endl;
                obj.setId(c + dao.getCountIdCustomer());
                cin >> obj;
                listCustomer.push_back(obj);
                c++;
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    // cout << listCustomer.toString();
                    dao.setCountIdCustomer(c + dao.getCountIdCustomer());
                    dao.saveCustomer(listCustomer);

                    break;
                }
            } while (1);

            system("pause");
            break;
        case 3:
        {
            // system("cls");
            // cout << "Nhap k: ";
            // int k;
            // cin >> k;
            // update();
            cout << dao.getAllCustomer(customer_data).toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findCusById(id).toString() << endl;
                obj.setId(dao.findCusById(id).getId());
                cin >> obj;
                listCustomer.update(obj);
                cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    // cout << listCustomer.toString();
                    dao.saveCustomer(listCustomer);
                    break;
                }
            } while (1);
            system("pause");
            break;
        }
        case 4:
            // remove();
            cout << dao.getAllCustomer(customer_data).toString() << endl;
            do
            {

                cout << "Nhap id de xoa:" << endl;
                cin >> id;
                listCustomer.remove(dao.findCusById(id));
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveCustomer(listCustomer);
                    break;
                }
            } while (1);
            system("pause");
            break;
        case 5:
            // system("cls");
            // search();
            cout << dao.getAllCustomer(customer_data).toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findCusById(id).toString();
                cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    break;
                }
            } while (1);
            break;
            system("pause");
            break;
        case 6:
            // sortList();
            cout << dao.getAllCustomer(customer_data).toString() << endl;
            cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
            cin >> j;
            if (j == 1)
            {
                cout << listCustomer.sorting(ascending<Customer>).toString();
            }
            else
                cout << listCustomer.sorting(descending<Customer>).toString();
            system("pause");
            break;
        case 7:
            // viewBillDetail();
            cout << "Back to previous page!";
            // system("pause");
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;

            break;
        }
    } while (task != 7);
}
void Manage::manage_seat()
{
    int task, subtask, j, id, c = 0;
    Seat obj;
    do
    {
        system("cls");
        cout << " ------------------------- " << endl;
        cout << "|  Quan ly ghe xem phim:   |" << endl;
        cout << "1. Liet ke danh sach." << endl;
        cout << "2. Them vao danh sach." << endl;
        cout << "3. Thay doi thong tin." << endl;
        cout << "4. Xoa khoi danh sach." << endl;
        cout << "5. Tim trong danh sach." << endl;
        cout << "6. Sap xep danh sach." << endl;
        cout << "7. Quay lai." << endl;
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            cout << dao.getAllSeat(seat_data).toString() << endl;
            system("pause");
            break;
        case 2:
            // add();
            do
            {
                cout << "Nhap thong tin ve xem phim:" << endl;
                obj.setId(c + dao.getCountIdSeat());
                cin >> obj;
                listSeat.push_back(obj);
                c++;
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveSeat(listSeat);
                    dao.setCountIdSeat(c + dao.getCountIdSeat());
                    break;
                }
            } while (1);

            system("pause");
            break;
        case 3:
        {
            // system("cls");
            // cout << "Nhap k: ";
            // int k;
            // cin >> k;
            // update();
            cout << dao.getAllSeat(seat_data).toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findSeatById(id).toString();
                obj.setId(dao.findSeatById(id).getId());
                cin >> obj;
                listSeat.update(obj);
                cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    // cout << listSeat.toString();
                    dao.saveSeat(listSeat);
                    break;
                }
            } while (1);
            system("pause");
            break;
        }
        case 4:
            // remove();
            cout << dao.getAllSeat(seat_data).toString() << endl;
            do
            {

                cout << "Nhap id de xoa:" << endl;
                cin >> id;
                listSeat.remove(dao.findSeatById(id));
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveSeat(listSeat);
                    break;
                }
            } while (1);
            system("pause");
            break;
        case 5:
            // system("cls");
            // search();
            cout << listSeat.toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findSeatById(id).toString();
                cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    break;
                }
            } while (1);
            break;
            system("pause");
            break;
        case 6:
            // sortList();
            cout << dao.getAllSeat(seat_data).toString() << endl;
            cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
            cin >> j;
            if (j == 1)
            {
                cout << listSeat.sorting(ascending<Seat>).toString();
            }
            else
                cout << listSeat.sorting(descending<Seat>).toString();
            system("pause");
            break;
        case 7:
            // viewBillDetail();
            cout << "Back to previous page!";
            // system("pause");
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;

            break;
        }
    } while (task != 7);
}
void Manage::manage_room()
{
    int task, subtask, j, id, c = 0;
    Room obj;
    do
    {
        system("cls");
        cout << " ------------------------- " << endl;
        cout << "|  Quan ly phong xem phim:   |" << endl;
        cout << "1. Liet ke danh sach." << endl;
        cout << "2. Them vao danh sach." << endl;
        cout << "3. Thay doi thong tin." << endl;
        cout << "4. Xoa khoi danh sach." << endl;
        cout << "5. Tim trong danh sach." << endl;
        cout << "6. Sap xep danh sach." << endl;
        cout << "7. Quay lai." << endl;
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            cout << dao.getAllRoom(room_data).toString();
            system("pause");
            break;
        case 2:
            // add();
            do
            {
                cout << "Nhap thong tin ve xem phim:" << endl;
                obj.setId(c + dao.getCountIdRoom());
                cin >> obj;
                listRoom.push_back(obj);
                c++;
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveRoom(listRoom);
                    dao.setCountIdRoom(c + dao.getCountIdRoom());
                    break;
                }
            } while (1);

            system("pause");
            break;
        case 3:
        {
            // system("cls");
            // cout << "Nhap k: ";
            // int k;
            // cin >> k;
            // update();
            cout << dao.getAllRoom(room_data).toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findRoomById(id).toString();
                obj.setId(dao.findRoomById(id).getId());
                cin >> obj;
                listRoom.update(obj);
                cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    cout << listRoom.toString();
                    dao.saveRoom(listRoom);
                    break;
                }
            } while (1);
            system("pause");
            break;
        }
        case 4:
            // remove();
            do
            {
                cout << dao.getAllRoom(room_data).toString() << endl;
                cout << "Nhap id de xoa:" << endl;
                cin >> id;
                listRoom.remove(dao.findRoomById(id));
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveRoom(listRoom);
                    break;
                }
            } while (1);
            system("pause");
            break;
        case 5:
            // system("cls");
            // search();
            cout << listRoom.toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findRoomById(id).toString();
                cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    break;
                }
            } while (1);
            break;
            system("pause");
            break;
        case 6:
            // sortList();
            cout << dao.getAllRoom(room_data).toString() << endl;
            cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
            cin >> j;
            if (j == 1)
            {
                cout << listRoom.sorting(ascending<Room>).toString();
            }
            else
                cout << listRoom.sorting(descending<Room>).toString();
            system("pause");
            break;
        case 7:
            // viewBillDetail();
            cout << "Back to previous page!";
            // system("pause");
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;

            break;
        }
    } while (task != 7);
}
void Manage::manage_movie()
{
    int task, subtask, j, id, c = 0;
    Movie obj;
    do
    {
        system("cls");
        cout << " ------------------------- " << endl;
        cout << "|  Quan ly phim:   |" << endl;
        cout << "1. Liet ke danh sach." << endl;
        cout << "2. Them vao danh sach." << endl;
        cout << "3. Thay doi thong tin." << endl;
        cout << "4. Xoa khoi danh sach." << endl;
        cout << "5. Tim trong danh sach." << endl;
        cout << "6. Sap xep danh sach." << endl;
        cout << "7. Quay lai." << endl;
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            cout << dao.getAllMovie(movie_data).toString();
            system("pause");
            break;
        case 2:
            // add();
            do
            {
                cout << "Nhap thong tin ve xem phim:" << endl;
                obj.setId(c + dao.getCountIdMovie());
                cin >> obj;
                listMovie.push_back(obj);
                c++;
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,them tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveMovie(listMovie);
                    dao.setCountIdMovie(c + dao.getCountIdMovie());
                    break;
                }
            } while (1);

            system("pause");
            break;
        case 3:
        {
            // system("cls");
            // cout << "Nhap k: ";
            // int k;
            // cin >> k;
            // update();
            cout << dao.getAllRoom(room_data).toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findMovieById(id).toString();
                obj.setId(dao.findMovieById(id).getId());
                cin >> obj;
                listMovie.update(obj);
                cout << "Ban co muon tiep tuc update ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    cout << listMovie.toString();
                    dao.saveMovie(listMovie);
                    break;
                }
            } while (1);
            system("pause");
            break;
        }
        case 4:
            // remove();
            cout << dao.getAllRoom(room_data).toString() << endl;
            do
            {
                cout << "Nhap id de xoa:" << endl;
                cin >> id;
                listMovie.remove(dao.findMovieById(id));
                cout << endl;
                cout << "Ban co muon luu ? (1.Yes/2.No,xoa tiep)" << endl;
                cin >> j;
                if (j == 1)
                {
                    dao.saveMovie(listMovie);
                    break;
                }
            } while (1);
            system("pause");
            break;
        case 5:
            // system("cls");
            // search();
            cout << listMovie.toString() << endl;
            do
            {
                cout << "Nhap id:" << endl;
                cin >> id;
                cout << dao.findMovieById(id).toString();
                cout << "Ban co muon tiep tuc search ? (1.Yes/2.No)" << endl;
                cin >> j;
                if (j != 1)
                {
                    break;
                }
            } while (1);
            break;
            system("pause");
            break;
        case 6:
            // sortList();
            cout << listMovie.toString() << endl;
            cout << "Ban sap xep tang hay giam dan id ?(1.Tang/2.Giam)" << endl;
            cin >> j;
            if (j == 1)
            {
                cout << listMovie.sorting(ascending<Movie>).toString();
            }
            else
                cout << listMovie.sorting(descending<Movie>).toString();
            system("pause");
            break;
        case 7:
            // viewBillDetail();
            cout << "Back to previous page!";
            // system("pause");
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;

            break;
        }
    } while (task != 7);
}
void Manage::menu()
{
    string t;
    int task, subtask;
    do
    {
        system("cls");
        cout << "		 ---------------------------------------" << endl
             << "		|   PBL2:                               |" << endl
             << "		|	SELLING MOVIE TICKET MANAGEMENT|" << endl
             << "		|	Nhom: 2			   |" << endl
             << "		 ---------------------------------------" << endl;
        cout << "			---------MENU---------" << endl;
        cout << "1. Liet ke danh sach." << endl;
        cout << "2. Them vao danh sach." << endl;
        cout << "3. Thay doi thong tin." << endl;
        cout << "4. Xoa khoi danh sach." << endl;
        cout << "5. Tim trong danh sach." << endl;
        cout << "6. Sap xep danh sach." << endl;
        cout << "7. Xem hoa don chi tiet." << endl;
        cout << "8. Ket thuc." << endl;
        cout << "Chon chuc nang: ";
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            displayList();
            system("pause");
            break;
        case 2:
            add();
            system("pause");
            break;
        case 3:
        {
            // system("cls");
            // cout << "Nhap k: ";
            // int k;
            // cin >> k;
            update();
            system("pause");
            break;
        }
        case 4:
            remove();
            system("pause");
            break;
        case 5:
            // system("cls");
            search();
            system("pause");
            break;
        case 6:
            // system("cls");
            // cout << "0. Tang dan					!0. Giam dan" << endl;
            // cout << "Lua chon: ";
            // cin >> subtask;
            // if (subtask == 0)

            //     cout << "Danh sach sau khi sap xep:" << endl;

            sortList();
            system("pause");
            break;
        case 7:
            viewBillDetail();
            system("pause");
            break;
        case 8:
            cout << "----------Ket thuc----------" << endl;
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;

            break;
        }
    } while (task != 8);
}
void Manage::statistic()
{
    string t;
    int task, subtask;
    LinkedList<Customer> listCustomer = dao.getAllCustomer(customer_data);
    Node<Customer> *temp = listCustomer.begin();
    LinkedList<Movie> listMovie = dao.getAllMovie(movie_data);
    Node<Movie> *temp2 = listMovie.begin();
    do
    {
        system("cls");
        cout << "		 ---------------------------------------" << endl
             << "		|SELLING MOVIE TICKET MANAGEMENT STATISTIC|" << endl
             << "		 ---------------------------------------" << endl;
        cout << "1. Customer" << endl;
        cout << "2. Movie." << endl;
        cout << "3. Back to the previous page." << endl;
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            // listCustomer = dao.getAllCustomer(customer_data);
            // Node<Customer> *temp = listCustomer.begin();
            while (temp != NULL)
            {
                if (!dao.findListBillByIdCustomer(temp->data.getId()).isEmpty())
                {
                    cout << "Danh sach hoa don cua khach hang co id: " << temp->data.getId() << endl;
                    cout << dao.findListBillByIdCustomer(temp->data.getId()).toString() << endl;
                }
                temp = temp->next;
            }

            system("pause");
            break;
        case 2:
            // listMovie = dao.getAllMovie(movie_data);
            // Node<Movie> *temp = listMovie.begin();
            while (temp2 != NULL)
            {
                if (!dao.findListTicketByIdMovie(temp2->data.getId()).isEmpty())
                {
                    cout << "Danh sach ve cua phim co id: " << temp2->data.getId() << endl;
                    cout << dao.findListTicketByIdMovie(temp2->data.getId()).toString() << endl;
                }
                temp2 = temp2->next;
            }
            system("pause");
            break;
        case 3:
            // cout << "----------Ket thuc----------" << endl;
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;
            break;
        }
    } while (task != 3);
}
void Manage::menu2()
{
    string t;
    int task, subtask;
    do
    {
        system("cls");
        cout << "		 ---------------------------------------" << endl
             << "		|   PBL2:                               |" << endl
             << "		|	SELLING MOVIE TICKET MANAGEMENT |" << endl
             << "		|	Nhom: 2			        |" << endl
             << "		 ---------------------------------------" << endl;
        cout << "			---------MENU---------" << endl;
        cout << "              1. Manage bill." << endl;
        cout << "              2. Manage ticket." << endl;
        cout << "              3. Manage room." << endl;
        cout << "              4. Manage customer" << endl;
        cout << "              5. Manage seat" << endl;
        cout << "              6. Manage schedule" << endl;
        cout << "              7. Manage movie" << endl;
        cout << "              8. Statistic" << endl;
        cout << "              9. Ket thuc." << endl;
        cout << "              Chon chuc nang: ";
        cin >> task;
        switch (task)
        {
        case 1:
            // system("cls");
            manage_bill();
            system("pause");
            break;
        case 2:
            // add();
            manage_ticket();
            system("pause");
            break;
        case 3:
        {
            // system("cls");
            // cout << "Nhap k: ";
            // int k;
            // cin >> k;
            // update();
            manage_room();
            system("pause");
            break;
        }
        case 4:
            // remove();
            manage_customer();
            system("pause");
            break;
        case 5:
            // system("cls");
            // search();
            manage_seat();
            system("pause");
            break;
        case 6:
            // system("cls");
            // cout << "0. Tang dan					!0. Giam dan" << endl;
            // cout << "Lua chon: ";
            // cin >> subtask;
            // if (subtask == 0)

            //     cout << "Danh sach sau khi sap xep:" << endl;

            // sortList();
            manage_schedule();
            system("pause");
            break;
        case 7:
            // viewBillDetail();
            manage_movie();
            system("pause");
            break;
        case 8:
            // viewBillDetail();
            statistic();
            system("pause");
            break;
        case 9:
            cout << "----------Ket thuc----------" << endl;
            break;
        default:
            cout << "-------------------------" << endl;
            cout << "Khong co chuc nang nay." << endl;
            cout << "-------------------------" << endl;

            break;
        }
    } while (task != 9);
}