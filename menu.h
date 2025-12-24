#ifndef MENU_H
#define MENU_H

#include<string>
using namespace std;

class MenuItem {
    public:
    int id;  
    string name;
    double price;
};

//Menu array declaration
extern MenuItem starters[];
extern int startersSize;
extern MenuItem mainCourse[];
extern int mainCourseSize;
extern MenuItem shakes[];
extern int shakesSize;  
extern MenuItem desert[];
extern int desertSize;
void displayMenu(MenuItem menu[], int size);

#endif // MENU_H