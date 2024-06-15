#include<iostream>
#include"Task.h"
#include"TaskManager.h"



using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int id{};
	string title;
	string description;
	string status;
	vector<Task> tasks;
	TaskManager taskManager;
	
	char key;
	cout << "Task Manager Application" << endl;
	cout << endl;

	cout << "add Task = 'a',remove task = 'b', get one Task = 'c', getAll = 'd'" << endl;
	cout << endl;

	cout << "введите необходимое действие (a, b, c, d): " << endl;
	cin >> key;
	

	switch (key)
	{
	case 'a':
	{
		Task task(++id, title, description, status);

		taskManager.addTask(task);
		task.info();
		break;
	}
	case 'b':
	{
		taskManager.removeTask(id);
		break;
	}
	case 'c':
	{
		taskManager.getTask(id);
		break;
	}
	case 'd':
	{
		taskManager.getAllTasks();
		break;
	}
	default:
		cout << "введен некорректный запрос" << endl;

	};


}