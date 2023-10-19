/////////////////////////////////////////
// codigo criado por kato @ 2023-10-19 //
//     col.: christian & tavares	   //
//		  github.com/kato8088          //
/////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <Windows.h>
// em caso de unix usar #include <unistd.h>

using namespace std;

int diaMes;

void resposta() {
	switch (diaMes)
	{
	case 1:
		cout << "1 = 2^0\n";
		break;
	case 2:
		cout << "2 = 2^1\n";
		break;
	case 3:
		cout << "3 = 2^1 + 2^0\n";
		break;
	case 4:
		cout << "4 = 2^2\n";
		break;
	case 5:
		cout << "5 = 2^2 + 2^0\n";
		break;
	case 6:
		cout << "6 = 2^2 + 2^1\n";
		break;
	case 7:
		cout << "7 = 2^2 + 2^1 + 2^0\n";
		break;
	case 8:
		cout << "8 = 2^3\n";
		break;
	case 9:
		cout << "9 = 2^3 + 2^0\n";
		break;
	case 10:
		cout << "10 = 2^3 + 2^1\n";
		break;
	case 11:
		cout << "11 = 2^3 + 2^1 + 2^0\n";
		break;
	case 12:
		cout << "12 = 2^3 + 2^2\n";
		break;
	case 13:
		cout << "13 = 2^3 + 2^2 + 2^0\n";
		break;
	case 14:
		cout << "14 = 2^3 + 2^2 + 2^1\n";
		break;
	case 15:
		cout << "15 = 2^3 + 2^2 + 2^1 + 2^0\n";
		break;
	case 16:
		cout << "16 = 2^4\n";
		break;
	case 17:
		cout << "17 = 2^4 + 2^0\n";
		break;
	case 18:
		cout << "18 = 2^4 + 2^1\n";
		break;
	case 19:
		cout << "19 = 2^4 + 2^1 + 2^0\n";
		break;
	case 20:
		cout << "20 = 2^4 + 2^2\n";
		break;
	case 21:
		cout << "21 = 2^4 + 2^2 + 2^0\n";
		break;
	case 22:
		cout << "22 = 2^4 + 2^2 + 2^1\n";
		break;
	case 23:
		cout << "23 = 2^4 + 2^2 + 2^1 + 2^0\n";
		break;
	case 24:
		cout << "24 = 2^4 + 2^3\n";
		break;
	case 25:
		cout << "25 = 2^4 + 2^3 + 2^0\n";
		break;
	case 26:
		cout << "26 = 2^4 + 2^3 + 2^1\n";
		break;
	case 27:
		cout << "27 = 2^4 + 2^3 + 2^1 + 2^0\n";
		break;
	case 28:
		cout << "28 = 2^4 + 2^3 + 2^2\n";
		break;
	case 29:
		cout << "29 = 2^4 + 2^3 + 2^2 + 2^0\n";
		break;
	case 30:
		cout << "30 = 2^4 + 2^3 + 2^2 + 2^1\n";
		break;
	case 31:
		cout << "31 = 2^4 + 2^3 + 2^2 + 2^1 + 2^0\n";
		break;
	default:
		break;
	}
}

int main() {
	bool repetirBool = true;
	while (repetirBool == true) {
		system("cls");
		// system("clear");
		cout << "Insira o dia escolhido: ";
		cin >> diaMes;
		while (diaMes < 1 || diaMes > 31) {
			cin.clear();
			diaMes = 0;
			cout << "input invalido! escolha um dia entre 1 e 31! ";
			cin >> diaMes;
		}
		resposta();
		Sleep(4500);

		cout << "Gostaria de inserir outro dia? (s/n): ";
		char repetirChar = 'a';
		cin >> repetirChar;
		switch (repetirChar)
		{
		case 's':
		case 'S':
		case 'y':
		case 'Y':
			repetirBool = true;
			break;
		case 'n':
		case 'N':
			repetirBool = false;
			break;
		default:
			repetirBool = false;
			break;
		}
	}
	return 1;
}