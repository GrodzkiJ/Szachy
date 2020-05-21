#ifndef FIGURA_H
#define FIGURA_H

#include <string>

using namespace std;

class Figura
{
public:
	string rodzaj_figury;
	string kolor;
	Figura();
	~Figura();
	string getKolor();
	string getRodzajFigury();
};

#endif
