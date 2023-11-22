#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h> // Necesario para _getch()
#include <stdlib.h> // Necesario para system("pause")

using namespace std;

//CONSTANTES:
const int LONG_CARRETERA = 10;
const int MAX_PASOS = 3;
const int TIEMPO_PARADO = 2;
const bool DEBUG = true;
	//constantes ASCII: (revisar tabla ASCII)
const int CHAR_LINEA_HORIZONTAL = 205;					// ˭
const int CHAR_ESQUINA_SUPERIOR_IZQUIERDA = 201;		// ╔═
const int CHAR_ESQUINA_SUPERIOR_DERECHA = 187;			// ═╗
const int CHAR_ESQUINA_INFERIOR_IZQUIERDA = 200;		// ╚═
const int CHAR_ESQUINA_INFERIOR_DERECHA = 188;			// ═╝
const int CHAR_LINEA_VERTICAL = 186;					// ║
const int CHAR_COCHE = 254;								// ■
const int CHAR_CLAVO = 193;								// ┴
const int CHAR_SORPRESA = 63;							// ?
const int CHAR_NORMAL = 32;								// ‘ ‘

//ESTRUCTURAS DE DATOS:
typedef enum tTipoPosicion{NORMAL, CLAVO, SORPRESA};
typedef tTipoPosicion tCarretera[LONG_CARRETERA];

//DECLARACIÓN DE FUNCIONES:
bool cargaCarretera(tCarretera& carretera); //✔
tTipoPosicion stringToEnum(string s); //✔
void dibujaLineaHorizontalSuperior(); //✔
void dibujaLineaHorizontalInferior(); //✔
void dibujaCarril(const tCarretera carretera, int posCoche); //✔
void dibujaCarretera(const tCarretera carretera, int posCoche); //✔
bool esSorpresa(const tCarretera carretera, int posCoche); //✔
bool esClavo(const tCarretera carretera, int posCoche); //✔
int buscaPosicionSorpresa(const tCarretera carretera, int posIni, int incr); //✔
int avanza(int posCoche); //✔
bool haLlegado(int posCoche); //✔
bool calculaPosicion(const tCarretera carretera, int& posCoche, int& tiempoParado); //✔
void avanzaCarril(const tCarretera carretera, int& posCoche, int& tiempoParado); //✔
void simulaCarrera(const tCarretera carretera, int posCoche, int tiempoParado); //✔
//auxiliar:
char enteroAChar(int numero);
//opcionales:
void iniciaCarril(tCarretera carretera);

int main() {
	char opc;
	int posCoche = 0;
	int tiempoParado = 0;
	tCarretera carretera;
	string str;

	srand(time(NULL)); //para la generación de numeros aleatorios
	//coche en posicion de inicio e inicializa su tiemoi parado a 0

	do {
		bool cargado = cargaCarretera(carretera);
		if (cargado) {
			dibujaCarretera(carretera,posCoche);
			//cout << "Pulsa una tecla para continuar " << endl;
			//_getch();

			system("pause");

			simulaCarrera(carretera, posCoche, tiempoParado);
		}
		else
			std::cout << "ERROR en abrir el archivo de texto";

		std::cout << "DESEA REALIZAR OTRA SIMULACION? (S/N) ";
		std::cin >> opc;

	} while (opc  != 'N');

	return 0;
}

//IMPLEMENTACIÓN DE FUNCIONES:
bool cargaCarretera(tCarretera& carretera) {

	string nombre;
	ifstream archivo;
	bool resultado = false;
	string tipo;
	int numElems;
	int pos;

	cout << "Dame el nombre del archivo: ";
	cin >> nombre;

	//OPCIONAL:
	iniciaCarril(carretera);
	//

	archivo.open(nombre);
	if (archivo.is_open()) {
		resultado = true;

		archivo >> tipo; //LEO el tipo
		while (tipo != "XX") {
			archivo >> numElems;

			for (int i = 0; i < numElems; i++) {
				archivo >> pos;
				carretera[pos] = stringToEnum(tipo);
			}

			archivo >> tipo;
		}

		// CAMBIO POR OPCIONAL:  
		/*
		//el resto de posiciones se rellenan con NORMAL. Recorro todo el array:
		for (int i = 0; i < LONG_CARRETERA; i++) {
			if (carretera[i] != CLAVO && carretera[i] != SORPRESA) {
				carretera[i] = NORMAL;
			}

		}
		*/
	}
	else {
		resultado = false;
	}
	return resultado;

}

tTipoPosicion stringToEnum(string s) {
	tTipoPosicion pos;

	if (s == "NORMAL")
		pos = NORMAL;
	else if (s == "CLAVO")
		pos = CLAVO;
	else if (s == "SORPRESA")
		pos = SORPRESA;

	return pos;
}

