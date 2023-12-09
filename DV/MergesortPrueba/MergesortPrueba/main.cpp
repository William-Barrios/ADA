//
//  main.cpp
//  MergesortPrueba
//
//  Created by William Alexis Barrios Concha on 29/11/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Merge (vector<int> &numbers, int inicio, int fin, int mid){
    vector<int> izq;
    for(int i = inicio; i<inicio + mid+1;i++)
        izq.push_back(numbers[i]);
    vector<int> drch;
    for(int i = inicio + mid+1; i<=fin;i++)
        drch.push_back(numbers[i]);
    int izqi = 0;
    int drchi = 0;
    int i = inicio;
    for(; i<=fin && izqi<izq.size()&& drchi<drch.size() ;i++){
        if(izq[izqi]<drch[drchi]){
            numbers[i] =izq[izqi];
            izqi++;
        }
        else{
            numbers[i] = drch[drchi];
            drchi++;
        }
    }
    while(drchi<drch.size()){
        numbers[i] = drch[drchi];
        i++;
        drchi++;
    }
    while(izqi<izq.size()){
        numbers[i] = izq[izqi];
        i++;
        izqi++;
    }
    
}

void MergeSort (vector<int> &numbersToOrder, int inicio, int fin){
    if(inicio >=  fin )
        return;
    int mid = (fin-inicio)/2;
    MergeSort(numbersToOrder, inicio, inicio + mid);
    MergeSort(numbersToOrder, inicio+mid+1, fin);
    Merge(numbersToOrder, inicio , fin , mid);
    
}

int main(int argc, const char * argv[]) {
    vector<int>numeros = {9,8,7,6,5,4};
    MergeSort(numeros, 0, 5);
    
    return 0;
    
}
