//
//  main.cpp
//  mergeSort
//
//  Created by William Alexis Barrios Concha on 19/10/23.
//

#include <iostream>
#include <vector>
using namespace std;

int* combination(int * array,int* inicio, int* fin,int * a,int *b){
    vector<int>tmp(inicio,fin+1);
    int ini = a - inicio;
    int fini = b -inicio;
    int save = fini;
    while(fini <tmp.size() && ini<=save){
        if(tmp[ini]>tmp[fini]){
            *a = tmp[fini];
            fini++;
            a++;
        }
        else{
            *a = tmp[ini];
            ini++;
            a++;
        }
    }
    while (ini < save){
        *a = tmp[ini];
        a++;
        ini++;
    }
    return inicio;
    
}

int* Mergesort (int*array, int*inicio, int*fin){
    if(fin-inicio == 0){
        return inicio;
    }
    else{
        
        int s = (fin - inicio)/2;
        int* a = Mergesort(array,inicio,(inicio+s));
        int* b= nullptr;
        if(((fin - inicio) %2) != 0){
            b = Mergesort(array,(fin-s),fin);
        }
        else{
            b = Mergesort(array,(fin-s+1),fin);

        }
        return combination(array,inicio,fin,a,b);
    
        
    }
    return inicio;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[6] = {5,4,3,2,1,0};
    int tam = sizeof(array)/sizeof(*array);
    cout<<tam<<endl;
    int * inicio = array;
    cout<<*inicio<<endl;
    int *fin = array+ tam-1;
    cout<<*fin<<endl;
    
    Mergesort(array,inicio,fin);
    
    cout<<(array)<<endl;
    return 0;
}
