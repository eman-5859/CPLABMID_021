#include<iostream>
using namespace std;
int main() {
	int initial_quantity;
	cout << "Enter the initial quantity of the product " << endl;
	cin >> initial_quantity;
	int threshold = 10;
	int current_stock = initial_quantity;
	while (true) {
		cout << "Current stock: " << current_stock << endl;
		char action;
		cout << "Press 'S' for sold 'R' for restock 'E' for exit." << endl;
		cin >> action;
		if (action == 'S' || action == 's') {
			int sold_quantity;
			cout << "Enter the quantity sold: " << endl;
			cin >> sold_quantity;
			if (sold_quantity > current_stock) {
				cout << "You need to restock." << endl;
			}
			else {
				current_stock -= sold_quantity;
			}
		}
		else if (action == 'R' || action == 'r') {
			int restocked_quantity;
			cout << "Enter the restocked quantity:" << endl;
			cin >> restocked_quantity;
			current_stock += restocked_quantity;
		}
		else if (action == 'E' || action == 'e') {
			break;
		}
		if (threshold > current_stock) {
			cout << "RESTOCK IMMEDIATELY:" << endl;
		}
		cout << "EXIT PROGRAM." << endl;
	}

	return 0;
}


	
	
	
	







