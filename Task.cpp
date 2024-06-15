#include<iostream>
#include<vector>

#include"Task.h"
#include"TaskManager.h"
using namespace std;

Task::Task(int id, const string& title, const string& description, const string& status)
	: id(id), title(title), description(description), status(status) {}



void Task::info() const
{

	cout << "Task " << id << "\nTitle: " << title << "\nDescription: " << description << "\nStatus: " << status << endl;
}

