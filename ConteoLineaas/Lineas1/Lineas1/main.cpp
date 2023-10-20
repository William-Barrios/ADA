//
//  main.cpp
//  Lineas1
//
//  Created by William Alexis Barrios Concha on 10/09/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int c1=0, c2=0,c3=0;
    int i=1;c1++;
    c2++;
    while(i<=10){
        c2++;
        i=i+1;c3++;
    }
    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;
    cout<<c1+c2+c3<<endl;
    return 0;
}
