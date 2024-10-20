#include <iostream>
#include "Movie.h"
using namespace std;

int main()
{
	Movie* arrptr[2]{ new Movie("Avatar", 2.10, 2009, "J.D.Pavlo", "Fantazy", 15.03)};

	for (int i = 0; i < 2; i++)
	{
		arrptr[i]-> Print();
	}
	for (int i = 0; i < 2; i++)
	{
		delete arrptr[i];
	}
}

