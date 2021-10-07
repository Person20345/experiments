#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <iostream>
#include <ctime>
#include <cmath>

#include<iomanip> // for std::cout



/** getting pi from random numbers **/
long double get_pi(int random_numbers_num);

void print_pi(int numbers_num, int random_numbers_num);



/** simple fibonacci cycle **/
long double get_fibonacci(int sequence_order);

void print_fibonacci(int numbers_num, int fibonacci_sequence_order);



/** golden ratio from fibonacci numbers **/
long double get_phi(int sequence_order);

void print_phi(int numbers_num, int fibonacci_sequence_order);

#endif