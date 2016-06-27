#include <string>
#include <iostream>

class Task
{
private:
	int id,priority;	
	string name, comment;
public:
	Task(int i, int prty, string namIn, string commIn);
	setName(string nam);
	getName();
	setComm(string comm);
	printTask();
};
