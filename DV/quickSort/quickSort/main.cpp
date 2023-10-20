//
//  main.cpp
//  quickSort
//
//  Created by William Alexis Barrios Concha on 19/10/23.
//

#include <iostream>
using namespace std;

int* order(int*array, int* inicio, int* fin){
    int* p = fin;
    int * tmp = nullptr;
    for(int*i = inicio; i<fin; i++){
        if(*i<*p){
            if(!tmp)
                tmp =i;
            else{
                if(i-1 != tmp){
                    swap(*(tmp+1),*i);
                    tmp++;
                }
                else{
                    tmp = i;
                }
            }
        }
    }
    if(tmp){
        swap(*(tmp+1),*p);
        return tmp+1;
    }
    else{
        tmp = inicio;
        swap(*tmp,*p);
        return tmp;
    }
    
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
    int array[5] = {2,7,1,5,4};
    int* ini = array;
    int tam = sizeof(array)/sizeof(array[0]);
    int* fin = array + tam-1;
    quickS(array,ini,fin);
    return 0;
}
