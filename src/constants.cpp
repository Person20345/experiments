#include <iostream>
#include <ctime>
#include <cmath>

#include<iomanip> // for std::cout


#include "constants.h"

/**
 * This file contains
 * 
 * 
 **/


/** 
 * Getting pi from random numbers
 * 
 * if you want ~3.1(2-5) use 100 000 numbers
 **/
long double get_pi(int random_numbers_num) {
	srand(time(0));
	long double N, n = 0, x, y;
	
	for (N = 0; N < random_numbers_num; N++) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		if (sqrt(x*x + y*y) < 1)
			n++;
	}

	return 4*(n/N);
}



void print_pi(int numbers_num, int random_numbers_num) {
	long double pi = get_pi(random_numbers_num);
	std::cout << '\t' << "pi = " << std::scientific << std::setprecision(numbers_num) << pi << "\n";
}



/** 
 * Simple fibonacci cycle
 * 
 * very easy to get k*10^2089 
 **/
long double get_fibonacci(int sequence_order) {
	long double first = 1, second = 1, help;

	for (int i = 0; i < sequence_order - 2; i++) {
		help = second;
		second = first + second;
		first = help;
	}

	return second;
}



void print_fibonacci(int numbers_num, int fibonacci_sequence_order) {
	long double number = get_fibonacci(fibonacci_sequence_order);
	std::cout << '\t' << "number[" << fibonacci_sequence_order << "] = "
	          << std::scientific << std::setprecision(numbers_num) << number << "\n";
}



/** Golden ratio from fibonacci numbers **/
long double get_phi(int sequence_order) {
	long double first = 1, second = 1, help;

	for (int i = 0; i < sequence_order - 2; i++) {
		help = second;
		second = first + second;
		first = help;
	}

	return (1 + first/second);
}



void print_phi(int numbers_num, int fibonacci_sequence_order) {
	long double phi = get_phi(fibonacci_sequence_order);
	std::cout << '\t' << "phi = " << std::scientific << std::setprecision(numbers_num) << phi << "\n";
}