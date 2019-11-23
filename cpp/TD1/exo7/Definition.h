#ifndef _Definition_h
#define _Definition_h
#include "CString.h"
class Definition {
	private:
		CString mot;
		CString def;
	public:
		/* Constructeur vide */
		Definition():mot(),def() {};
		
		/* Constructeur prenant deux chaine de caractère */
		Definition(const char* motBis, const char* defBis):mot(motBis),def(defBis) {};

		/* Constructeur prenant deux CString */
		Definition(CString &a, CString &b):mot(a),def(b) {};

		/* Constructeur de recopie */
		Definition(Definition &a);

		/* Destructeur */
		~Definition() {};

		/* Retourne le mot */
		const char* getClef();

		/* Retourne la définition */
		const char* getDef();
};
#endif
