#include <iostream>
using namespace std;

int main(){
    char jenis;
    int lama, tarif;
    cin >> jenis >> lama;
        if(jenis == 'M'){
            if(lama>=1 && lama<=24){
                if(lama > 8){
                    cout << 10000; 
                }
                else{
                    cout << 2000+(1000*(lama-1));
                }
            }
            else{
                cout << "please input real hour!\n";
            }
        }
        else if(jenis == 'B'){
            if(lama>=1 && lama<=24){
                if(lama > 8){
                    cout << 20000; 
                }
                else{
                    cout << 5000+(2000*(lama-1));
                }
            }
            else{
                cout << "please input real hour!\n";
            }
        }
        else{
            cout << "type of vehicle is not found!\n";
        }
    return 0;
}