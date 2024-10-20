#pragma once
class Movie
{  // режисер
   // жанр
   // дата
	char regus;
	char ganre;
	double data;
	char* name;
	double time;
	int year;
public:
	Movie();// constructor by def.
	Movie(const char r, char g, double d, char* n, double t, int y); // constructor by params
	Movie(const Movie & obj); // copy constructor
	~Movie(); // dectructor
	void Print();
};

