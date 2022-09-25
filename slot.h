#include "vehicle.h"
#include "types.h"

using namespace std;

class slot{
private:
	int id;
	types::type slot;
	bool status;
public:
	slot(const int&Id, const types::type&Type, bool booked=false){
		id=Id, type=Type, status=booked;
	}
	int getId(){
		return id;
	}
	types::type getType(){
		return type;
	}
	bool isFree(){
		return status;
	}
};