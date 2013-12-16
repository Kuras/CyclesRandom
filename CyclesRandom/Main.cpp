/*
 * Main.cpp
 *
 *  Created on: 16 gru 2013
 *      Author: Baraka
 */

#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int getRandomFromNoyman(int number);

int main (void){

	int randomNumber;
	int number;
	cout << "Generuj liczby losowe!\nPodaj liczbe\n";
	cin >> number;
	randomNumber = getRandomFromNoyman(number);
	cout << randomNumber;
	return EXIT_SUCCESS;

}

int getRandomFromNoyman(int number){
	int randomNum;
	randomNum = sqrt(number);
	return randomNum;
}




