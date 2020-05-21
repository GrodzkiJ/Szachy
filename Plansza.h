#ifndef PLANSZA_H
#define PLANSZA_H

#include "Figura.h"
#include "Puste_pole.h"
#include "Pion.h"
#include "Wieza.h"
#include "Skoczek.h"
#include "Goniec.h"
#include "Hetman.h"
#include "Krol.h"

using namespace std;

class Plansza
{
private:
	Figura* figura;
public:
	Plansza*** plansza;
	Plansza();
	~Plansza();
	void ustawFigura(Figura* f, Kolor kolor, Rodzaj_figury rodzaj_figury);
	Figura* wskFigura();
};


#endif
