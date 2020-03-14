#pragma once
#include<string>
#include"iostream"

using namespace std;

struct event
{
	string category;
	string title;
    string description;
	int day;
	int hour;
	int level_of_importance;
	
};

void give_a_joke();
void view_event();
void SetColor(int text, int background);
void browse_by_category();
void order_of_events();