//
//  main.cpp
//  selectionProblem
//
//  Created by William Alexis Barrios Concha on 20/10/23.
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


int* selection(int* array,int*inicio,int*fin,int*select){
    int* p = nullptr;
    while(select != p || !p){
        p = order(array,inicio,fin);
        if(p<select){
            inicio = p+1;
        }
        else{
            fin = p-1;
        }
    }
    return select;
}

int main(int argc, const char * argv[]) {
    int array[5] = {7,6,5,4,3};
    int s = 3;
    int tam = sizeof(array)/sizeof(array[1]);
    int* inicio = array;
    int* fin = inicio + tam -1;
    int* select = inicio + 3-1;
    int* r = selection(array,inicio,fin,select);
    cout<<*r<<endl;
}
