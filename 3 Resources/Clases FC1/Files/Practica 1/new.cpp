#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;
const int MAX_LIBROS = 5;

using namespace std;
struct tlibros {
	int ISBN;
	string titulo;
	string autor;
	int ejemplares;
	int prestados;

};
typedef tlibros libros[MAX_LIBROS];

int main(){
	libros libros;
	int line;
	
	ifstream archivo("biblioteca.txt");
	if (archivo.is_open())  // same as: if (myfile.good())
	{
		getline(archivo, line);
	}
	else cout << "fooey\n";

	return 0;
}