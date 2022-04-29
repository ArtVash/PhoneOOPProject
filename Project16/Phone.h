#include "Header.h" 





class Phone {
	friend void changePrice(Phone& ph);


private:
	static int count;

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

	static int getCount();

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