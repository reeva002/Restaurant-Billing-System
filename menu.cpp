#include "menu.h"
#include<iostream>
#include<iomanip>

using namespace std;

//Starters menu
MenuItem starters[] = {
    {1, "Paneer Tikka", 150.00 },
    {2, "Cheese Corns", 130.00},
    {3, "French Fries", 100.00},
    {4, "Chilli Potato", 120.00},
    {5, "Veg Manchurian", 140.00},
    {6, "Spring Rolls", 110.00},
    {7, "Aloo Tikki", 115.00},
    {8, "Crispy Veg", 125.00},
    {9, "Mushroom Duplex", 135.00},
    {10, "Chilly Paneer", 160.00},
};

int startersSize = sizeof(starters) / sizeof(starters[0]);

//Main Course menu
MenuItem mainCourse[] = {
    {1, "Paneer Masala", 250.00},
    {2, "Dal Makhani", 200.00},
    {3, "Veg Biryani", 220.00},
    {4, "Jeera Rice", 180.00},
    {5, "Butter Naan", 40.00},
    {6, "Garlic Naan", 50.00},
    {7, "Tandoori Roti", 30.00},
    {8, "Mixed Veg Curry", 210.00},
    {9, "Chole Bhature", 230.00},
    {10, "Palak Paneer", 240.00}
};

int mainCourseSize = sizeof(mainCourse) / sizeof(mainCourse[0]);

//shakes menu
MenuItem shakes[] = {
    {1, "Chocolate Shake", 120.00},
    {2, "Vanilla Shake", 110.00},
    {3, "Berry Shake", 130.00},
    {4, "Mango Shake", 140.00},
    {5, "Oreo Shake", 150.00},
    {6, "KitKat Shake", 125.00},
    {7, "Coffee Shake", 135.00},
    {8, "Banana Shake", 145.00},
};

int shakesSize = sizeof(shakes) / sizeof(shakes[0]);

//desert menu
MenuItem desert[]={
    {1, "Gulab Jamun", 80.00},
    {2, "Rasmalai", 90.00},
    {3, "Cheesecake", 70.00},
    {4, "Gajar Halwa", 100.00},
    {5, "Rasgulla", 100.00}

};

int desertSize=sizeof(desert)/sizeof(desert[0]);


//to diplay

void displayMenu(MenuItem menu[], int size) {
    cout << "ID\tName\t\t\tPrice\n";
    cout << "---------------------------------------\n";
    for (int i = 0; i < size; i++) {
        cout << menu[i].id << "\t" << menu[i].name << "\t\t" << menu[i].price << "\n";
    }
    cout << "---------------------------------------\n";
}