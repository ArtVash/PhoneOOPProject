#include "Phone.h" 

int main() {

	/*Phone phone{};*/


	/*cout << "Input brand of phone: ";
	cin >> phone.brand;

	cout << "Input model of phone: ";
	cin >> phone.brand;

	cout << "Input price of phone: ";
	cin >> phone.price;

	cout << "Input memory of phone: ";
	cin >> phone.memory;

	cout << "Input weight of phone: ";
	cin >> phone.weight;

	cout << "Input screen_size of phone: ";
	cin >> phone.screen_size;

	cout << "Input color of phone: ";
	cin >> phone.color;

	cout << "________________________________" << endl;

	cout << phone.getInfo() << endl;
	int array[10]{};
	cout << "________________________________" << endl;*/


	Phone* phone = new Phone("mi", "redmi6", 200, 64, 150, 9, "red");
	Phone* phone2 = new Phone("mi", "redmi7", 300, 128, 150, 9, "blue");
	Phone* phone3 = new Phone("mi", "redmi8", 500, 256, 150, 9, "white");
	Phone* phone4 = new Phone("mi", "redmi9", 1000, 524, 150, 9, "black");

	int a, b, c;

	if (a > b && a > c) {
		phone = phoneA;

	}
	else if (b > c) {
		phone = phoneB;

		}
	else{
		phone = phoneC;
	}





	delete phone;
	delete phone2;
	delete phone3;
	delete phone4;

	return 0;
}