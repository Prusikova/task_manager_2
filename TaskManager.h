#pragma once
#ifndef TASKMANAGER
#define TASKMANAGER

#include<string>
#include<vector>
#include"Task.h"

using namespace std;

class TaskManager
{
private:
	
	static int id;
	
public:

	void addTask(const Task& task);
	void removeTask(int id);
	Task* getTask(int id) const;
	vector<Task> getAllTasks();
};


#endif
