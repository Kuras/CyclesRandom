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
	int i=0;
	randomNumber = getRandomFromNoyman(number);
	cout << randomNumber<< " ";
	while (i<100) {
		randomNumber = getRandomFromNoyman(randomNumber);
		cout << randomNumber<< " ";
		i++;
	}
	return EXIT_SUCCESS;

}

int getRandomFromNoyman(int number){
	int randomNum;
	randomNum = (sqrt(number) * 1000);
	randomNum = randomNum%1000;
	return randomNum;
}




