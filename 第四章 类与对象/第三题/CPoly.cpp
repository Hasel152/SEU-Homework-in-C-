#include"CPoly.h"
#include<iostream>
using namespace std;

CPoly::CPoly(){
	coef[1] = 0;
	coef[2] = 0;
	degree = 1;
}

CPoly::CPoly(double first, double second, double third) {

	//coef[10] = 0;
	//coef[9] = 0;
	//coef[8] = 0;
	//coef[7] = 0;
	//coef[6] = 0;
	//coef[5] = 0;
	//coef[4] = 0;
	//coef[3] = 0;
	coef[2] = first;
	coef[1] = second;
	coef[0] = third;
	degree = 2;
}


CPoly::CPoly(double first, double second) {
	//coef[10] = 0;
	//coef[9] = 0;
	//coef[8] = 0;
	//coef[7] = 0;
	//coef[6] = 0;
	//coef[5] = 0;
	//coef[4] = 0;
	//coef[3] = 0;
	//coef[2] = 0;
	coef[1] = first;
	coef[0] = second;
	degree = 1;
}

CPoly::CPoly(CPoly& c) {
	degree = c.degree;
	for (int i = degree; i >= 0; i--) {
		coef[i] = c.coef[i];
	}
}

CPoly operator+(CPoly& c, CPoly& d) {
	CPoly temp;
	d.degree > c.degree ? temp.degree = d.degree : temp.degree = c.degree;
	for (int i = temp.degree; i >= 0; i--) {
		temp.coef[i] = d.coef[i] + c.coef[i];
	}
	return temp;
}

CPoly operator-(CPoly& c, CPoly& d) {
	CPoly temp;
	d.degree > c.degree ? temp.degree = d.degree : temp.degree = c.degree;
	for (int i = temp.degree; i >= 0; i--) {
		temp.coef[i] = c.coef[i] - d.coef[i];
	}
	return temp;
}

CPoly operator*(CPoly& c, CPoly& d) {
	CPoly temp;
	temp.degree = d.degree + c.degree;
	for (int i = temp.degree; i >= 0; i--) {
		temp.coef[i] = 0;
		for (int j = d.degree; j >= 0; j--) {
			for (int k = c.degree; k >= 0; k--) {
				if (i == j + k) {
					temp.coef[i] += d.coef[j] * c.coef[k];
				}
			}
		}
	}
	return temp;
}

CPoly operator+=(CPoly& c, CPoly& d){
	CPoly temp;
	d.degree > c.degree ? temp.degree = d.degree : temp.degree = c.degree;
	c.degree = temp.degree;
	for (int i = temp.degree; i >= 0; i--) {
		temp.coef[i] = d.coef[i] + c.coef[i];
		c.coef[i] = temp.coef[i];
	}
	return temp;
}


void CPoly::Print(void) {
	for (int i = degree; i >= 0; i--) {
		if (coef[i] > 0) {
			if (i == degree) {
				cout << coef[i] << "*X";
				if (i != 1)cout << "^" << i;
			}
			else if (i != degree && i != 0) {
				cout << "+" << coef[i] << "*X";
				if (i != 1)cout << "^" << i;
			}
			else if (i == 0) {
				cout << "+" << coef[i];
			}
		}
		else if (coef[i] == 0) {
			continue;
		}
		else if (coef[i] < 0) {
			if (i != 0) {
				cout << coef[i] << "*X";
				if (i != 1)cout << "^" << i;
			}
			else if (i == 0) {
				cout << coef[i];
			}
		}
	}cout << endl;
}