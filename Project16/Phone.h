#include "Header.h" 

class Phone {
private:
	string brand;
	string model;
	double price;
	double memory;	

public:
	Phone();
	Phone(string brand, string model, double price, double memory);
	~Phone();

	string getBrand();
	void setBrand(string brand);
	string getModel();
	void setModel(string model);
	double getPrice();
	void setPrice(double price);
	double getMemory();
	void setMemory(double memory);

	string getInfo();
};