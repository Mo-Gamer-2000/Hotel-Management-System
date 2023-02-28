#include <iostream>
using namespace std;

int main() 
{
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
	int Total_tooms = 0;
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
};