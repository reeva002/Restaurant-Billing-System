#include<iostream>
#include"orders.h"
#include<vector>
using namespace std;


vector<OrderItem> takeorder(MenuItem menu[], int menusize){
    vector<OrderItem> order;
    int choiceId, quantity;

    while(true){
        cout<<"Enter the ID of the item you want to order (enter 0 if you want to exit): ";
        cin>>choiceId;
        if(choiceId==0){
            break;
        }
        if(choiceId>=1 && choiceId<=menusize){
            cout<<"Enter the quantity: ";
            cin>>quantity;

            if(quantity<=0){
                cout<<"Invalid quantity. Please try again.\n";
                continue;
            }

            bool found=false;
            for(auto& item:order){
                if(item.name==menu[choiceId-1].name){
                    item.quantity+=quantity;
                    cout<<quantity<<" more "<<item.name<<" added to your order.\n\n";
                    found=true;
                    break;
                }
            }
            if(!found){
                OrderItem newItem;
                newItem.name= menu[choiceId-1].name;
                newItem.price= menu[choiceId-1].price;
                newItem.quantity= quantity;
                order.push_back(newItem);
                cout<<quantity<<" "<<newItem.name<<" added to your order.\n\n";
            }
        }
        else{
            cout<<"Invalid choice. Please try again.\n";
        }
    }
    return order;
}
// show order summary
void showOrder(const vector<OrderItem>& order){
    cout<<"\n\nYour order summary:\n\n";
    cout<<"Item\t\tQuantity\tPrice\n";
    cout<<"---------------------------------------\n";


    for(const auto& item:order){
        cout<<item.name<<"\t\t"<<item.quantity<<"\t\t"<<item.price*item.quantity<<"\n";
    }
    cout<<"---------------------------------------\n";
    
}


