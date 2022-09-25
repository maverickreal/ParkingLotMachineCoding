#include "string"
#include "slot.h"

using namespace std;

class ticket{
	private:
		string id;
		slot ticketSlot;
	public:
		ticket(const string&Id, const slot&TicketSlot){
			id=ID, ticketSlot=TicketSlot;
		}
		string getId(){
			return id;
		}
		slot getTicketSlot(){
			return TicketSlot;
		}
};