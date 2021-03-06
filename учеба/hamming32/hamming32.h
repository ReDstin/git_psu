#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Hamming32
{
private:
	vector<int> toBin(int num); // Переводит в двоичную и дополняет до 8 символов
	int toDec(vector<int> vec); // Переводит в десятичную вектор из 8 символов 
public:
	vector<int> encode(string text); // Кодирует
	string decode(vector<int> code); // Декодирует
	void print_vec(vector<int> vec); // Печатет вектор
	vector<int> stringToVec(string str); // Переводит строку в вектор
};

class error_hamming: public std::invalid_argument
{
public:
	explicit error_hamming (const std::string& what_arg):
		std::invalid_argument(what_arg) {}
	explicit error_hamming (const char* what_arg):
		std::invalid_argument(what_arg) {}
};