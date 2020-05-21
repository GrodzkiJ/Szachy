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
					plansza[i][j]->ustawFigura(new Wieza(), "czarny", "wieza");
				}
				if (j == 1 || j == 6)
				{
					plansza[i][j]->ustawFigura(new Skoczek(), "czarny", "skoczek");
				}
				if (j == 2 || j == 5)
				{
					plansza[i][j]->ustawFigura(new Goniec(), "czarny", "goniec");
				}
				if (j == 3)
				{
					plansza[i][j]->ustawFigura(new Hetman(), "czarny", "hetman");
				}
				if (j == 4)
				{
					plansza[i][j]->ustawFigura(new Krol(), "czarny", "krol");
				}
			}
			if (i == 7)
			{
				if (j == 0 || j == 7)
				{
					plansza[i][j]->ustawFigura(new Wieza(), "bialy", "wieza");
				}
				if (j == 1 || j == 6)
				{
					plansza[i][j]->ustawFigura(new Skoczek(), "bialy", "skoczek");
				}
				if (j == 2 || j == 5)
				{
					plansza[i][j]->ustawFigura(new Goniec(), "bialy", "goniec");
				}
				if (j == 3)
				{
					plansza[i][j]->ustawFigura(new Hetman(), "bialy", "hetman");
				}
				if (j == 4)
				{
					plansza[i][j]->ustawFigura(new Krol(), "bialy", "krol");
				}
			}
			if (i == 1)
			{
				plansza[i][j]->ustawFigura(new Pion(), "czarny", "pion");
			}
			if (i == 6)
			{
				plansza[i][j]->ustawFigura(new Pion(), "bialy", "pion");
			}
			if (i > 1 && i < 6)
			{
				plansza[i][j]->ustawFigura(new Puste_pole(), "brak", "brak");
			}
		}
	}
}

void Plansza::ustawFigura(Figura* f, string kolor, string rodzaj_figury)
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