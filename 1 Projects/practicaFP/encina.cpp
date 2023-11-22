#include <iostream>
using namespace std;

int long_carretera = 10;
int char_linea_horizontal = 205;
int char_esquina_sup_izq = 201;
int char_esquina_sup_dcha = 187;
int char_esquina_inf_izq = 200;
int char_esquina_inf_dcha = 188;
int char_linea_vertical = 186;
int char_coche = 254;
int char_clavo = 193;
int char_sorpresa = 63;
int char_normal = 32;
int pos_clavo_1 = 2;
int pos_clavo_2 = 7;
int pos_sorpresa_1 = 5;
int pos_sorpresa_2 = 9;


void dibujaLinea(int posIni, int posFin, int ascii) {
	for (int i = posIni; i < posFin; i++) {
		cout << char(ascii);
	}
}

void dibujaLineaHorizontalSuperior() {
	cout << char(char_esquina_sup_izq);
	dibujaLinea(0, long_carretera, char_linea_horizontal);
	cout << char(char_esquina_sup_dcha) << endl;


}

void dibujaLineaHorizontalInferior() {
	cout << char(char_esquina_inf_izq);
	dibujaLinea(0, long_carretera, char_linea_horizontal);
	cout << char(char_esquina_inf_dcha) << endl;

}


void dibujaCarril(int posCoche) {
	cout << char(char_linea_vertical);
	cout << char(char_normal);
	cout << char(char_normal);
	cout << char(char_clavo);
	cout << char(char_normal);
	cout << char(char_normal);
	cout << char(char_sorpresa);
	cout << char(char_normal);
	cout << char(char_clavo);
	cout << char(char_normal);
	cout << char(char_sorpresa);
	cout << char(char_linea_vertical) << endl;

	cout << char(char_linea_vertical); // OTRA SOLUCION:
	//int cont = 0;
	bool exist = false;
	for (int i = 0; i < long_carretera; i++) {
		if (i == posCoche) {
			cout << char(char_coche);
			//cont++;
			exist = true;
		}
		else {
			cout << char(char_normal);
		}

	}
	//if (cont == 0) {cout << char(char_coche);}
	if (!exist) { cout << char(char_coche); }
	cout << char(char_linea_vertical) << endl;
}


void dibujaCarretera(int posCoche) {
	dibujaLineaHorizontalSuperior();
	dibujaCarril(posCoche);
	dibujaLineaHorizontalInferior();

}





// parte 2
bool haLlegado(int posCoche) {
	if (posCoche >= long_carretera) {
		return true;
	}
	else {
		return false;
	}

}


int pideNumPasos() {
	int pos;
	cout << "Introduce un numero de pasos para avanzar o retroceder: ";
	cin >> pos;

	return pos;
}

//parte 3
bool esSorpresa(int posCoche) {
	if (posCoche == pos_sorpresa_1 || posCoche == pos_sorpresa_2) {
		return true;
	}
	else {
		return false;
	}
}


bool esClavo(int posCoche) {
	if (posCoche == pos_clavo_1 || posCoche == pos_clavo_2) {
		return true;
	}
	else {
		return false;
	}
}

int buscaSiguientePosSorpresa(int posCoche) {
	if (posCoche == pos_sorpresa_1) {
		return pos_sorpresa_2;
	}
	else {
		return pos_sorpresa_1;
	}

}


//main
int main() {
	dibujaCarretera(0);
	int posCoche = 0;
	while (!haLlegado(posCoche)) {
		posCoche += pideNumPasos();

		if (esClavo(posCoche)) {
			int espera = 2;
			cout << "Has pinchado :(... Estaras " << espera << " turnos sin moverte." << endl;
			dibujaCarretera(posCoche);
			for (int i = 0; i < espera; i++) {
				cout << "Ha pasado un turno... :)" << endl;
				dibujaCarretera(posCoche);
			}
		}
		else {

			if (esSorpresa(posCoche)) {
				cout << "Has caido en una sorpresa! Pasas a la siguiente sorpresa :))" << endl;
				dibujaCarretera(posCoche);
				posCoche = buscaSiguientePosSorpresa(posCoche);
				dibujaCarretera(posCoche);
			}
			else {

				dibujaCarretera(posCoche);
			}
		}
	}
	cout << "FIN DE LA SIMULACION" << endl;

	return 0;
}