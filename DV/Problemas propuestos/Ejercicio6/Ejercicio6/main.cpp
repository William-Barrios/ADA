//
//  main.cpp
//  Ejercicio6
//
//  Created by William Alexis Barrios Concha on 30/10/23.
//

#include <iostream>
#include <vector>
using namespace std;

int find(vector<vector<int>> tofin,int x, int tmn){
    
    int sol = 0;
    if(tofin[0].size() <=1  ){
        if(tofin.front().front() == x)
            return 1;
        return 0;
    }
    int mid = tmn/2;
    if(x > tofin[0][mid]){
        vector<int> first (tofin.front().begin()+mid,tofin.front().end());
        vector<vector<int>>_first;
        _first.push_back(first);
        sol = find(_first,x,first.size());
    }
    else if(x < tofin[0][mid]){
        vector<int> first (tofin.front().begin(),tofin.front().begin()+mid);
        vector<vector<int>>_first;
        _first.push_back(first);
        sol = find(_first,x,first.size());
    }
    else{
        sol = 1;
        return  sol;
    }
    if(tofin.size()> 1 && !sol){
        vector<vector<int>> first (tofin.begin()+1,tofin.end());
        find(first, x, tofin.size());
    }
    
    return sol;
}

int main(int argc, const char * argv[]) {
    vector<vector<int>> tof = {{1,3,5},{2,6,9},{4,10,13}};
    int res = find(tof,1,3);
    return 0;
}
