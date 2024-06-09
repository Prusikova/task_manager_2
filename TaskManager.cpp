#include<iostream>
#include<string>
#include<vector>

#include"TaskManager.h"
#include"Task.h"


using namespace std;

TaskManager::TaskManager()
{
	

}



void TaskManager::addTask(const Task& task)
{
	Task newTask(id, title, description, status);
	newTask.id = Task::id;
	cout << "Enter the title: " << endl;
	cin >> title;

	cout << "Enter description of your task: " << endl;
	cin >> description;

	cout << "Enter status of your task: " << endl;
	cin >> status;

	tasks.push_back(newTask);
	
}

void TaskManager::removeTask(int id)
{
	cout << "Enter id of task: " << endl;
	cin >> id;
	int removeId = id - 1;
	auto it = std::find(tasks.begin(), tasks.end(), removeId);
	if (it != tasks.end()) {
		tasks.erase(it);
	}
	else
	{
		cout << "task number " << id << "doesn't exist" << endl;
	}
}

