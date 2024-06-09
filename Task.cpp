#include<iostream>
#include"Task.h"

using namespace std;

Task::Task(int id, string title, string description, string status)
{
	this->id = id;
	this->title = title;
	this->description = description;
	this->status = status;


}

void Task::info()
{
	cout << "1" << endl;
}