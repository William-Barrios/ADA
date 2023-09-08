// OOP.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class CVector
{
private:
    int* m_pVect, 
        m_nCount, 
        m_nMax, 
        m_nDelta; 
    void Init(int delta); 
    void Resize(); 
public:
    CVector(int delta = 10) {
        Init(delta);
    };
    void Insert(int elem); 
    void Imprimir() {
        for (int i = 0; i < m_nMax; i++) {
            cout << m_pVect[i]<<" ";
        }
        cout << endl;
    }
};

void CVector::Init(int delta) {
    m_nCount = 0;
    m_nMax = delta;
    m_nDelta= delta;
    m_pVect = new int[m_nMax];
}

void CVector::Insert(int elem) {
    if (this->m_nCount == this->m_nMax) 
        Resize(); 
    this->m_pVect[this->m_nCount++] = elem;
}

void CVector::Resize() {
    this->m_pVect = (int*) realloc(this->m_pVect, sizeof(int) *
        (this->m_nMax + this->m_nDelta));
    this->m_nMax += this->m_nDelta;
}



int main()
{
    CVector Vect;

    for (int i = 0; i < 20; i++) {
        Vect.Insert(i);
    }
    Vect.Imprimir();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
