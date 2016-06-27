#include </include/tasklist.h>

class TaskList
{
	//definition of TaskList classes..
	void TaskList::TaskList()
	{
		numWheel = 0;
		size = 0;
	}

	//Increments the Number Wheel
	void TaskList::newID()
	{
		this.numWheel++;
	}

	//Adds a task to the list.
	int TaskList::addTask(Task tsk)
	{
		list.push_back(tsk);
		return 1;
	}

	//Removes a task from the list.
	int TaskList::removeTask(Task tsk)
	{
		//list.remove logic here. Look at cplusplus.com page for methods.
		list.erase(tsk(id));
		return 1;
	}

	//Prompts the user for information needed to create a task.
	int TaskList::createTask()
	{
		bool create = false;
		int i, prty;
		string nme, comm;
		this.newID() 		// Make sure that there are no duplciate ID's before creating a record.
		while (create == false)
		{
			//Gather input for record info..
			i = numWheel;
			std::cout << "\nPlease enter a Name for your Task: ";
			getline(cin, nme);	
			std::cout << "\nPlease enter a Priority for your Task (0-9): ";
			std::cin >> prty;
			std::cout << "\nPlease enter a Comment for your Task: ";
			getline(cin, comm);	
			//Now validate the input.....
			if (i == 0 || nme.empty() || comm.empty() || priority == 0)
				std::cout << "\nThis input was invalid, please re-enter your information!" << std::endl;
			else
			{
				Task * task = new Task(i, prty, namIn, commIn);
				list.push_back(task);
			}	
		}
	}
}
