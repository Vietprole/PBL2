#include <iostream>
// #include "Ticket.h"
// #include "Bill.h"
// #include "Customer.h"
// #include "Movie.h"
// #include "Schedule.h"
// #include "Seat.h"
// #include "Room.h"
#include "DAO.h"
#include <fstream>
using namespace std;

Bill splitBill(string s, char del)
{
    stringstream ss(s);
    string word;
    Bill bill;
    DAO dao;
    int i = 1;
    while (!ss.eof())
    {
        getline(ss, word, del);
        switch (i)
        {
        case 1:
            bill.setId(stoi(word));
            i++;
            break;
        case 2:
            bill.setCreatedTime(word);
            i++;
            break;
        case 3:

            bill.setCustomer(dao.findCusById(stoi(word)));
            // cout << "2";
            // cout << bill.getCustomer().toString();
            i++;
            break;
        case 4:
            bill.setTotal(stod(word));
            // cout << "3";
            i++;
            break;
        }
    }
    // cout << bill.toString();
    return bill;
}
Ticket splitTicket(string s, char del)
{
    stringstream ss(s);
    string word;
    Ticket ticket;
    DAO dao;
    int i = 1;
    while (!ss.eof())
    {
        getline(ss, word, del);
        switch (i)
        {
        case 1:
            ticket.setId(stoi(word));
            // cout << "1";
            i++;
            break;
        case 2:
            ticket.setMovie(dao.findMovieById(stoi(word)));
            // cout << "2";
            i++;
            break;
        case 3:
            ticket.setSeat(dao.findSeatById(stoi(word)));
            // cout << "3";
            i++;
            break;
        case 4:
            ticket.setSchedule(dao.findScheduleById(stoi(word)));
            // cout << "4";
            i++;
            break;
        case 5:
            ticket.setBill(dao.findBillById(stoi(word)));
            // cout << "5";
            i++;
            break;
        case 6:
            ticket.setRoom(dao.findRoomById(stoi(word)));
            // cout << "6";
            i++;
            break;
        case 7:
            ticket.setPrice(stod(word));
            // cout << "7";
            i++;
            break;
        }
    }
    return ticket;
}
Movie splitMovie(string s, char del)
{
    stringstream ss(s);
    string word;
    Movie movie;
    DAO dao;
    int i = 1;
    while (!ss.eof())
    {
        getline(ss, word, del);
        switch (i)
        {
        case 1:
            movie.setId(stoi(word));
            i++;
            break;
        case 2:
            movie.setName(word);
            i++;
            break;
        case 3:
            movie.setDescription(word);
            i++;
            break;
        case 4:
            movie.setDirector(word);
            i++;
            break;
        case 5:
            movie.setActors(word);
            i++;
            break;
        case 6:
            movie.setCategories(word);
            i++;
            break;
        case 7:
            movie.setReleaseDate(word);
            i++;
            break;
        case 8:
            movie.setDuration(stoi(word));
            i++;
            break;
        case 9:
            movie.setLanguage(word);
            i++;
            break;
        case 10:
            movie.setRated(word);
            i++;
            break;
        }
    }
    return movie;
}
Schedule splitSchedule(string s, char del)
{
    stringstream ss(s);
    string word;
    Schedule sc;
    DAO dao;
    int i = 1;
    while (!ss.eof())
    {
        getline(ss, word, del);
        switch (i)
        {
        case 1:
            sc.setId(stoi(word));
            i++;
            break;
        case 2:
            sc.setLocalDate(word);
            i++;
            break;
        case 3:
            sc.setLocalTime(word);
            i++;
            break;
            // case 4:
            //     sc.setMovie(dao.findMovieById(stoi(word)));
            //     i++;
            //     break;
        }
    }
    return sc;
}
Seat splitSeat(string s, char del)
{
    stringstream ss(s);
    string word;
    Seat seat;
    DAO dao;
    int i = 1;
    while (!ss.eof())
    {
        getline(ss, word, del);
        switch (i)
        {
        case 1:
            seat.setId(stoi(word));
            i++;
            break;
        case 2:
            seat.setName(word);
            i++;
            break;
        case 3:
            seat.setVip(word != "0");
            i++;
            break;
        }
    }
    return seat;
}
Room splitRoom(string s, char del)
{
    stringstream ss(s);
    string word;
    Room room;
    DAO dao;
    int i = 1;
    while (!ss.eof())
    {
        getline(ss, word, del);
        switch (i)
        {
        case 1:
            room.setId(stoi(word));
            i++;
            break;
        case 2:
            room.setName(word);
            i++;
            break;
        }
    }
    return room;
}
Customer splitCustomer(string s, char del)
{
    stringstream ss(s);
    string word;
    Customer cus;
    DAO dao;
    int i = 1;
    while (!ss.eof())
    {
        getline(ss, word, del);
        switch (i)
        {
        case 1:
            cus.setId(stoi(word));
            i++;
            break;
        case 2:
            cus.setFullName(word);
            i++;
            break;
        case 3:
            cus.setPhone(word);
            i++;
            break;
        }
    }
    return cus;
}

