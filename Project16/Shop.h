#include "H.h"
#include "Phone.h"


class Shop {
private:
	string address;
	int floors;
	int entances;
	int flat;
	Phone* list;
	int size;
	int index;

public:
	Shop();
	Shop(string adress, int floors, int entances, int flat, Phone* list, int size, int index);
	~Shop();
	
	string getAddress();
	void setAddress(string adress);
	
	int getFloors();
	void setFloors(int floors);

	int getEntances();
	void setEntances(int entances);

	int getflat();
	void setflat(int flat);

	void add(Phone phone);
	void remove(int index);

	Phone getPhone(int index);
	int getSize();
	void setSize(int index);

	
	string getInfo();

};