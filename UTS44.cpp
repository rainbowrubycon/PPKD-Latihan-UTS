#include <iostream>
using namespace std;

int main(){
    int distrik;
    cin >> distrik;

    if(distrik>=2 && distrik<=10){
        int tingkatBahaya[distrik];
        int valid = 1;

        for(int i=0; i<distrik; i++){
            cin >> tingkatBahaya[i];
        }
        for(int i=0; i<distrik; i++){
            if(tingkatBahaya[i]<-20 || tingkatBahaya[i]>30){
                valid = 0;
                break;
            }
        }

        int max = tingkatBahaya[0];
        int min = tingkatBahaya[0];
        int maxx = -21;
        int minn = 31;

        if(valid==1){
            for(int i=0; i<distrik; i++){
                if(max<tingkatBahaya[i]){
                    max = tingkatBahaya[i];
                }
                if(min>tingkatBahaya[i]){
                    min = tingkatBahaya[i];
                }
            }
            for(int i=0; i<distrik; i++){
                if(maxx<tingkatBahaya[i] && tingkatBahaya[i]<max){
                    maxx = tingkatBahaya[i];
                }
                if(minn>tingkatBahaya[i] && tingkatBahaya[i]>min){
                    minn = tingkatBahaya[i];
                }
            }
            cout << maxx << endl << minn;
        }
        else{
            cout << "tingkatBahaya tidak valid";
        }
    }
    else{
        cout << "distrik tidak valid";
    }
    return 0;
}