#include<iostream>
#include "calculation.h"
using namespace std;

double calculateTotal(const vector<OrderItem>& order) {
    double total = 0.0;
    for (const auto& item : order) {
        total += item.price * item.quantity;
    }
    return total;
}

double calculateSGST(double total) {
    const double sgstRate = 0.05; 
    return total * sgstRate;
}

double calculateCGST(double total) {
    const double cgstRate = 0.05; 
    return total * cgstRate;
}
double discountedAmount(double total, double discountRate) {
    return total * (discountRate / 100.0);
}   

double calculateFinalAmount(double total, double cgst, double sgst, double discountAmount) {
    return (total- discountAmount) + cgst + sgst;
}