//
//  main.cpp
//  Lineas5
//
//  Created by William Alexis Barrios Concha on 10/09/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
    int i = 3;c1++;
    c2++;
    while(i<=5){
        c2++;
        int j=i;c3++;
        c4++;
        while(j<=10){
            c4++;
            j+=1;c5++;
        }
        i+=1;c6++;
    }
    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;
    cout<<c4<<endl;
    cout<<c5<<endl;
    cout<<c6<<endl;
    cout<<c1+c2+c3+c4+c5+c6<<endl;
    return 0;
}