LinkedList<string> readDataFromFile(string file)
{
    LinkedList<string> list;
    std::ifstream input_file(file);
    string line;
    if (input_file.fail())
    {
        std::cout << "Cannot open file at " << file << std::endl;
    }
    else
        while (getline(input_file, line))
        {
            list.push_back(line);
        }
    input_file.close();
    return list;
}

void writeDataToFile(std::string file, LinkedList<string> list)
{
    std::ofstream fileOutput(file);

    if (fileOutput.fail())
    {
        std::cout << "Cannot open file at " << file << std::endl;
        return;
    }

    Node<string> *temp = list.begin();
    while (temp != NULL)
    {
        fileOutput << temp->data << endl;
        temp = temp->next;
    }
    fileOutput.close();
}
int DAO::getCountIdBill()
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 3)
        {
            return stoi(temp->data);
            break;
        }
        i++;
        temp = temp->next;
    }
}
int DAO::getCountIdTicket()
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 1)
        {
            return stoi(temp->data);
            break;
        }
        i++;
        temp = temp->next;
    }
}
int DAO::getCountIdRoom()
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 2)
        {
            return stoi(temp->data);
            break;
        }
        i++;
        temp = temp->next;
    }
}
int DAO::getCountIdMovie()
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 5)
        {
            return stoi(temp->data);
            break;
        }
        i++;
        temp = temp->next;
    }
}
int DAO::getCountIdSchedule()
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 6)
        {
            return stoi(temp->data);
            break;
        }
        i++;
        temp = temp->next;
    }
}
int DAO::getCountIdCustomer()
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 4)
        {
            return stoi(temp->data);
            break;
        }
        i++;
        temp = temp->next;
    }
}
int DAO::getCountIdSeat()
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 7)
        {
            return stoi(temp->data);
            break;
        }
        i++;
        temp = temp->next;
    }
}
void DAO::setCountIdBill(int c)
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 3)
        {
            temp->data = to_string(c);
            break;
        }
        i++;
        temp = temp->next;
    }
    writeDataToFile("data/count.txt", list);
}
void DAO::setCountIdTicket(int c)
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 1)
        {
            temp->data = to_string(c);
            break;
        }
        i++;
        temp = temp->next;
    }
    writeDataToFile("data/count.txt", list);
}
void DAO::setCountIdRoom(int c)
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 2)
        {
            temp->data = to_string(c);
            break;
        }
        i++;
        temp = temp->next;
    }
    writeDataToFile("data/count.txt", list);
}
void DAO::setCountIdMovie(int c)
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 5)
        {
            temp->data = to_string(c);
            break;
        }
        i++;
        temp = temp->next;
    }
    writeDataToFile("data/count.txt", list);
}
void DAO::setCountIdSchedule(int c)
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 6)
        {
            temp->data = to_string(c);
            break;
        }
        i++;
        temp = temp->next;
    }
    writeDataToFile("data/count.txt", list);
}
void DAO::setCountIdCustomer(int c)
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 4)
        {
            temp->data = to_string(c);
            break;
        }
        i++;
        temp = temp->next;
    }
    writeDataToFile("data/count.txt", list);
}
void DAO::setCountIdSeat(int c)
{
    LinkedList<string> list = readDataFromFile("data/count.txt");
    Node<string> *temp = list.begin();
    int i = 1;
    while (temp != NULL)
    {
        if (i == 7)
        {
            temp->data = to_string(c);
            break;
        }
        i++;
        temp = temp->next;
    }
    writeDataToFile("data/count.txt", list);
}
LinkedList<Bill> DAO::getAllBill(string file)
{
    LinkedList<string> list = readDataFromFile(file);
    Node<string> *temp = list.begin();
    LinkedList<Bill> listBill;
    while (temp != NULL)
    {
        // cout << "1";
        listBill.push_back(splitBill(temp->data, '|'));
        // cout << splitBill(temp->data, '|').toString();
        //  cout << listBill.toString();
        //  cout << list.getLength();
        temp = temp->next;
        // cout << temp->data;
    }

    return listBill;
}
LinkedList<Ticket> DAO::getAllTicket(string file)
{
    LinkedList<string> list = readDataFromFile(file);
    Node<string> *temp = list.begin();
    LinkedList<Ticket> listTicket;
    // cout <<"1";
    while (temp != NULL)
    {
        // cout << "1";
        listTicket.push_back(splitTicket(temp->data, '|'));
        // cout << temp->data <<endl;
        temp = temp->next;
    }
    return listTicket;
}
LinkedList<Movie> DAO::getAllMovie(string file)
{
    LinkedList<string> list = readDataFromFile(file);
    Node<string> *temp = list.begin();
    LinkedList<Movie> listMovie;
    while (temp != NULL)
    {
        listMovie.push_back(splitMovie(temp->data, '|'));
        temp = temp->next;
    }
    return listMovie;
}
LinkedList<Schedule> DAO::getAllSchedule(string file)
{
    LinkedList<string> list = readDataFromFile(file);
    Node<string> *temp = list.begin();
    LinkedList<Schedule> listSchedule;
    while (temp != NULL)
    {
        listSchedule.push_back(splitSchedule(temp->data, '|'));
        temp = temp->next;
    }
    return listSchedule;
}
LinkedList<Seat> DAO::getAllSeat(string file)
{
    LinkedList<string> list = readDataFromFile(file);
    Node<string> *temp = list.begin();
    LinkedList<Seat> listSeat;
    while (temp != NULL)
    {
        listSeat.push_back(splitSeat(temp->data, '|'));
        temp = temp->next;
    }
    // cout << listSeat.toString();
    return listSeat;
}
LinkedList<Room> DAO::getAllRoom(string file)
{
    LinkedList<string> list = readDataFromFile(file);
    Node<string> *temp = list.begin();
    LinkedList<Room> listRoom;
    while (temp != NULL)
    {
        listRoom.push_back(splitRoom(temp->data, '|'));
        temp = temp->next;
    }
    // cout << listRoom.toString();
    return listRoom;
}
LinkedList<Customer> DAO::getAllCustomer(string file)
{
    LinkedList<string> list = readDataFromFile(file);
    Node<string> *temp = list.begin();
    LinkedList<Customer> listCus;
    while (temp != NULL)
    {
        listCus.push_back(splitCustomer(temp->data, '|'));
        temp = temp->next;
    }
    return listCus;
}

