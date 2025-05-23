#ifndef UIDRAWER_H
#define UIDRAWER_H

#include <string>
#include <vector>
#include "Task.h"

class UiDrawer {
public:
    void Clear();
    void DrawText(const std::string& text);
    void DrawLine(const std::string& line);
    void DrawInt(int value);
    void DrawTab(int spaceCount = 2);
    void DrawEmptyTaskList();
    void DrawTasksList(const std::vector<Task>& tasks);
    void DrawUserInputSign();
};

#endif
