#include "Header.h" 

class Phone {
private:
	string brand;
	string model;
	double price;
	double memory;
	

public:
	string getBrand() {
		return brand;
	}

	string getModel() {
		return model;
	}

	double getPrice() {
		return model;
	}

	double getMemory() {
		return memory;
	}

	

	


	string getInfo() {
		return "Phone:\nbrand = " + brand
			+ ";\nmodel = " + model
			+ ";\nprice  = " + to_string(price)
			+ ";\nmemory  = " + to_string(memory)
			+ ";\weight  = " + to_string(weight)
			+ ";\nscreen_size  = " + to_string(screen_size)
			+ ";\ncolor = " + color;
	}

};