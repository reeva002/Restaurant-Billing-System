#ifndef CALCULATION_H
#define CALCULATION_H

#include<iostream>
#include<vector>
#include "orders.h"
using namespace std;

double calculateTotal(const vector<OrderItem>& order);
double calculateSGST(double total);
double calculateCGST(double total);
double discountedAmount(double total, double discountRate);
double calculateFinalAmount( double total, double CGST, double SGST, double discountAmount);

#endif // CALCULATION_H