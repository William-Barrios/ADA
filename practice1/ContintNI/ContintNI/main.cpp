//
//  main.cpp
//  ContintNI
//
//  Created by William Alexis Barrios Concha on 6/09/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int cont[6] = {0,0,0,0,0,0};
    int i =1;cont[0]++;
    cont[1]++;
    while (i<= 5){
        cont[1]++;
        int j = i; cont[2]++;
        cont[3]++;
        while(j<=5){
            cont[3]++;
            j= j+1; cont[4]++;
        }
        i+=1; cont[5]++;
    }
    
    int sum = 0;
    for(int i = 0; i<sizeof(cont)/sizeof(cont[0]);i++){
        cout<<cont[i]<<endl;
        sum += cont[i];
    }
    cout<<"suma total: "<< sum<<endl;
}
