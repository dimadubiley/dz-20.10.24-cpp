#include "Movie.h"
#include<iostream>
using namespace std;

Movie::Movie()
{
	regus = nullptr;
	ganre = nullptr;
	data = 0.0;
	name = nullptr;
	time = 0.0;
	year = 0;
}
Movie::Movie(const char r, char g, double d, char* n, double t, int y)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1,n);
	regus = r;
	ganre = g;
	data = d;
	time = t;
	year = y;
}

Movie::Movie(const Movie& obj)
{
	name = new char[strlen(obj.name)+1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	regus = obj.regus;
	ganre = obj.ganre;
	data = obj.data;
	time = obj.time;
	year = obj.year;
}
Movie::~Movie()
{
	delete[] name;
	cout << "destructor\n";
}
void Movie::Print()
{
	cout
		<< "Regus: " << regus << "\t"
		<< "Ganre: " << ganre << "\t"
		<< "Data: " << data << "\t"
		<< "Name: " << name << "\t"
		<< "Time: " << time << "\t"
		<< "Year: " << year << endl;
}
