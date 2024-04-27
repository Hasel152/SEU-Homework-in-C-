#include<iostream>
#include<ctime>
#include<cstdlib>
#include"CPoly.h"

using namespace std;


int main()
{
	srand((int)time(0));
	CPoly p1((rand() % 10) - 5, (rand() % 10) - 5), p2 = p1;
	CPoly p3((rand() % 10) - 5, (rand() % 10) - 5, (rand() % 10) - 5);
	CPoly tp1, tp2, tp3;

	cout << "p1 = "; p1.Print();
	cout << "p2 = "; p2.Print();
	cout << "p3 = "; p3.Print();

	cout << endl;
	tp1 = p1.Add(p2);
	cout << "tp1 = p1+p2 = "; tp1.Print();
	cout << "p1 = "; p1.Print();
	cout << "p2 = "; p2.Print();

	cout << endl;
	tp2 = tp1.Sub(p3);
	cout << "tp2 = tp1-p3 = "; tp2.Print();
	cout << "tp1 = "; tp1.Print();
	cout << "p3 = "; p3.Print();

	cout << endl;
	tp3 = tp1.Mul(tp2);
	cout << "tp3 = tp1*tp2 = "; tp3.Print();
	cout << "tp1 = "; tp1.Print();
	cout << "tp2 = "; tp2.Print();

	return 0;
}
