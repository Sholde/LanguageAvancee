#ifndef _VecteurListe_h
#define _VecteurListe_h
#include "List.h"
class Vecteur {
	private:
		List vect;

	public:
		/* Constructeur vide */
		Vecteur();

		/* Constructeur qui créé un vecteur de la taille passé en param */
		Vecteur(const int number);

		/* Constructeur de recopie */
		Vecteur(Vecteur const& v);

		/* Destructeur */
		~Vecteur();

		/* Recopie le vecteur passé en param */
		Vecteur& operator=(Vecteur const& v);

		/* Renvoie la valeur a l'indice passé en param */
		int& operator[](const int number);

		/* Ajoute 1 a toutes les valeurs du vecteur (prefix) */
		Vecteur& operator++();

		/* Retourne Vrai si les valeurs respectives des deux vecteurs sont égaux, Faux sinon */
		bool operator==(Vecteur const& v);

		/* Retourne Vrai si les valeurs respectives des deux vecteurs ne sont pas égaux, Faux sinon */
		bool operator!=(Vecteur const& v);

		/* Addition de 2 vecteur */
		Vecteur operator+(Vecteur const& v);

		/* Affiche le vecteur sur un flux de sortie */
		friend ostream& operator<<(ostream &o, Vecteur &v);

		/* idk */
		friend istream& operator>>(istream &in, Vecteur &v);
};
#endif
