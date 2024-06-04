#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

class Task {
public:
    string name;
    string dueDate;

    Task(const string& taskName, const string& taskDueDate) : name(taskName), dueDate(taskDueDate) {}
};

class TaskManager {
private:
    vector<Task> tasks;

public:
    void addTask(const string& taskName, const string& taskDueDate) {
        tasks.emplace_back(taskName, taskDueDate);
        cout << "Task '" << taskName << "' added successfully." << endl;
    }

    void removeTask(const string& taskName) {
        auto it = remove(tasks.begin(), tasks.end(), [&](const Task& task) {
            return task.name == taskName;
        });

        if (it != tasks.end()) {
            tasks.erase(it, tasks.end());
            cout << "Task '" << taskName << "' removed successfully." << endl;
        } else {
            cout << "Task '" << taskName << "' not found." << endl;
        }
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks to display." << endl;
            return;
        }

        cout << "Tasks:" << endl;
        for (const auto& task : tasks) {
            cout << "Name: " << task.name << ", Due Date: " << task.dueDate << endl;
        }
    }
};

int main() {
    TaskManager manager;
    int choice;
    string taskName, taskDueDate;

    while (true) {
        cout << "\nTODO List Menu:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Remove Task" << endl;
        cout << "3. View Tasks" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // To ignore the newline character left in the input buffer

        switch (choice) {
            case 1:
                cout << "Enter task name: ";
                getline(cin, taskName);
                cout << "Enter due date: ";
                getline(cin, taskDueDate);
                manager.addTask(taskName, taskDueDate);
                break;
            case 2:
                cout << "Enter task name to remove: ";
                getline(cin, taskName);
                manager.removeTask(taskName);
                break;
            case 3:
                manager.viewTasks();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}