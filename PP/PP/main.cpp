//
//  main.cpp
//  PP
//
//  Created by William Alexis Barrios Concha on 25/08/23.
//

#include <iostream>
#include <stdlib.h>
using namespace std;
#define ll long long

ll rs(ll x, ll y){
    if(y == 0){
        return 0;
    }
    bool able = false;
    ll n;
    n = x/y;
    if(x%y!= 0 && x>y){
        ll cont = 0;
        bool run = true;
        ll fin = x%y;
        ll *rep = new ll[n+1];
        for (ll i = 0; i<n;i++){
            rep[i] = y;
        }
        rep[n] = fin;
        while (run){
            for(ll i=0;i<n;i++){
                if(rep[n]<rep[0] && rep[n]+1!=y){
                        rep[n]++;
                        rep[i]--;
                        cont ++;
                    able = true;
                    
                }
                else{
                   
                    run = false;
                    break;
                }
            }
        }
        
        y=rep[n];
    }
    if(y>x){
        return x;
    }
    return y;
}

int main() {
    ll x, y;
    cin>>x>>y;
    cout<<rs(x,y)<<endl;
    return 0;
}
