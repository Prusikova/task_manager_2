#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include"TaskManager.h"
#include"Task.h"


using namespace std;
int TaskManager::nextId = 1;
TaskManager::TaskManager()
{
}


void TaskManager::addTask(const Task& task)
{
	
		static int id = 1;
		string title;
		string description;
		string status;

		cout << "Enter the title: " << endl;
		cin >> title;

		cout << "Enter description of your task: " << endl;
		cin >> description;

		cout << "Enter status of your task: " << endl;
		cin >> status;

		Task newTask(++id, title, description, status);

	
	tasks.push_back(task);
	
	
}

void TaskManager::removeTask(int id)
{
	
	cout << "введите номер задания, которое необходимо удалить" << endl;
	cin >> id;
	auto it = find_if(tasks.begin(), tasks.end(), [id](const Task& task){
		return task.getId() == id; 
		});

	if (it != tasks.end()) {
		tasks.erase(it);
		cout << "Task with id " << id << " has been removed." << endl;
	}
	else {
		cout << "Task with id " << id << " doesn't exist." << endl;
	}
}

Task* TaskManager::getTask(int id) const {
	auto it = find_if(tasks.begin(), tasks.end(), [id](const Task& task) {
		return task.getId() == id;
		});

	if (it != tasks.end()) {
		return &(*it);
	}
	return nullptr;
}


vector<Task> TaskManager::getAllTasks() const
{
	return tasks;
}