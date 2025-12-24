#include <iostream>
#include "calculation.h"
#include "orders.h"
#include "menu.h"

using namespace std;

int main(){
    cout << "\n\n\n---------------------------------------\n";
    cout<<"WELCOME TO OUR RESTAURANT!\n";
    cout<<"What would you like to have today? \n\n\n";

    int categoryChoice;
    vector<OrderItem> order;

    while(true){
        cout<<"Select a category:\n";
        cout<<"1. Starters\n";
        cout<<"2. Main Course\n";
        cout<<"3. Shakes\n";
        cout<<"4. Desert\n";
        cout<<"5. Exit and proceed to checkout\n\n";
        cout<<"Enter your choice: ";
        cin>>categoryChoice;
        
        switch(categoryChoice){
            case 1:{
                displayMenu(starters, startersSize);
                vector<OrderItem> newItems=takeorder(starters, startersSize);
                order.insert(order.end(), newItems.begin(), newItems.end());
                break;}
            case 2:{
                displayMenu(mainCourse, mainCourseSize);
                vector<OrderItem> newItems=takeorder(mainCourse, mainCourseSize);
                order.insert(order.end(), newItems.begin(), newItems.end());
                break;}
            case 3:{
                displayMenu(shakes, shakesSize);
                vector<OrderItem> newItems=takeorder(shakes,shakesSize);
                order.insert(order.end(), newItems.begin(), newItems.end());
                break;}
            case 4:{
                displayMenu(desert, desertSize);
                vector<OrderItem> newItems=takeorder(desert,desertSize);
                order.insert(order.end(), newItems.begin(), newItems.end());
                break;}
            case 5:{
                showOrder(order);
                double total=calculateTotal(order);
                double sgst=calculateSGST(total);
                double cgst=calculateCGST(total);
                double discountRate;
                cout<<"Enter discount rate (in %): ";
                cin>>discountRate;
                double discountAmount=discountedAmount(total, discountRate);
                double finalAmount=calculateFinalAmount(total, cgst, sgst,discountAmount);
                cout<<"\nTotal: "<<total<<"\n";
                cout<<"Discount Amount ("<<discountRate<<"%): "<<discountAmount<<"\n";
                cout<<"SGST (2.5%): "<<sgst<<"\n";
                cout<<"CGST (2.5%): "<<cgst<<"\n";
                
                cout<<"Final Amount: "<<finalAmount<<"\n\n";
                cout<<"Thank you for dining with us!\n\n";
            }
            return 0;
            default:
                cout<<"Invalid choice. Please try again.\n";
            
        }
        
    
    }
}

