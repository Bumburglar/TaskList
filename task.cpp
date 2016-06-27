#include </include/task.h>
class Task
{
	//definitions of member functions for Task class.
	Task::Task(int i, int prty, string namIn, string commIn)
	{
		this.setID(i);
		this.setPriority(prty);
		this.setName(namIn);
		this.setComm(commIn);	
	}
	//All functions in the task class will return 1 if successful adding info and 0 if not.
	int Task::setID(int i)
	{
		this.id=i;
	}
	int Task::getID
	{
		return id;
	}
	int Task::setPriority(int prty)
	{
		if (prty <=9 && prty >=1)
		{
			priority=prty;
			return 1;
		}
		else
			return 0;
	}
	int Task::getPriority()
	{
		return priority;
	}
	int Task::setName(string nam)
	{
		if (nam = NULL)
			return 0;
		else
		{		
			name=nam;
			return 1;
		}
	}
	string Task::getName()
	{
		return name;
	}
	int Task::setComm(string comm)
	{
		if (comm = NULL)
			return 0;
		else
		{
			comment=comm;
			return 1;
		}
	}
	string Task::getComm()
	{
		return comment;
	}
	void Task::printTask()
	{
		std::cout << "Name: " + this.getName() + " | Priority: " + this.getPriority << std::endl;
		std::cout << "Comm: " + this.getComm() << std::endl;
	}

}
