//
//  main.cpp
//  PD1MaxPrint
//
//  Created by William Alexis Barrios Concha on 16/11/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int calc(int nro){
    int length = 1;
        while (nro != 1) {
            if(nro%2==1){
                nro = 3* nro + 1;
            }
            else {
                nro=nro/2;
            }
               length++;
        }
        return length;
}

int main() {
    int i,j, maxim;
    while(cin>>i>>j){
        maxim = 0;
        for(int o = i; o<=j; o++){
            int calculated = calc(o);
            if(calculated>maxim)
                maxim =calculated;
        }
        cout<<i<<" "<<j<<" "<< maxim<<endl;
    }
    
    return 0;
}
