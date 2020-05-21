#ifndef FIGURA_H
#define FIGURA_H

using namespace std;

enum class Rodzaj_figury
{
	pion,
	wieza,
	skoczek,
	goniec,
	hetman,
	krol,
	brak
};

enum class Kolor
{
	bialy,
	czarny,
	zero
};

class Figura
{
public:
	Rodzaj_figury rodzaj_figury;
	Kolor kolor;
	Figura();
	~Figura();
	Kolor getKolor();
	Rodzaj_figury getRodzajFigury();
};

#endif
