//
//  main.cpp
//  BackTexample
//
//  Created by William Alexis Barrios Concha on 29/11/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findsum (int start, vector<int>numbers, int target, vector<int> &combinations,vector<vector<int>> &sol){
    
    if(target == 0){
        sol.push_back(combinations);
        return;
    }
    
    if(target < 0 || start == numbers.size()-1){
        return;
    }
    
    for(int i = start; i<numbers.size(); i++){
        combinations.push_back(numbers[i]);
        findsum(start+1, numbers, target - numbers[i], combinations, sol);
        combinations.pop_back();
    }
    
}


vector<vector <int>> findsums (vector<int> numbers, int target){
    sort(numbers.begin(), numbers.end());
    vector<vector<int>>sol;
    vector<int>combinations;
    findsum(0, numbers, target, combinations, sol);
    
    
    return sol;;
}


int main(int argc, const char * argv[]) {
    vector<int> numeros = {1,5,3,2};
    int objetivo = 6;
    vector<vector <int>> sol = findsums(numeros, objetivo);
    int max = 0;
    int indice_max = 0;
    for(int i = 0; i < sol.size();i++){
        if(sol[i].size()>max)
            indice_max = i;
    }
    cout<<max<<endl;
    auto maxelem = max_element(numeros.begin(), numeros.end());
    cout<<*maxelem<<' '<< maxelem - numeros.begin()<<endl;
    
        
    
    return 0;
}
