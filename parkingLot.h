#include "floor.h"
#include "vector"
#include "types.h"
#include "string"

using namespace std;

class parkingLot{
private:
	int totalNumberOfFloors;
	vector<floor>floors;
public:
	parkingLot(const int&TotalNumberOfFloors){
		totalNumberOfFloors=TotalNumberOfFloors;
	}
	int getTotalNumberOfFloors(){
		return totalNumberOfFloors;
	}
	vector<floor> getFloors(){
		return floors;
	}
	ticket* park(const string&color, const string&registratonNumber, const string&type){
		types::type slotType=types::typesMap[type];
		if(!floors.back().getVehicleCap(slotType)){
			if(floors.size()==totalNumberOfFloors){
				return nullptr;
			}
			floors.push_back(floor(floors.size()+1));
		}
		vehicle Vehicle(color, registrationNumber,slotType);
		const floor&assignedFloor=floors.back();
		slot assignedSlot=assignedFloor.park(Vehicle);
		string ticketId=to_string(assignedFloor.getId());
		ticketId.push_back('_');
		ticketId.append(to_string(assignedSlot.getId()));
		return new ticket(ticketId, assignedSlot); 
	}
};