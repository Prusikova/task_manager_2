#pragma once
#ifndef TASKMANAGER
#define TASKMANAGER

#include<string>
#include<vector>
#include<algorithm>

#include"Task.h"

using namespace std;

class TaskManager
{
private:
	vector<Task> tasks;
	static int nextId;
	
public:

	TaskManager();

	void addTask(const Task& task);
	void removeTask(int id);
	Task* getTask(int id) const;
	vector<Task> getAllTasks() const;

};


#endif
