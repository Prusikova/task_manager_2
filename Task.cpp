#include<iostream>
#include<vector>

#include"Task.h"
#include"TaskManager.h"
using namespace std;

Task::Task(int id, string title, string description, string status)
{
	this->id = id;
	this->title = title;
	this->description = description;
	this->status = status;


}
 
void Task::task()
{
	int id = 0;
	string title;
	string description;
	string status;
	Task newTask(id, title, description, status);
	newTask.id = Task::id;
	cout << "Enter the title: " << endl;
	cin >> title;

	cout << "Enter description of your task: " << endl;
	cin >> description;

	cout << "Enter status of your task: " << endl;
	cin >> status;

}
void Task::info()
{

	cout << "Task " << id << "\nTitle: " << title << "\nDescription: " << description << "\nStatus: " << status << endl;
}