void dibujaLineaHorizontalSuperior() {
	cout << static_cast<char>(CHAR_ESQUINA_SUPERIOR_IZQUIERDA);

	for (int i = 0; i < LONG_CARRETERA; i++) {
		cout << static_cast<char>(CHAR_LINEA_HORIZONTAL);
	}

	cout << static_cast<char>(CHAR_ESQUINA_SUPERIOR_DERECHA) << endl;

}

void dibujaLineaHorizontalInferior() {
	cout << static_cast<char>(CHAR_ESQUINA_INFERIOR_IZQUIERDA);

	for (int i = 0; i < LONG_CARRETERA; i++) {
		cout << static_cast<char>(CHAR_LINEA_HORIZONTAL);
	}

	cout << static_cast<char>(CHAR_ESQUINA_INFERIOR_DERECHA) << endl;

}

void dibujaCarril(const tCarretera carretera, int posCoche) {
	//tendré que recorrer la carretera para saber qué dibujar en cada posición
	//dibujo dos líneas:
	// LINEA 0 OPCIONAL
	cout << static_cast<char>(CHAR_LINEA_VERTICAL);
	for (int i = 0; i < LONG_CARRETERA; i++) {
		cout << i;
	}
	cout << static_cast<char>(CHAR_LINEA_VERTICAL) << endl;


	//primera línea:----------------------------------------------
	cout << static_cast<char>(CHAR_LINEA_VERTICAL);
	cout << " "; //PRIMERA posición siempre vacía
	//empiezo en posicion 1:
	for (int i = 1; i < LONG_CARRETERA; i++) {
		switch (carretera[i]) {
		case NORMAL:
			cout << static_cast<char>(CHAR_NORMAL);
			break;
		case CLAVO:
			cout << static_cast<char>(CHAR_CLAVO);
			break;
		case SORPRESA:
			cout << static_cast<char>(CHAR_SORPRESA);
			break;
		}

	}
	cout << static_cast<char>(CHAR_LINEA_VERTICAL) << endl;

	//segunda línea:-----------------------------------------------
	cout << static_cast<char>(CHAR_LINEA_VERTICAL);
	for (int i = 0; i < LONG_CARRETERA; i++) {
		if (posCoche == i) {
			cout << static_cast<char>(CHAR_COCHE);
		}
		else {
			cout << " ";
		}
	}
	if (posCoche != LONG_CARRETERA)
		cout << static_cast<char>(CHAR_LINEA_VERTICAL) << endl;
	else
		cout << static_cast<char>(CHAR_COCHE) <<  endl;

}

void dibujaCarretera(const tCarretera carretera, int posCoche) {

	dibujaLineaHorizontalSuperior();
	dibujaCarril(carretera, posCoche);
	dibujaLineaHorizontalInferior();

}

bool esSorpresa(const tCarretera carretera, int posCoche) {

	if (carretera[posCoche] == SORPRESA)
		return true;
	else
		return false;

}

bool esClavo(const tCarretera carretera, int posCoche) {

	if (carretera[posCoche] == CLAVO)
		return true;
	else
		return false;

}

int buscaPosicionSorpresa(const tCarretera carretera, int posIni, int incr) {
	int posicion = 0;
	bool encontrado = false;
	//partiendo de posIni localizo la siguiente o anterior posicion sorpresa:

	if (incr == 1) {
		//voy buscando hacia delante:
		int i = posIni + 1;
		while (i < LONG_CARRETERA && !encontrado) {

			if (carretera[i] == SORPRESA) {
				posicion = i;
				encontrado = true;
			}
			else
				i++;

		}

	}
	else if (incr == -1) {
		int j = posIni - 1;
		while (j >=0 && !encontrado) {

			if (carretera[j] == SORPRESA) {
				posicion = j;
				encontrado = true;
			}
			else
				j--;

		}
		
	}

	return posicion;
}
	//otra versión:
int buscaSiguientePosSorpresa(const tCarretera carretera, int posCoche) {
	//genera numero aleatorio entre 0 y 1:
	int limiteInferior = 0;
	int limiteSuperior = 1;
	int index = 0;
	bool encontrado = false;

	int num = limiteInferior + (rand() % (limiteSuperior + 1 - limiteInferior));

	if (num == 0) {
		int i = posCoche + 1;
		while(i < LONG_CARRETERA && !encontrado ) {
			if (carretera[i] == SORPRESA)
				index = i; encontrado = true;

		}
	}
	else if (num == 1) {
		int j = posCoche - 1;
		while (j >= 0 && !encontrado) {
			if (carretera[j] == SORPRESA)
				index = j; encontrado = true;
		}



	}
	return index;
}

