#include "vector"
#include "slot.h"
#include "types.h"

using namespace std;

class floor{
private:
	int getSlotId(const types::type&Type){
		if(Type==small){
			return smallVehicleSlots.size()+1;
		}
		if(Type==Medium){
			return midVehicleSlots.size()+1;
		}
		return bigVehicleSlots.size()+1;
	}
	void addSlot(const slot&Slot){
		types::type Type=Slot.getType();
		if(Type==small){
			smallVehicleSlots.push_back(slot);
		}
		else if(Type==medium){
			midVehicleSlots.push_back(slot);
		}
		else{
			bigVehicleSlots.push_back(slot);
		}
	}
	int id;
	vector<slot>bigVehicleSlots, midVehicleSlots, smallVehicleSlots;
public:
	static int bigVehicleCap, midVehicleCap, smallVehicleCap;
	floor(const int&Id){
		id=Id;
	}
	int getId(){
		return id;
	}
	vector<slot> getSmallVehicleSlots(){
		return smallVehicleSlots;
	}
	vector<slot> getMidVehicleSlots(){
		return midVehicleSlots;
	}
	vector<slot> getBigVehicleSlots(){
		return bigVehicleSlots;
	}
	int getVehicleCap(const types::type&slotType){
		if(slotType==small){
			return smallVehicleCap;
		}
		if(slotType==medium){
			return midVehicleCap;
		}
		return bigVehicleCap;
	}
	slot park(const vehicle&Vehicle){
		types::type Type=Vehicle.getType();
		int slotId=getSlotId(Type);
		slot Slot(slotId, Type, true);
		addSlot(slot);
		return slot;
	}
};