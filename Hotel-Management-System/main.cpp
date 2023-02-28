#include <iostream>
using namespace std;

int main() {
	int quant;
	int choice;

	// Quantity
	int Qrooms = 0;
	int Qpasta = 0;
	int Qburger = 0;
	int Qnoodles = 0;
	int Qshake = 0;
	int Qchicken = 0;

	// Food items sold
	int Srooms = 0;
	int Spasta = 0;
	int Sburger = 0;
	int Snoodles = 0;
	int Sshake = 0;
	int Schicken = 0;

	// Total proce of items
	int Total_rooms = 0;
	int Total_pasta = 0;
	int Total_burger = 0;
	int Total_noodles = 0;
	int Total_shake = 0;
	int Total_chicken = 0;

	cout << "\n\t Quantity of items we have: ";

	cout << "\n Rooms available: ";
	cin >> Qrooms;

	cout << "\n Quantity of pasta: ";
	cin >> Qpasta;

	cout << "\n Quantity of burger: ";
	cin >> Qburger;

	cout << "\n Quantity of noodles: ";
	cin >> Qnoodles;

	cout << "\n Quantity of shake: ";
	cin >> Qshake;

	cout << "\n Quantity of chicken-roll: ";
	cin >> Qchicken;

	cout << "\n\t\t\t Please, select from the menu options: ";
	cout << "\n\n1) Rooms: ";
	cout << "\n2) Pasta: ";
	cout << "\n3) Burger: ";
	cout << "\n4) Noodles: ";
	cout << "\n5) Shake: ";
	cout << "\n6) Chicken-Roll: ";
	cout << "\n7) Infrmation regarding sales and collection: ";
	cout << "\n8) Exit: ";

	cout << "\n\n Please, enter your choice: ";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "\n\n Enter the number of room you want: ";
		cin >> quant;
		if (Qrooms - Srooms >= quant) {
			Srooms = Srooms + quant;
			Total_rooms = Total_rooms + quant * 1200;
			cout << "\n\n\t\t" << quant << "room/s have been allocated to you: ";

		}
		else
		{
			cout << "\n\tOnly" << Qrooms - Srooms << "room/s remaining in the hotel: ";
			break;
		}
	case 2:
		cout << "\n\n Enter pasta quantity: ";
		cin >> quant;
		if (Qpasta - Spasta >= quant) {
			Spasta = Spasta + quant;
			Total_pasta = Total_pasta + quant * 250;
			cout << "\n\n\t\t" << quant << "pasta is the order: ";

		}
		else
		{
			cout << "\n\tOnly" << Qpasta - Spasta << "pasta remaining in the hotel: ";
			break;
		}
	case 3:
		cout << "\n\n Enter burger quantity: ";
		cin >> quant;
		if (Qburger - Sburger >= quant) {
			Sburger = Sburger + quant;
			Total_burger = Total_burger + quant * 150;
			cout << "\n\n\t\t" << quant << "burger is the order: ";

		}
		else
		{
			cout << "\n\tOnly" << Qburger - Sburger << "burger remaining in the hotel: ";
			break;
		}
	case 4:
		cout << "\n\n Enter noodles quantity: ";
		cin >> quant;
		if (Qnoodles - Snoodles >= quant) {
			Snoodles = Snoodles + quant;
			Total_noodles = Total_noodles + quant * 50;
			cout << "\n\n\t\t" << quant << "noodles is the order: ";

		}
		else
		{
			cout << "\n\tOnly" << Qnoodles - Snoodles << "noodles remaining in the hotel: ";
			break;
		}
	case 5:
		cout << "\n\n Enter shake quantity: ";
		cin >> quant;
		if (Qshake - Sshake >= quant) {
			Sshake = Sshake + quant;
			Total_shake = Total_shake + quant * 120;
			cout << "\n\n\t\t" << quant << "shake is the order: ";

		}
		else
		{
			cout << "\n\tOnly" << Qshake - Sshake << "noodles remaining in the hotel: ";
			break;
		}
	case 6:
		cout << "\n\n Enter chicken-roll quantity: ";
		cin >> quant;
		if (Qchicken - Schicken >= quant) {
			Schicken = Schicken + quant;
			Total_chicken = Total_chicken + quant * 175;
			cout << "\n\n\t\t" << quant << "chicken is the order: ";

		}
		else
		{
			cout << "\n\tOnly" << Qchicken - Schicken << "chicken-roll remaining in the hotel: ";
			break;
		}
	}
};