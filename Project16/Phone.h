#include "Header.h" 

class Phone {
private:
	string brand;
	string model;
	double price;
	double memory;

public:
	/*static const int MIN_MARK = 0;
	static const int MAX_MARK = 10;

	static const int MIN_MARK = 0;
	static const int MAX_MARK = 10;*/

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