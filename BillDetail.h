#include"Bill.h"
#include"Ticket.h"
#include"LinkedList.h"
using namespace std;
class BillDetail :public Bill{
    LinkedList<Ticket> listTicket;
    public:
        LinkedList<Ticket> getListTicket();
        void setListTicket(LinkedList<Ticket> list);

};

