#include "Phone.h"

int main() {;

	Phone Phone1(" ", "", 200, 36);
	Phone Phone2(" ", "", 300, 128);
	Phone Phone3(" ", "", 500, 256);

	Phone1.setBrand("Mi");
	Phone2.setBrand("Nokia");
	Phone3.setBrand("Samsung");


	Phone1.setModel("1");
	Phone2.setModel("2");
	Phone3.setModel("3");



	string dependency = Phone1.getModel();
	string dependency = Phone2.getModel();
	string dependency = Phone3.getModel();

	cout << Phone1.getInfo() << endl;
	cout << Phone2.getInfo() << endl;
	cout << Phone3.getInfo() << endl;


	return 0;
}
