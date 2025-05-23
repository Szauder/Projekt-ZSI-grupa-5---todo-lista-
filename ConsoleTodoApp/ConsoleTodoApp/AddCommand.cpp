#include "AddCommand.h"
#include "Task.h"
#include <iostream>

void AddCommand::Execute(std::vector<Task>& tasks) {
    Task newTask;
    std::cout << "Tytul: ";
    std::getline(std::cin, newTask.Title);
    std::cout << "Opis: ";
    std::getline(std::cin, newTask.Description);
    newTask.Completed = false;
    tasks.push_back(newTask);
}
