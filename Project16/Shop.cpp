#include "Shop.h"

	Shop::Shop(string adress, int floors, int entances, int flat) {
		this->adress = adress;
		this->floors = floors;
		this->entances = entances;
		this->flat = flat;

	}

	string Shop::getAdress() {
		return adress;
	}

	void Shop::setAdress(string adress) {
		this->adress = adress;
	}



	int Shop::getFloors() {
		return floors;
	}

	void Shop::setFloors(int floors) {
		this->floors = floors;
	}


	int Shop::getEntances() {
		return entances;
	}

	void Shop::setEntances(int entances) {
		this->entances = entances;
	}


	int Shop::getflat() {
		return flat;
	}

	void Shop::setflat(int flat) {
		this->flat = flat;
	}









	string Shop::getInfo() {
		return "Phone:\nadress = " + adress
			+ ";\nfloors = " + to_string(floors)
			+ ";\nentances  = " + to_string(entances)
			+ ";\nmemory  = " + to_string(flat);
	}