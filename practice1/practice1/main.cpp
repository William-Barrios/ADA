#include <iostream>

using namespace std;

int *gpVect = NULL;  // Dynamic buffer to save the elements int
int gnCount = 0;
int gnMax   = 0;

void Resize(){
  const int delta = 10;
  int *pTemp, i;
  pTemp = new int[gnMax + delta];
  for(i=0;i<gnMax;i++)
    pTemp[i] = gpVect[i];
  delete [ ] gpVect;
  gpVect = pTemp;
  gnMax  += delta;
}

void Insert(int elem){
  if( gnCount == gnMax )
      Resize();
  gpVect[gnCount++] = elem;
}


int main(){
    int x;
    cout<<"ingresar tamano inicial de array"<<endl;
    cin>>gnMax;
    gpVect = new int[gnMax];
    bool run = true;
    while(run){
        cout<<"Ingrese entero para insertar"<<endl;
        cin>>x;
        Insert(x);
        cout<<"Ingrese 1 o 0 para continuar o finalizar"<<endl;
        cin>>run;
        
    }
    return 0;
}
  
