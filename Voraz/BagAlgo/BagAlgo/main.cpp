//
//  main.cpp
//  BagAlgo
//
//  Created by William Alexis Barrios Concha on 25/10/23.
//

#include <iostream>
#include <vector>
using namespace std;

vector<float> Mochila(int m, vector<int>candidatosp, vector<int>beneficio,vector<float>solution){
    int p = m;
    vector<float>prop(candidatosp.size());
    for(int i = 0; i<prop.size();i++){
        float bene = beneficio[i];
        float pso = candidatosp[i];
        prop[i]= (bene/pso);
    }
    auto bestbeneficio = max_element(prop.begin(), prop.end());
    int ind = bestbeneficio - prop.begin();
    while(p != 0 &&  *bestbeneficio != 0){
        if(prop[ind] * candidatosp[ind] <= p){
            p = p - candidatosp[ind];
            prop[ind] = 0;
        }
        else{
            float cant = p/candidatosp[ind];
            p -= prop[ind] * cant;
            prop[ind] = 0;
        }
        bestbeneficio = max_element(prop.begin(), prop.end());
        ind = bestbeneficio - prop.begin();
    }
    
    return solution;
}


int main(int argc, const char * argv[]) {
    vector<int> candidatosp = {18,15,10};
    vector<int> beneficio = {25,24,15};
    int m = 20;
    vector<float> solution(candidatosp.size());
    
    solution = Mochila(m, candidatosp, beneficio, solution);
    
    return 0;
}
