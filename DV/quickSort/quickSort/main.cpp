//
//  main.cpp
//  quickSort
//
//  Created by William Alexis Barrios Concha on 19/10/23.
//

#include <iostream>
using namespace std;

int* order(int*array, int* inicio, int* fin){
    int * p = fin;
    int * lastMin = nullptr;
    int * firstMax = nullptr;
    for(int * i = inicio; i<fin;i++){
        if(*i<*p){
            if(lastMin && i-1 == lastMin)
                lastMin = i;
            else{
                if(lastMin){
                    swap(*(lastMin+1),*i);
                    lastMin = lastMin+1;
                }
                else{
                    swap(*inicio,*i);
                    lastMin = inicio;
                }
                    
                
            }
        }
    }
    if(lastMin){
        swap(*(lastMin+1),*p);
        return (lastMin+1);
    }
    swap(*inicio,*p);
    return inicio;
    
}

void quickS(int* array,int* inicio,int* fin){
    if(inicio >= fin){
        return;
    }
    else{
        int* prevP = order(array,inicio,fin);
        quickS(array,inicio,prevP-1);
        quickS(array,prevP+1,fin);
    }
}

int main(int argc, const char * argv[]) {
    int array[5] = {7,6,5,4,3};
    int* ini = array;
    int tam = sizeof(array)/sizeof(array[0]);
    int* fin = array + tam-1;
    quickS(array,ini,fin);
    return 0;
}
