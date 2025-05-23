#include "UiDrawer.h"
#include <iostream>

void UiDrawer::Clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void UiDrawer::DrawText(const std::string& text) {
    std::cout << text;
}

void UiDrawer::DrawLine(const std::string& line) {
    std::cout << line << std::endl;
}

void UiDrawer::DrawInt(int value) {
    std::cout << value;
}

void UiDrawer::DrawTab(int spaceCount) {
    std::cout << std::string(spaceCount, ' ');
}

void UiDrawer::DrawEmptyTaskList() {
    Clear();
    DrawLine("====== LISTA ZADAN ======");
    DrawLine("Brak zadan do wyswietlenia.");
    DrawLine("==========================");
}

void UiDrawer::DrawTasksList(const std::vector<Task>& tasks) {
    Clear();
    DrawLine("====== LISTA ZADAN ======");
    if (tasks.empty()) {
        DrawLine("Brak zadan do wyswietlenia.");
    }
    else {
        for (size_t i = 0; i < tasks.size(); ++i) {
            const Task& task = tasks[i];
            std::string status = task.Completed ? "[X]" : "[ ]";
            std::cout << i + 1 << ". " << status << " " << task.Title << " - " << task.Description << std::endl;
        }
    }
    DrawLine("==========================");
}

void UiDrawer::DrawUserInputSign() {
    std::cout << ">> ";
}
