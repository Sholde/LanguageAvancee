#ifndef _Vecteur_h
#define _Vecteur_h
class Vecteur {
	private:
		int* vect;
		int size;

	public:
		/* Constructeur vide */
		Vecteur();

		/* Constructeur qui créé un vecteur de la taille passé en param */
		Vecteur(const int a);

		/* Constructeur de recopie */
		Vecteur(Vecteur const& v);

		/* Destructeur */
		~Vecteur();

		/* Recopie le vecteur passé en param */
		Vecteur& operator=(Vecteur const& v);

		/* Additione les valeurs respective du vecteur par les valeurs du vecteur à droite du +s */
		Vecteur& operator+=(Vecteur const& v);

		/* Additione les valeurs respective du vecteur par number */
		Vecteur& operator+=(const int number);

		/* Soustrait les valeurs respective du vecteur par les valeurs du vecteur à droite du + */
		Vecteur& operator-=(Vecteur const& v);

		/* Soustrait les valeurs respective du vecteur par number */
		Vecteur& operator-=(const int number);

		/* Renvoie la valeur a l'indice passé en param */
		int& operator[](const int number);

		/* Ajoute 1 a toutes les valeurs du vecteur (prefix) */
		Vecteur& operator++();

		/* Retourne Vrai si les valeurs respectives des deux vecteurs sont égaux, Faux sinon */
		bool operator==(Vecteur const& v);

		/* Retourne Vrai si les valeurs respectives des deux vecteurs ne sont pas égaux, Faux sinon */
		bool operator!=(Vecteur const& v);

		/* Addition de 2 vecteur */
		friend Vecteur operator+(Vecteur const& v1, Vecteur const& v2);

		/* Affiche le vecteur sur un flux de sortie */
		friend ostream& operator<<(ostream &o, Vecteur &v);

		/* idk */
		friend istream& operator>>(istream &in, Vecteur &v);
};
#endif
