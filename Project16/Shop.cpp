#include "Shop.h"

Shop::Shop() {
	address = "no address";
	floors = 2;
	entances = 5;
	flat = 3;
}

Shop::Shop(string adress, int floors, int entances, int flat, Phone* list, int size, int index, int phone) {
	this->address = adress;
	this->floors = floors;
	this->entances = entances;
	this->flat = flat;
	this->list = list;
	this->size = size;
	this->phone = phone;
	this->index = index;

}

Shop::~Shop() {

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


int Shop::getPhone() {
	return size;
}

void Shop::setPhone(int index) {
	this->index = index;
}

int Shop::get(int index) {
	return size;
}


string Shop::getInfo() {
	return "Phone:\naddress = " + address
		+ ";\nfloors = " + to_string(floors)
		+ ";\nentances  = " + to_string(entances)
		+ ";\nmemory  = " + to_string(flat);
}