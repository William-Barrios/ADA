 //
//  main.cpp
//  Cambio
//
//  Created by William Alexis Barrios Concha on 25/10/23.
//

#include <iostream>
#include <vector>

using namespace std;


vector<float> DevolverCambio (float todev, vector<float> Candidatos, vector<float> Solucion ){
    int j = 0;
    float rest = todev;
    for(int i = 0; i<Candidatos.size();i++)
        Solucion[i]=0;
    while(j<Candidatos.size()){
        if(Candidatos[j]< rest){
            int cant = rest/Candidatos[j];
            Solucion[j] = cant;
            rest = rest - Candidatos[j]*cant;

        }
        if(rest<0.0001)
            break;
        j++;
    }
    if (rest > 0.001)
        cout<<"No hay solucion"<<endl;
    return Solucion;
    
}

int main(int argc, const char * argv[]) {
    
    vector<float> Candidatos = {2.0,1.0,0.5,0.2,0.1,0.05,0.02,0.01};
    float Devolver = 3.89;
    vector<float> Solucion(Candidatos.size());
    

    
    Solucion = DevolverCambio(Devolver, Candidatos, Solucion);
    for(int i = 0; i<Candidatos.size();i++){
        cout<< Candidatos[i]<< " ";
    }
    cout<<endl;
    for(int i = 0; i<Solucion.size();i++){
        cout<< Solucion[i]<< "  ";
    }
        
    
    
    return 0;
}
