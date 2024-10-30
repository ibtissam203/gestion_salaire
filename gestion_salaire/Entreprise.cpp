#include "Entreprise.h"
#include <iostream>
using namespace std;

Entreprise::Entreprise(string N,string a, int c) : Nom(N),adresse(a), capacite(c), taille(0) {
    // Allouer un tableau de pointeurs d’employés avec la capacité initiale
    tab_employes = new Employe * [capacite];
}

void Entreprise::resize() {
    int nouvelle_capacite = capacite * 2;
    Employe** tmp = new Employe * [nouvelle_capacite];

    // Copier les employés existants vers le nouveau tableau
    for (int i = 0; i < taille; i++) {
        tmp[i] = tab_employes[i];
    }

    // Libérer le tableau original
    delete[] tab_employes;

    // Mettre à jour le pointeur du tableau et la capacité
    tab_employes = tmp;
    capacite = nouvelle_capacite;
}

void Entreprise::ajouter_employe(Employe* employe) {
    // Si le tableau est plein, redimensionner
    if (taille >= capacite) 
        resize();
    
    tab_employes[taille++] = employe;
}

void Entreprise::afficher_salaires() const {
    for (int i = 0; i < taille; i++) {
        cout << "************* Employe " << i + 1 << " **************" << endl;
        tab_employes[i]->afficher();
    }
}

void Entreprise::totale_salaires() const {
    float tot = 0;
    for (int i = 0; i < taille; i++) {
        tot += tab_employes[i]->calculer_salaire();
    }
    cout << "************* Totale salaire **************" << endl;
    cout << "Totale salaire : " << tot << " DH" << endl;
}

Entreprise::~Entreprise() {
    // Libérer la mémoire de chaque employé puis du tableau
    for (int i = 0; i < taille; ++i) {
        delete tab_employes[i];
    }
    delete[] tab_employes;
}
