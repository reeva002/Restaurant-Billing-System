#ifndef ORDER_H
#define ORDER_H
#include<iostream>
#include<vector>
#include "menu.h"
using namespace std;

class OrderItem {
    public:
    string name;
    double price;
    int quantity;
};

vector<OrderItem> takeorder(MenuItem menu[], int menusize);
void showOrder(const vector<OrderItem>& order);

#endif 