int avanza(int posCoche) {

	int limiteInferior = 1;
	int limiteSuperior = MAX_PASOS;
	int avance, nuevaPosCoche;

	if (!DEBUG) { //modo NORMAL:
		//genero número aleatorio entre 1 y MAX_PASOS y lo sumo a posCoche:
		avance = limiteInferior + (rand() % (limiteSuperior + 1 - limiteInferior));
		cout << "EL COCHE AVANZA " << avance << " PASOS." << endl;
		nuevaPosCoche = posCoche + avance;
		
	}
	else { //modo DEBUG:
		cout << "Introduce el numero de pasos a avanzar: ";
		cin >> avance;
		int aux = posCoche + avance;

		if (aux < 0)
			nuevaPosCoche = 0;
		else
			nuevaPosCoche = posCoche + avance;
		
	}

	if (nuevaPosCoche >= LONG_CARRETERA)
		nuevaPosCoche = LONG_CARRETERA;

	return nuevaPosCoche;
}

bool haLlegado(int posCoche) {

	return (posCoche >= LONG_CARRETERA);

}

bool calculaPosicion(const tCarretera carretera, int& posCoche, int& tiempoParado) {

	int random;
	bool resultado = false;

	if (esClavo(carretera, posCoche) ){
		tiempoParado = TIEMPO_PARADO;
		resultado = false;
	}

	if (esSorpresa(carretera, posCoche)) {
		//decide de forma aleatorioa si hay que avanzar o retroceder:
		//calculo número aleatorio entre 0 y 1:
		resultado = true;
		cout << "POSICION SORPRESA." << endl;
		// 0 -> retroceder
		// 1 -> avanzar
		random = 0 + rand() % (1 + 1 - 0);

		if (random == 0) {
			//llamada con -1:
			posCoche = buscaPosicionSorpresa(carretera, posCoche, -1);
			cout << "RETROCEDES HASTA LA ANTERIOR SORPRESA EN LA POSICION " << posCoche << endl;

		}
		else if (random == 1) {
			//llamada con 1:
			posCoche = buscaPosicionSorpresa(carretera, posCoche, 1); 
			cout << "AVANZAS HASTA LA SIGUIENTE SORPRESA EN LA POSICION " << posCoche << endl;
		}

		
	}

	return resultado;

}

void avanzaCarril(const tCarretera carretera, int& posCoche, int& tiempoParado) {

	int nuevaPosicion;
	
	if (posCoche < LONG_CARRETERA && tiempoParado == 0) {
		nuevaPosicion = avanza(posCoche);

		if (nuevaPosicion >= LONG_CARRETERA) { //se ha llegado a meta
			posCoche = LONG_CARRETERA;
			dibujaCarretera(carretera, posCoche);
		}
		else { //aun no se ha llegado a meta
			posCoche = nuevaPosicion;
			dibujaCarretera(carretera, posCoche);

			//cout << "PULSA UNA TECLA PARA CONTINUAR." << endl;
			//_getch();
			system("pause");
			cout << endl;

			if (calculaPosicion(carretera, posCoche, tiempoParado)) { //estoy en posicion sorpresa
				dibujaCarretera(carretera, posCoche);

				//cout << "PULSA UNA TECLA PARA CONTINUAR." << endl;
				//_getch();
				system("pause");
				cout << endl;

			} 
			else { //no estoy en posicion sorpresa
				if (tiempoParado != 0) { //estoy en posicion clavo
					cout << "EL COCHE HA PINCHADO. ESTARA INMOVILIZADO " << TIEMPO_PARADO << " PASOS" << endl;
					tiempoParado++;
				}
			}

		}

	}
	else{ 
		if (tiempoParado != 0) {
			tiempoParado--;
			if(tiempoParado > 0)
				cout << "EL COCHE ESTA PINCHADO. LE QUEDAN " << tiempoParado << " PASOS PARA MOVERSE" << endl;

		}
		
	}

}

void simulaCarrera(const tCarretera carretera, int posCoche, int tiempoParado) {
	while (!haLlegado(posCoche)) {
		avanzaCarril(carretera, posCoche, tiempoParado);

	}
	cout << "SE HA COMPLETADO LA CARRERA" << endl << endl;

}

char enteroAChar(const int numero) {
	char resultado;

	resultado = numero + 0x30;

	return resultado;
}


//opcionales:
void iniciaCarril(tCarretera carretera) {
	for (int i = 0; i < LONG_CARRETERA; i++) {
		carretera[i] = NORMAL;
	}
}
