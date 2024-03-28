#include <iostream>
using namespace std;

const int MAX_TASKS=15;
	struct Task{
    char description[50];
    bool completed;
};
void addTask(Task taskList[], int &NO_Tasks) {
    if(NO_Tasks < MAX_TASKS) {
        cout<<"\t\t\t\t\tEnter task description: ";
        cin.ignore();
        cin.getline(taskList[NO_Tasks].description, 100);
        taskList[NO_Tasks].completed=false;
        NO_Tasks++;
        cout<<"\t\t\t\t\tTask added successfully.\n";
    } else{
        cout<<"\t\t\t\t\tTask list is full. Unable to add more tasks.\n";
    }
}

void viewTasks(const Task taskList[], int NO_Tasks){
    if(NO_Tasks == 0){
        cout<<"\t\t\t\t\tTask list is empty.\n";
        return;
    }

    cout<<"\t\t\t\t\tTasks:\n";
    for(int i = 0; i < NO_Tasks; ++i){
        cout<<"\t\t\t\t\t"<<i + 1<<". "<<taskList[i].description<<" - "<<endl;
        if(taskList[i].completed)
            cout<<"\t\t\t\t\tCompleted\n";
        else
            cout<<"\t\t\t\t\tPending\n";
    }
}

void markTaskCompleted(Task taskList[], int NO_Tasks){
    viewTasks(taskList, NO_Tasks);
    if(NO_Tasks == 0){
        cout<<"\t\t\t\t\tNo tasks to mark as completed.\n";
        return;
    }

    cout<<"\t\t\t\t\tEnter the task number to mark as completed: ";
    int taskNumber;
    cin>>taskNumber;

    if(taskNumber >= 1 && taskNumber <= NO_Tasks){
        taskList[taskNumber - 1].completed = true;
        cout<<"\t\t\t\t\tTask marked as completed.\n";
    } else{
        cout<<"\t\t\t\t\tInvalid task number.\n";
    }
}

void removeTask(Task taskList[], int &NO_Tasks) {
    viewTasks(taskList, NO_Tasks);
    if(NO_Tasks == 0){
        cout<<"\t\t\t\t\tNo tasks to remove.\n";
        return;
    }

    cout<<"\t\t\t\t\tEnter the task number to remove: ";
    int taskNumber;
    cin>>taskNumber;

    if(taskNumber >= 1 && taskNumber <= NO_Tasks) {
        for(int i = taskNumber- 1; i<NO_Tasks-1; ++i) {
            taskList[i] = taskList[i + 1];
        }
        NO_Tasks--;
        cout<<"\t\t\t\t\tTask removed successfully.\n";
    } else{
        cout<<"\t\t\t\t\tInvalid task number.\n";
    }
}
int main(){
    Task taskList[MAX_TASKS];
    int NO_Tasks=0;
	string name;
    while(true){
    	cout<<"\n\t\t\t\t\t=======================\n";
        cout<<"\t\t\t\t\t******To-Do LIST****** \n";
        cout<<"\t\t\t\t\t=======================\n";
        cout<<"\t\t\t\t\tEnter your name: ";
        cin>>name;
        cout<<"\t\t\t\t\tWelcome "<<name<<" to our program............\n\n";
        cout<<"\t\t\t\t\t1. Add Task\n";
        cout<<"\t\t\t\t\t2. View Tasks\n";
        cout<<"\t\t\t\t\t3. Mark Task as Completed\n";
        cout<<"\t\t\t\t\t4. Remove Task\n";
        cout<<"\t\t\t\t\t5. Exit\n";
        cout<<"\t\t\t\t\tEnter your choice: ";

        int choice;
        cin >> choice;
		if(choice==1){
			system("cls");
                addTask(taskList, NO_Tasks);
}
        else if(choice == 2){
        	system("cls");
                viewTasks(taskList, NO_Tasks);
		}
		else if(choice == 3){
        	system("cls");
                markTaskCompleted(taskList, NO_Tasks);
		}
		else if(choice == 4){
        	system("cls");
                removeTask(taskList, NO_Tasks);
		}
		else if(choice == 5){
        	system("cls");
            cout << "\t\t\t\t\t________________________________________\n";
			cout << "\t\t\t\t\t========================================\n";
			cout << "\t\t\t\t\tEXISTING THE TODO LIST MANAGER. GoodBye!\n";
			cout << "\t\t\t\t\t========================================\n";
			cout << "\t\t\t\t\t________________________________________\n";
			break;
		}
           
        else{
		        cout<<"\t\t\t\t\tInvalid choice. Please try again.\n";
        }
    }return 0;
}

