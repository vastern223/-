#include "Header.h"
#include <Windows.h>
#include"iostream"
#include"string"
#include<list>

#define CLEAR system("cls");
#define PAUSE system("pause");

using namespace std;




list<event>events;

enum ConsoleColor
{
	Black = 0,
	Green = 2,
	Red = 4,
	Brown = 6,
	Yellow = 14,
	White = 15,
	day1 = 31,
	hour = 24
};
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void give_a_joke()
{

	event newevent;
	cout << "enter a categoryy:";
	cin.ignore();
	getline(cin, newevent.category);
	cout << "enter the title :";
	cin.ignore();
	getline(cin, newevent.title);
	cout << "description of the event :";
	cin.ignore();
	getline(cin, newevent.description);
	cout << "date :";
	cin >> newevent.day;
	cout << "hour :";
	cin >> newevent.hour;
	cout << "importance level from 1 to 3: ";
	cin >> newevent.level_of_importance;
	events.push_back(newevent);
	CLEAR
}

void view_event()
{

	for (event item : events)
	{

		if (item.level_of_importance == 1)
		{
			SetColor(Green, Black);
		}
		else if (item.level_of_importance == 2)
		{
			SetColor(Brown, Black);
		}
		else if (item.level_of_importance == 3)
		{
			SetColor(Red, Black);
		}
		cout << "category\n :";
		cout << item.category << endl;
		cout << "headlines\n :";
		cout << item.title << endl;
		cout << "description of the event\n :";
		cout << item.description << endl;
		cout << "date\n :";
		cout << item.day << endl;
		cout << "hour\n :";
		cout << item.hour << endl;
		cout << "importance level from 1 to 3\n :";
		cout << item.level_of_importance;
		cout << endl;
		cout << endl;

	}
	PAUSE
		SetColor(White, Black);
	CLEAR
}

void browse_by_category()
{
	cout << "List of available categories" << endl;

	for (event item : events)
	{
		cout << "-" << item.category << endl;
	}
	cout << endl;
	string cccategory;
	cout << "Enter the category you are looking for \n:";
	cin.ignore();
	getline(cin, cccategory);
	for (int i = 1; i <= day1; i++)
	{
		for (event item : events)
		{
			if (i == item.day)
			{
				if (cccategory == item.category)
				{
		
							if (item.level_of_importance == 1)
							{
								SetColor(Green, Black);
							}
							else if (item.level_of_importance == 2)
							{
								SetColor(Brown, Black);
							}
							else if (item.level_of_importance == 3)
							{
								SetColor(Red, Black);
							}
							cout << "category\n :";
							cout << item.category << endl;
							cout << "headlines\n :";
							cout << item.title << endl;
							cout << "description of the event\n :";
							cout << item.description << endl;
							cout << "date\n :";
							cout << item.day << endl;
							cout << "hour\n :";
							cout << item.hour << endl;
							cout << "importance level from 1 to 3\n :";
							cout << item.level_of_importance;
							cout << endl;
							cout << endl;
						
				}

			}
		}
	}
	PAUSE
		SetColor(White, Black);
	CLEAR
}

void order_of_events()
{
	int day1 = 31;
	int hour = 24;
	for (int i = 1; i <= day1; i++)
	{
		for (event item : events)
		{
			if (i == item.day)
			{
				
						if (item.level_of_importance == 1)
						{
							SetColor(Green, Black);
						}
						else if (item.level_of_importance == 2)
						{
							SetColor(Brown, Black);
						}
						else if (item.level_of_importance == 3)
						{
							SetColor(Red, Black);
						}
						cout << "category\n :";
						cout << item.category << endl;
						cout << "headlines\n :";
						cout << item.title << endl;
						cout << "description of the event\n :";
						cout << item.description << endl;
						cout << "date\n :";
						cout << item.day << endl;
						cout << "hour\n :";
						cout << item.hour << endl;
						cout << "importance level from 1 to 3\n :";
						cout << item.level_of_importance;
						cout << endl;
						cout << endl;
					
				
			}

		}
	}

	PAUSE
		SetColor(White, Black);
	CLEAR
}




