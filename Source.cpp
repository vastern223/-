#include"iostream"
#include"string"
#include"Header.h"
using namespace std;
#define CLEAR system("cls");
#define PAUSE system("pause");



int main()
{
	setlocale(LC_ALL, "ukr");
	int action = 0;
	do
	{
	
		cout << "\tMENU" << endl;
		cout << "1- Add a new event." << endl;
		cout << "2- View all events." << endl;
		cout << "3- View events by category." << endl;
		cout << "4- View events in the order they are executed." << endl;
		cout << "5- Exit." << endl;
		cout << "->";
		cin >> action;

		switch (action)
		{
		case 1: {
			CLEAR
				cout << "Adding a new event." << endl;
			    cout << "----------------------" << endl;
			give_a_joke();
		}break;
		case 2: {
			CLEAR
				cout << "View all events." << endl;
			    cout << "-----------------------" << endl;
			view_event();

		}break;
		case 3: {
			CLEAR
				cout << "View events by category." << endl;
			    cout << "---------------------------------" << endl;
			browse_by_category();
		}break;
		case 4: {
			CLEAR
				cout << "view in order of events." << endl;
			    cout << "----------------------------------" << endl;
				order_of_events();
		}break;
		case 5: {
			CLEAR
				cout << "Goodbye" << endl;
	
		}break;

		default:
		{
			CLEAR
				cout << "Please enter a valid value from 1 to 5 " << endl;
		}
		}
	} while (action != 5);

	system("pause");
	return 0;
}
