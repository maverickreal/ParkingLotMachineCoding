#include "string.h"
#include "types.h"

using namespace std;

class vehicle{
private:
	string color, registrationNumber;
	types::type vehicleType;
	bool parkedStatus;
public:
	vehicle(const string&Color, const string&RegistrationNumber, const types::type&Type, bool ParkedStatus=false){
		color=Color, registrationNumber=RegistrationNumber,
		vehicleType=Type, parkedStatus=ParkedStatus;
	}
	string getColor(){
		return color;
	}
	string getRegistrationNumber(){
		return registrationNumber;
	}
	types::type getType(){
		return vehicleType;
	}
	bool getParkedStatus(){
		return parkedStatus;
	}
};