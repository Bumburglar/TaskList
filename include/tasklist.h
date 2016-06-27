#include <task.h>
#include <vector>
class TaskList
{
private:
	int numWheel;
	int size;
	vector<Task> list;
public: 
	void TaskList();
	int addTask(Task tsk);
	int removeTask(Task tsk);
	int findTask();
	int sortTasks();
	void newID();
	int createTask();
};
