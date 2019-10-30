#ifndef _CString_h
#define _CString_h
class CString {
	private:
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
		const char* getString();

		/* Surcharge de l'opérator = qui recopie la chaine de caractère */
		CString& operator=(CString& src);

		/* Change la chaine de caractère initial par celle donné en entrée*/
		void change(const char* chaine_bis);

		/* Ajoute le caractère a la fin de la chaine */
		CString& plus(char carac);

		/* Retourne le caractère a la position demandé */
		char getChar(int number);

		/* Retourne Vrai si this > s (alphabetic), Faux sinon */
		bool plusGrandQue(CString& s);

		/* Retourne Vrai si this <= s (alphabetic), Faux sinon */
		bool infOuEgale(CString& s);

		/* Retourne this si la chaine est > a s (alphabetic), sinon s*/
		CString& plusGrand(CString& s);

		/* Destructeur */
		~CString();
};
#endif
