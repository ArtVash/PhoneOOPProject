#include "Phone.h"

int Phone::count = 0;

Phone::Phone() {
	count++;
	this->brand = "no name";
	this->model = "no model";
	this->price = 0;
	this->memory = 0;
}

Phone::Phone(string brand, string model, double price, double memory) {
	count++;
	this->brand = brand;
	this->model = model;
	this->price = price;
	this->memory = memory;
}

Phone::~Phone() {
	count--;
}

int Phone::getCount() {
	return count;
}

string Phone::getBrand() {
	return brand;
}

void Phone::setBrand(string brand) {
	this->brand = brand;
}


string Phone::getModel() {
	return model;
}

void Phone::setModel(string model) {
	this->model = model;
}


double Phone::getPrice() {
	return price;
}

void Phone::setPrice(double price) {
	this->price = price;
}

double Phone::getMemory() {
	return memory;
}

void Phone::setMemory(double memory) {
	this->memory = memory;

}


string Phone::getInfo() {
	return "Phone:\nbrand = " + brand
		+ ";\nmodel = " + model
		+ ";\nprice  = " + to_string(price)
		+ ";\nmemory  = " + to_string(memory);
}
