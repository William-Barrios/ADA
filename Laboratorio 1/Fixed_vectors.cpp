#include <iostream>

using namespace std;
int gVect[100];
int gnCount=0;

void Insert(int element){
    if(gnCount<100){
        gVect[gnCount]=element;
        gnCount++;
    }
    cout<<"Vector Full"<<endl;
    return;
}

int main(){
    for(int i = 0; i<100;i++){
        Insert(i);
    }
    return 0;
}