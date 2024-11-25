// Problem 3 - retry(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char rent, version;
	float basic, advance, pro, bill, payment, change, hours;
	bool repeat, repeat2;
	do
	{
		do
		{
			cout << endl << "--------------------Welcome to Rent  a Scooter--------------------" << endl;

			cout << "Please select a version of your scooter" << endl;
			cout << "1. 2-wheeler" << endl;
			cout << "2. 3-wheeler" << endl;
			cout << "3. 4-wheeler" << endl;
			cout << "Enter number of choice: ";
			cin >> version;

			switch (version)
			{
			case '1':
				cout << "You've selected a 2-wheeler scooter." << endl;
				repeat = false;
				break;
			case'2':
				cout << "You've selected a 3-wheeler scooter." << endl;
				repeat = false;
				break;
			case'3':
				cout << "You've selected a 4-wheeler scooter." << endl;
				repeat = false;
				break;
			default:
				cout << "You have entered an invalid choice.";
				repeat = true;
				break;
			}
		} while (repeat);

		do
		{
			cout << endl << "Please select a rent: " << endl;
			cout << "A. Basic   - 30$/hour" << endl;
			cout << "B. Advance - 50$/hour" << endl;
			cout << "C. Pro     - 80$/hour" << endl;
			cout << "Enter letter of choice: ";
			cin >> rent;
			switch (rent)
			{
			case 'A':
				cout << "How many hours would you like to rent?" << endl;
				cout << "Enter hours: ";
				cin >> hours;
				bill = hours * 30;
				repeat2 = false;
				break;
			case 'B':
				cout << "How many hours would you like to rent?" << endl;
				cout << "Enter hours: ";
				cin >> hours;
				bill = hours * 50;
				repeat2 = false;
				break;
			case 'C':
				cout << "How many hours would you like to rent?" << endl;
				cout << "Enter hours: ";
				cin >> hours;
				bill = hours * 80;
				repeat2 = false;
				break;
			default:
				cout << "You have entered an invalid choice.";
				repeat2 = true;
				break;
			}
		} while (repeat2);

		cout << "Please pay " << "$" << bill<<endl;
		cout << "Enter payment: ";
		cin >> payment;
		change = payment - bill;
		if (change < 0)
		{
			do
			{
				cout << "Your payment is insufficient."<<endl;
				cout << "Enter payment:";
				cin >> payment;
				change = payment - bill;
			} while (change < 0);

			if (change == 0)
			{
				cout << "Thank you and enjoy your scooter!"<<endl;
			}
			cout << "Your change is " << "$" << change<<endl;
			cout << "Thank you and enjoy your scooter!"<<endl;
		}
	} while (true);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
