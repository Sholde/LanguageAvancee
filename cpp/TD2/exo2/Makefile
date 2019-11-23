all: vecteur  vecteurListe finale

vecteur: Main.cc Vecteur.cc
	g++ Main.cc Vecteur.cc -o main

vecteurListe: mainListe.cc Vecteur.cc List.cc
	g++ mainListe.cc Vecteur.cc List.cc -o mainListe -g3

finale: MainFin.cc VecteurListe.cc List.cc
	g++ MainFin.cc VecteurListe.cc List.cc -o MainFin -g3
