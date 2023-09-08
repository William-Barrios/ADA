// DessingPatterns.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <vector> // without .h
#include <list>
#include <iostream>
using namespace std;
template <typename Container> 
void Write(Container& ds, ostream& os)
{
	auto iter = ds.begin();
	for (; iter != ds.end(); iter++)
		os << *iter << "\n";
}
int main(int argc, char* argv[])
{
	list<float> mylist;
	vector<float> myvector;
	for (int i = 0; i < 10; i++)
	{
		mylist.push_back(i);
		myvector.push_back(i + 50);
	}
	Write(mylist, cout);
	Write(myvector, cout);
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
