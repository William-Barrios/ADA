// AbstractDataTypes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


template <typename Type> 
class CVector
{
private:
    Type* m_pVect; // Pointer to the buffer
    int m_nCount, // Control how many elements are actually used
        m_nMax, // Control the number of allocated elements
        m_nDelta; // To control the growing
    void Init(int delta); // Init our private variables, etc
    void Resize(); // Resize the vector when occurs an overflow
public:
    CVector(int delta = 10); // Constructor
    void Insert(Type elem); // Insert a new element
    void Imprimir() {
        for (int i = 0; i < m_nMax; i++) {
            cout << m_pVect[i] << " ";
        }
        cout << endl;
    }
};

template <typename Type>
void CVector<Type>::Init(int delta) {
    m_nCount = 0;
    m_nMax = delta;
    m_nDelta = delta;
    m_pVect = new int[m_nMax];
}

template <typename Type>
void CVector<Type>::Resize() {
    this->m_pVect = (Type*)realloc(this->m_pVect, sizeof(Type) *
        (this->m_nMax + this->m_nDelta));
    this->m_nMax += this->m_nDelta;
}

template <typename Type> 
CVector<Type>::CVector(int delta)
{
    Init(delta);
}

 template <typename Type> 
 void CVector<Type>::Insert (Type elem)
{
    if (m_nCount == m_nMax) 
        Resize(); 
    m_pVect[m_nCount++] = elem; 
}



int main()
{
    CVector<int> Vectitor;
    for (int i = 0; i < 20; i++) {
        Vectitor.Insert(i);
    }
    Vectitor.Imprimir();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
