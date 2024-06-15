#include<iostream>
#include<string>
#include<vector>

#include"TaskManager.h"
#include"Task.h"


using namespace std;

TaskManager::TaskManager()
{
	void addTask(const Task & task);
	void removeTask(int id);
	Task* getTask(int id);
	vector<Task> getAllTasks();

}

vector<Task> tasks;

void TaskManager::addTask(const Task& task)
{
	
	tasks.push_back(task);
	
}

void TaskManager::removeTask(int id)
{
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
	auto it = std::find_if(tasks.begin(), tasks.end(), [id](const Task& task){
		return task.getId() == id;
		});

	if (it != tasks.end())
	{
		return &(*it); 
	}
	return nullptr;
}


vector<Task> TaskManager::getAllTasks() 
{
	return tasks;
}