//
//  main.cpp
//  QuicksortMid
//
//  Created by William Alexis Barrios Concha on 29/11/23.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pivot(vector<int>& partToOrder, int inicio, int fin){
    int indpiv = (inicio + fin)/2;
    int psinicio = inicio;
    int psfin = fin;
    while(inicio != fin){
        while(partToOrder[inicio] < partToOrder[indpiv]){
            inicio++;
        }
        while(partToOrder[fin]>partToOrder[indpiv]){
            fin--;
        }
        swap(partToOrder[inicio],partToOrder[fin]);
        if((inicio == indpiv ||fin == indpiv) && (inicio != indpiv || fin != indpiv)){
            inicio = psinicio;
            fin = psfin;
        }
    }
    return indpiv;
}

void quickso (vector<int> &numbersToOrder,int inicio, int fin){
    if(inicio == fin){
        return;
    }
    int ordered = pivot(numbersToOrder, inicio, fin);
    quickso(numbersToOrder, inicio, ordered-1);
    quickso(numbersToOrder, ordered+1, fin);
}

int findkesim (vector<int> &listFind, int inicio,int fin, int k){
    if(inicio == fin){
        return listFind[inicio] ;
    }
    int ordered;
    ordered= pivot(listFind, inicio, fin);
    if (ordered == k){
        return listFind[ordered];
    }
    else{
        if (ordered<k)
            return findkesim(listFind, ordered+1, fin,k);
            
        else{
            return findkesim(listFind, inicio, ordered-1, k);
        }

    }
    
}

int main(int argc, const char * argv[]) {
    vector<int>numbers = {1,9,8,3,0,10,2};
    quickso(numbers, 0, numbers.size()-1);
    int kesimo = findkesim (numbers,0,numbers.size()-1,6);
    cout<<kesimo;
    return 0;
}
