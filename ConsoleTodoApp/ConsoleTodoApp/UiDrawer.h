#ifndef UIDRAWER_H
#define UIDRAWER_H

#include <string>
#include <vector>
#include "Task.h"

class UiDrawer {
public:
    static void Clear();
    static void DrawText(const std::string& text);
    static void DrawLine(const std::string& line);
    static void DrawInt(int value);
    static void DrawTab(int spaceCount = 2);
    static void DrawEmptyTaskList();
    static void DrawTasksList(const std::vector<Task>& tasks);
    static void DrawUserInputSign();
};

#endif
