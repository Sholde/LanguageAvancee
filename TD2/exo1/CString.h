#ifndef _CString_h
#define _CString_h
class CString {
	private:
		int size;
		char* chaine;
		static int nbrChaine;

	public:
		/* Constructeur vide */
		CString();

		/* Constructeur prenant un chaine de caractère */
		CString(const char* chaine_bis);

		/* Constructeur prenant un caractère */
		CString(const char caractere);

		/* Constructeur de recopie */
		CString(CString &s);

		/* Renvoie la valeur de nbrChaine */
		static const int nbrChaines();

		/* Retourne la taille de la chaine de caractère */
		const int getSize();

		/* Retourn la chaine de caractère sous la forme d'un char* */
		char* getString();

		/* Surcharge de l'opérator = qui recopie la chaine de caractère */
		CString& operator=(CString const& src);

		/* Change la chaine de caractère initial par celle donné en entrée*/
		void change(const char* chaine_bis);

		/* Surcharge de l'opérateur + avec un CString et un caractère
		 *
		 * Ajoute le caractère a la fin de la chaine */
		friend CString operator+(CString const& cs1, CString const& cs2);

		/* Ajoute le caractère a la fin de la chaine */
		CString& plus(char carac);

		/* Retourne le caractère a la position demandé */
		char& operator[](int number);

		/* Surcharge de l'opérateur > avec 2 CString
		 *
		 * Retourne Vrai si this > s (alphabetic), Faux sinon */
		bool operator>(CString& s);

		/* Surcharge de l'opérateur <= avec 2 CString
		 *
		 * Retourne Vrai si this <= s (alphabetic), Faux sinon */
		bool operator<=(CString& s);

		/* Retourne this si la chaine est > a s (alphabetic), sinon s*/
		CString& plusGrand(CString& s);

		/* Destructeur */
		~CString();
};
#endif
