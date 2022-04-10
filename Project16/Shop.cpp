#include "Shop.h"

Shop::Shop() {
	address = "no address";
	//...
}

Shop::Shop(string adress, int floors, int entances, int flat, Phone* list, int size, int index) {
	this->address = adress;
	this->floors = floors;
	this->entances = entances;
	this->flat = flat;
	this->list = list;
	this->size = size;
	this->index = index;

}

Shop::~Shop() {
	address = "no address";
	//...
}



string Shop::getAddress() {
	return address;
}

void Shop::setAddress(string address) {
	this->address = address;
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

int Shop::getSize() {
	return size;
}

void Shop::setSize(int index) {
	this->index = index;
}


string Shop::getInfo() {
	return "Phone:\naddress = " + address
		+ ";\nfloors = " + to_string(floors)
		+ ";\nentances  = " + to_string(entances)
		+ ";\nmemory  = " + to_string(flat);
}