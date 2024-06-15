#pragma once
#ifndef TASK
#define TASK

#include<string>
using namespace std;

class Task
{private:
	int id;
	string title;
	string description;
	string status;
public:
	
	Task(int id, const string& title, const string& description, const string& status);
	void info() const;
	void task();
	int getId() const
	{
		return id;
	}
};





#endif