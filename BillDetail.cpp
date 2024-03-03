#include"BillDetail.h"
LinkedList<Ticket> BillDetail:: getListTicket(){
    return listTicket;
}
void BillDetail::setListTicket(LinkedList<Ticket> list){
    listTicket = list ;
}