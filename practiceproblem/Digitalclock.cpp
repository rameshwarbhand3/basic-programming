#include<iostream>
]
#include<unistd.h>
#include<windows.h>
using namespace std;
int main(){
    int hr=0,min=0,sec=0;
    while(true){
        system("cls");
        cout<<hr<<" : "<<min<<" : "<<sec<<endl;
        sec++;
        if(sec=60){
            min++;
            sec=0;
            if(min=60){
                hr++;
                min=0;
                if(hr=12){
                    hr=0;
                }
            }
        }
        sleep(1);
    }
    return(0);
}