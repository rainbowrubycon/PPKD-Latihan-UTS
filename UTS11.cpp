#include <iostream>
using namespace std;

int calculateTicketPrice(char category, int promoCode){
    int harga;
    if(category == 'C'){
        harga = 20000;
    }
    else if(category == 'A'){
        harga = 40000;
    }
    else if(category == 'S'){
        harga = 30000;
    }
    else{
        cout << "category is not found!";
    }

    switch(promoCode){
        case 10:
        harga = harga - 10000;
        break;

        case 15:
        harga = harga - 15000;
        break;

        default:
        harga = harga;
        break;
    }
    return harga;
}

int main(){
    char category;
    int promoCode;
    cin >> category >> promoCode;
    cout << calculateTicketPrice(category, promoCode);
    return 0;
}