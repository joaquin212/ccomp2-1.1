
#include "iostream"

using namespace std;
int main()
{//ejercio 1
	int x;
	cin >> x;
	if (x >= 18){
		cout << "Es mayor de edad" << endl;
	}
	else{
		cout << "Es menor de edad" << endl;
	}



	//ejercio 2
	int y;
	cout << "Ingrese un numero : " << endl;
	cin >> y;
	for (int c = 0; c < y; c = c + 1){
		cout << c << ", ";
	}



	int a, b, c, promedio = 0;
	cout << "el valor de a : ";
	cin >> a;
	cout << "el valor de b : ";
	cin >> b;
	cout << "el valor de c : ";
	cin >> c;
	if (a > b && a > c){
		cout << "a es el mayor" << endl;
	}else{
		cout << "a es el menor" << endl;
	}
	if (b > a && b > c){
		cout << "b es el mayor" << endl;
	}else{
		cout << "b es el menor" << endl;
	}
	if (c > a && c > b){
		cout << "c es el mayor" << endl;
	}else{
		cout << "c es el menor" << endl;
	}
	if (c > a && c > b){
		cout << "c es el mayor" << endl;
	}else{
		cout << "c es el menor" << endl;
	}

	promedio = (promedio + a + b + c) / 3;
	cout << "promedio : " << promedio << endl;


	//ejercicio4
	int f, e;
	cout << "ingerese un numero para f : ";
	cin >> f;
	cout << "ingerese un numero para e : ";
	cin >> e;
	if (f % 2 == 0){
		cout << " f es numero multiplo de 2 " << endl;
	}
	if (e % 2 == 0){
		cout << " e es numero multiplo de 2 " << endl;
	}
	if (f%e == 0){
		cout << f << " es multiplo de " << e << endl;
	}


	// ejercio 5
	int h = 0, i, n;
	cout << "Ingrese numero : ";
	cin >> n;
	for (i = 1; i < (n + 1); i++){
		if (n%i == 0){
			h++;
		}
	}
	if (h != 2){
		cout << "No es Primo";
	}
	else{
		cout << "Si es Primo";
	}

	// ejercio 6
	int z, w = 2;
	cout << "Ingrese el limite: " << endl;
	cin >> z;
	while (w <= z){
		if (w == 2 || w == 3 || w == 5 || w == 7){
			cout << w << ",";
		}
		if (w % 2 != 0 && w % 3 != 0 && w % 5 != 0 && w % 7 != 0){
			cout << w << ",";
		}
		w = w + 1;
	}
	//ejercicio 7
}
