#include <iostream>
using namespace std;

int checkRestockAlers(int totalItem){
    int ItemId, currentStock, minRequiredStock, totalStock;
    for(int i=0; i<totalItem; i++){
        cin >> ItemId >> currentStock >> minRequiredStock;
    if(currentStock<minRequiredStock){
        totalStock++;
    }
    }
    return totalStock;
}

int main(){
    int totalItem;
    cin >> totalItem;
    cout << checkRestockAlers(totalItem);
    return 0;
}