Customer DAO::findCusById(int id)
{
    LinkedList<Customer> list = getAllCustomer("data/customer.txt");
    Node<Customer> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getId() == id)
        {
            return temp->data;
            break;
        }
        temp = temp->next;
    }
}
Seat DAO::findSeatById(int id)
{
    DAO dao;
    LinkedList<Seat> list = dao.getAllSeat("data/seat.txt");
    Node<Seat> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getId() == id)
        {
            return temp->data;
            break;
        }
        temp = temp->next;
    }
}
Schedule DAO::findScheduleById(int id)
{
    DAO dao;
    LinkedList<Schedule> list = dao.getAllSchedule("data/schedule.txt");
    Node<Schedule> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getId() == id)
        {
            return temp->data;
            break;
        }
        temp = temp->next;
    }
}
Movie DAO::findMovieById(int id)
{
    DAO dao;
    LinkedList<Movie> list = dao.getAllMovie("data/movie.txt");
    Node<Movie> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getId() == id)
        {
            return temp->data;
            break;
        }
        temp = temp->next;
    }
}
Room DAO::findRoomById(int id)
{
    DAO dao;
    LinkedList<Room> list = dao.getAllRoom("data/room.txt");
    Node<Room> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getId() == id)
        {
            return temp->data;
            break;
        }
        temp = temp->next;
    }
}
Bill DAO::findBillById(int id)
{
    DAO dao;
    LinkedList<Bill> list = dao.getAllBill("data/bill.txt");
    Node<Bill> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getId() == id)
        {
            return temp->data;
            break;
        }
        temp = temp->next;
    }
}
Ticket DAO::findTicketById(int id)
{
    DAO dao;
    LinkedList<Ticket> list = dao.getAllTicket("data/ticket.txt");
    Node<Ticket> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getId() == id)
        {
            return temp->data;
            break;
        }
        temp = temp->next;
    }
}
LinkedList<Ticket> DAO::findListTicketByIdBill(int id)
{
    DAO dao;
    LinkedList<Ticket> list = dao.getAllTicket("data/ticket.txt");
    LinkedList<Ticket> listt;
    Node<Ticket> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getBill().getId() == id)
        {
            listt.push_back(temp->data);
        }
        temp = temp->next;
    }
    return listt;
}
LinkedList<Bill> DAO::findListBillByIdCustomer(int id)
{
    DAO dao;
    LinkedList<Bill> list = dao.getAllBill("data/bill.txt");
    LinkedList<Bill> listt;
    Node<Bill> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getCustomer().getId() == id)
        {
            listt.push_back(temp->data);
        }
        temp = temp->next;
    }
    return listt;
}
LinkedList<Ticket> DAO::findListTicketByIdMovie(int id) {
    DAO dao;
    LinkedList<Ticket> list = dao.getAllTicket("data/ticket.txt");
    LinkedList<Ticket> listt;
    Node<Ticket> *temp = list.begin();
    while (temp != NULL)
    {
        if (temp->data.getMovie().getId() == id)
        {
            listt.push_back(temp->data);
        }
        temp = temp->next;
    }
    return listt;
}
void DAO::saveBill(LinkedList<Bill> list)
{
    LinkedList<string> lists;
    Node<Bill> *temp = list.begin();
    while (temp != NULL)
    {
        lists.push_back(temp->data.toString());
        temp = temp->next;
    }
    writeDataToFile("data/bill.txt", lists);
}
void DAO::saveMovie(LinkedList<Movie> list)
{
    LinkedList<string> lists;
    Node<Movie> *temp = list.begin();
    while (temp != NULL)
    {
        lists.push_back(temp->data.toString());
        temp = temp->next;
    }
    writeDataToFile("data/movie.txt", lists);
}
void DAO::saveSchedule(LinkedList<Schedule> list)
{
    LinkedList<string> lists;
    Node<Schedule> *temp = list.begin();
    while (temp != NULL)
    {
        lists.push_back(temp->data.toString());
        temp = temp->next;
    }
    writeDataToFile("data/schedule.txt", lists);
}
void DAO::saveCustomer(LinkedList<Customer> list)
{
    LinkedList<string> lists;
    Node<Customer> *temp = list.begin();
    while (temp != NULL)
    {
        lists.push_back(temp->data.toString());
        // cout << temp->data.toString();
        temp = temp->next;
    }
    writeDataToFile("data/customer.txt", lists);
}
void DAO::saveTicket(LinkedList<Ticket> list)
{
    LinkedList<string> lists;
    Node<Ticket> *temp = list.begin();
    while (temp != NULL)
    {
        lists.push_back(temp->data.toString());
        temp = temp->next;
    }

    writeDataToFile("data/ticket.txt", lists);
}
void DAO::saveRoom(LinkedList<Room> list)
{
    LinkedList<string> lists;
    Node<Room> *temp = list.begin();
    while (temp != NULL)
    {
        lists.push_back(temp->data.toString());
        temp = temp->next;
    }

    writeDataToFile("data/room.txt", lists);
}
void DAO::saveSeat(LinkedList<Seat> list)
{
    LinkedList<string> lists;
    Node<Seat> *temp = list.begin();
    while (temp != NULL)
    {
        lists.push_back(temp->data.toString());
        temp = temp->next;
    }
    writeDataToFile("data/seat.txt", lists);
}