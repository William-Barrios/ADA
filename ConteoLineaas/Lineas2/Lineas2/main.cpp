//
//  main.cpp
//  Lineas2
//
//  Created by William Alexis Barrios Concha on 10/09/23.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int c1=0,c2=0,c3=0,c4=0;
    vector<int>a(15);
    int i =0;c1++;
    a[11]=-4;c2++;
    c3++;
    while (a[i]!=-4){
        c3++;
        i = i+1;c4++;
    }
    cout<< c1 <<endl;
    cout<< c2 <<endl;
    cout<< c3 <<endl;
    cout<< c4 <<endl;
    cout<<c1+c2+c3+c4<<endl;
    
    return 0;
}
