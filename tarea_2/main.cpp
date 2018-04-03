
#include "iostream"

using namespace std;
int main()
{  	//ejercicio 8
	int numero, a, b, c, d, e;
	cout << "ingrese el numero : " << endl;
	cin >> numero;
	a = numero % 10;
	b = numero % 100 / 10;
	c = numero % 1000 / 100;

	if (a == c){
		cout << numero << " es palindrome " << endl;
	}
	else{
		cout << numero << " no es palindrome" << endl;
	}

	//ejercicio 9
	int year,p,q,r;
	cin >> year;
	p = year % 4;
	q = year % 100;
	r = 400;
	if (!p && (q || !r)){
		cout << year << " es bisiesto";
	}
	else{

		cout << year << " no es bisiesto" << endl;
	}

	//ejercicio 10
	int numero1 = 1;
	int anterior = 0;
	int aux;
	for (int i = 0; i < 20; i++){
		cout << numero1 << endl;
		aux = numero1;
		numero1 += anterior;
		anterior = aux;



	}

	system("pause");
}
