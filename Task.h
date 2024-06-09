#pragma once
#ifndef TASK
#define TASK

#include<string>
using namespace std;

class Task
{
public:
	int id;
	string title;
	string description;
	string status;
	Task(int id, string title, string description, string status);
	void info();

};





#endif