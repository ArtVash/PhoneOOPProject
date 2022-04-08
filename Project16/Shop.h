#include "H.h"
#include "Phone.h"


class Shop {
private:
	string adress;
	int floors;
	int entances;
	int flat;

public:

	Shop(string adress, int floors, int entances, int flat);

	string getAdress();
	void setAdress(string adress);
	void Phoneshop(string adress);
	int getFloors();
	void setFloors(int floors);
	int getEntances();
	void setEntances(int entances);
	int getflat();
	void setflat(int flat);
	string getInfo();

};