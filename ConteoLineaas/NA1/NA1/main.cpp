//
//  main.cpp
//  NA1
//
//  Created by William Alexis Barrios Concha on 15/09/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int c1=0,c2=0,c3=0,c4=0;
    
    int i = 0; c1++;
    c2++;
    for(;i<=9;i++){
        c2++;
        c3++;
        if(i%2 == 0){
            c4++;
        }
    }
    
    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;
    cout<<c4<<endl;
    
}
