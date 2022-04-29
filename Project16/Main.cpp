#include "Shop.h"
#include "Phone.h"
#include "H.h"

//int main() {
//	Phone Phone1("Mi", "redmi", 200, 64);
//	Phone Phone2("Nokia", "3031", 100, 16);
//	Phone Phone3("Samsung", "M12", 500, 256);
//
//	/*Phone1.setBrand("Mi");
//	Phone2.setBrand("Nokia");
//	Phone3.setBrand("Samsung");
//
//
//	string dependency = Phone1.getModel();*/
//
//	cout << Phone1.getInfo() << endl;
//	cout << Phone2.getInfo() << endl;
//	cout << Phone3.getInfo() << endl;
//
//
//	Shop superShop;
//	
//
//	for (int i = 0; i < superShop.getSize(); i++)
//	{
//		if (superShop.get(i) > 1000) {
//			cout << superShop.getInfo() << endl;
//			cout << "This phone is expensive:(" << endl;
//		}
//		else {
//			cout << "This phone is cheap:)" << endl;
//		}
//	}
//
//	cout << superShop.getInfo() << endl;
//
//	/*for (int i = 0; i < superShop.getSize(); i++)
//	{
//		if (superShop.getPhone(i).getBrand() == "iphone" || "Iphone" || "Samsung" || "samsung" || "mi" || "Mi") {
//			cout << superShop.getPhone(i).getInfo() << endl;
//			cout << "This phone has a GOOD brand" << endl;
//		}
//		else {
//			cout << "This phone has a BAD brand" << endl;
//		}
//	}*/
//
//	cout << "Count:" << Phone::getCount() << endl;

	void ChangePrice(Phone& ph) {
		srand(time(NULL));
		ph.price = rand() & 1976 + 25;
	
	}

int main() {
	Phone ph1("Mi", "redmi", 200, 64);
	
	cout << "Before: " << ph1.getInfo() << endl;
	ChangePrice(ph1);

	cout << "Before: " << ph1.getInfo() << endl;
	


	return 0;
}
