#include <iostream>

using namespace std;

struct Vector
{
    int* m_pVect ,
        m_nCount , 
        m_nMax , 
        m_nDelta; 

    Vector(int _m_nMax, int _m_nDelta, int _m_nCount = 0) {
        m_nCount = _m_nCount;
        m_nMax = _m_nMax;
        m_nDelta = _m_nDelta;
        m_pVect = new int[_m_nMax];
    }

};

void Resize(Vector* pThis)
{
    pThis->m_pVect = (int*)realloc(pThis->m_pVect, sizeof(int) *
        (pThis->m_nMax + pThis->m_nDelta));

    pThis->m_nMax += pThis->m_nDelta;
}


void Insert(Vector* pThis, int elem)
{
    if (pThis->m_nCount == pThis->m_nMax) 
        Resize(pThis); 
    pThis->m_pVect[pThis->m_nCount++] = elem;
}


int main()
{
    Vector V(10, 5);
    for (int i = 0; i < 20; i++) {
        Insert(&V, i);
    }
}
