#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

void binary(int);
void oxtadiko(int);
void dekaexadiko(int);
void menu();
int menu1();
int main()
{
	system("chcp 1253");
	int x,a;
	char c;
	cout << "Ποσους αριθμους θες να εισαγεις?" << endl;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cout << "Εισαγωγή " << i+1 << " αριθμού : ";
		cin >> x;
		cout << "Θέλεις να αρχίσουμε? \'y(es)/n(o)'" << endl;
		cin >> c;
		while (c == 'y')
		{
			int ep;
			ep = menu1();
			switch (ep)
			{
			case 1:
				binary(x);
				break;
			case 2:
				oxtadiko(x);
				break;
			case 3:
				dekaexadiko(x);
				break;
			case 4:
				break;
			}
			if (ep != 4)
			{
				cout << "Θέλεις να δεις μια άλλη κατηγορία?" << endl;
				cin >> c;
			}
			else
			{
				c = 'n';
			}
		}
	}
	system("pause");
	return 0;
}

void binary(int n)
{
	long binary = 0, rem,temp = 1;
	while (n> 0)
	{
		rem = n % 2;
		n /= 2;
		binary = binary + rem * temp;
		temp *= 10;
	}
	cout << "Ο αριθμός στο δυαδικό είναι: " << binary << endl;
}

void oxtadiko(int n)
{
	cout << "Ο αριθμός στο οκταδικό είναι: " << oct <<n<< endl;
}

void dekaexadiko(int n)
{
	cout << "Ο αριθμός στο δεκαεξαδικό είναι: " << hex << n << endl;;
}


void menu()
{
	cout << "1.Μετατροπή σε δυαδικό" << endl;
	cout << "2.Μετατροπή σε οκταδικό" << endl;
	cout << "3.Μετατροπή σε δεκαεξαδικό" << endl;
	cout << "4.Έξοδος" << endl;
}

int menu1()
{
	int ep;
	do {
		system("cls");
		menu();
		cout << "Εισαγωγή Επιλογής: " << endl;
		cin >> ep;
	} while (ep <= 0 || ep >= 5);
	return ep;
}
