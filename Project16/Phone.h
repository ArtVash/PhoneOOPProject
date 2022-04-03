#include "Header.h" 

class Phone {
private:
	string brand;
	string model;
	double price;
	double memory;
	

public:
	Phone(string brand, string model, double price, double memory) {
		this->brand = brand;
		this->model = model;
		this->price = price;
		this->memory = memory;
	}

	Phone() {
		this->brand = "Mi";
		this->model = "Redmi";
		this->price = 500;
		this->memory = 128;

	}

	string getBrand() {
		return brand;
	}

	void setBrand(string brand) {
		this->brand = brand;
	}


	string getModel() {
		return model;
	}

	void setModel(string model) {
		this->model = model;
	}


	double getPrice() {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}

	double getMemory() {
		return memory;
	}

	void setMemory(double memory) {
		this->memory = memory;
	}

	


	string getInfo() {
		return "Phone:\nbrand = " + brand
			+ ";\nmodel = " + model
			+ ";\nprice  = " + to_string(price)
			+ ";\nmemory  = " + to_string(memory);
	}


	//string getInfo() {
	//	return brand + ": brand = " + brand;
	//}
};