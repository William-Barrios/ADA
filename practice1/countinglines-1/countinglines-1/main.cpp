//
//  main.cpp
//  countinglines-1
//
//  Created by William Alexis Barrios Concha on 4/09/23.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0;
    int key=0;
    int i;
    vector<int> A(10);
    
    
    for(int i =0;i<A.size();i++){
        A[i]=i+1;
    }
    
    count1++;
    for(int j=2;j<A.size();j++){
        count1++;
        key = A[j];count2++;
        i = j-1;count3++;
        count4++;
        while(i>0 && A[i]>key){
            count4++; 
            A[i+1]=A[i];count5++;
            i=i-1;count6++;
        }
        A[i+1]=key;count7++;
    }
    cout<<count1<<endl;
    cout<<count2<<endl;
    cout<<count3<<endl;
    cout<<count4<<endl;
    cout<<count5<<endl;
    cout<<count6<<endl;
    cout<<count7<<endl;
    cout<<count1+count2+count3+count4+count5+count6+count7<<endl;
    return 0;
}
