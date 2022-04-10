#include "Shop.h"

int main() {
	/*Phone Phone1(" ", "", 200, 36);
	Phone Phone2(" ", "", 300, 128);
	Phone Phone3(" ", "", 500, 256);

	Phone1.setBrand("Mi");
	Phone2.setBrand("Nokia");
	Phone3.setBrand("Samsung");


	string dependency = Phone1.getModel();*/

	/*cout << Phone.getInfo() << endl;*/
	/*cout << Phone2.getInfo() << endl;
	cout << Phone3.getInfo() << endl;*/

	Phone phone("Mi", "Redmi", 300, 256);

	Shop superShop;

	for (int i = 0; i < superShop.getSize(); i++)
	{
		if (superShop.getPhone(i).getPrice() > 1000) {
			cout << superShop.getPhone(i).getInfo() << endl;
			cout << "This phone is expensive:(" << endl;
		}
		else {
			cout << "This phone is cheap:)" << endl;
		}
	}

	phone.getInfo();


	for (int i = 0; i < superShop.getSize(); i++)
	{
		if (superShop.getPhone(i).getBrand() == "iphone" || "Iphone" || "Samsung" || "samsung" || "mi" || "Mi") {
			cout << superShop.getPhone(i).getInfo() << endl;
			cout << "This phone has GOOD brand" << endl;
		}
		else {
			cout << "This phone has BAD brand" << endl;
		}
	}

	phone.getInfo();


	return 0;
}
