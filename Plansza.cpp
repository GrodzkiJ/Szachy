#include "Plansza.h"

Plansza::Plansza()
{
	plansza = new Plansza * *[8];
	for (int i = 0; i < 8; i++)
	{
		plansza[i] = new Plansza * [8];
		for (int j = 0; j < 8; j++)
		{
			plansza[i][j] = new Plansza();
			if (i == 0)
			{
				if (j == 0 || j == 7)
				{
					plansza[i][j]->ustawFigura(new Wieza(), Kolor::czarny, Rodzaj_figury::wieza);
				}
				if (j == 1 || j == 6)
				{
					plansza[i][j]->ustawFigura(new Skoczek(), Kolor::czarny, Rodzaj_figury::skoczek);
				}
				if (j == 2 || j == 5)
				{
					plansza[i][j]->ustawFigura(new Goniec(), Kolor::czarny, Rodzaj_figury::goniec);
				}
				if (j == 3)
				{
					plansza[i][j]->ustawFigura(new Hetman(), Kolor::czarny, Rodzaj_figury::hetman);
				}
				if (j == 4)
				{
					plansza[i][j]->ustawFigura(new Krol(), Kolor::czarny, Rodzaj_figury::krol);
				}
			}
			if (i == 7)
			{
				if (j == 0 || j == 7)
				{
					plansza[i][j]->ustawFigura(new Wieza(), Kolor::bialy, Rodzaj_figury::wieza);
				}
				if (j == 1 || j == 6)
				{
					plansza[i][j]->ustawFigura(new Skoczek(), Kolor::bialy, Rodzaj_figury::skoczek);
				}
				if (j == 2 || j == 5)
				{
					plansza[i][j]->ustawFigura(new Goniec(), Kolor::bialy, Rodzaj_figury::goniec);
				}
				if (j == 3)
				{
					plansza[i][j]->ustawFigura(new Hetman(), Kolor::bialy, Rodzaj_figury::hetman);
				}
				if (j == 4)
				{
					plansza[i][j]->ustawFigura(new Krol(), Kolor::bialy, Rodzaj_figury::krol);
				}
			}
			if (i == 1)
			{
				plansza[i][j]->ustawFigura(new Pion(), Kolor::czarny, Rodzaj_figury::pion);
			}
			if (i == 6)
			{
				plansza[i][j]->ustawFigura(new Pion(), Kolor::bialy, Rodzaj_figury::pion);
			}
			if (i > 1 && i < 6)
			{
				plansza[i][j]->ustawFigura(new Puste_pole(), Kolor::zero, Rodzaj_figury::brak);
			}
		}
	}
}

void Plansza::ustawFigura(Figura* f, Kolor kolor, Rodzaj_figury rodzaj_figury)
{
	figura = f;
	figura->kolor = kolor;
	figura->rodzaj_figury = rodzaj_figury;
}

Figura* Plansza::wskFigura()
{
	return figura;
}

Plansza::~Plansza()
{
	for (int i = 0; i < 8; i++) {
		delete[] plansza[i];
	}
	delete[] plansza;
}