//
//  main.cpp
//  Ejercicio6_Voraz
//
//  Created by William Alexis Barrios Concha on 1/11/23.
//

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int findWork (vector<int> slc, vector<int> eliminated){
    for(int i = 0; i <eliminated.size(); i++)
        slc[eliminated[i]] = 1000000;
    auto minP = min_element(slc.begin(), slc.end());
    int minPIndex = (int)distance(slc.begin(), minP);
    return minPIndex;
}

vector<int> asignacionTareas (vector<vector<int>> toAsignar){
    vector<int> sol;
    int tmn = (int) toAsignar.size();
    
    while (tmn != 0){
        int ad = findWork(toAsignar[0],sol);
        sol.push_back(ad);
        toAsignar.erase(toAsignar.begin());
        
        tmn = (int) toAsignar.size();
    }
    return sol;
}

int main(int argc, const char * argv[]) {
    vector<vector<int>> employeeWorkPrice; //cada fila es un empleado y cada columna un trabajo, los valores vector[fila][columna] es el coste
    for(int i = 0; i<5;i++){
        vector<int> toPush;
        for(int j = 0;j<5;j++){
            toPush.push_back(rand()%20);
        }
        employeeWorkPrice.push_back(toPush);
    }
    vector<int>sol = asignacionTareas(employeeWorkPrice);
    
    
    
    return 0;
}
