#include <iostream>
#include <string>
#include "Employe.h"
#include "Commerciale.h"
#include "Gestionnaire.h"
#include "Entreprise.h"
#include "Gestionnaire_commerce.h"

using namespace std;

int main() {
    // Instanciation d'un employ� g�n�ral (Assurez-vous que la classe Employe n'est pas abstraite)
    Employe* E1 = new Employe("E1", "EP1", 80);
    E1->calculer_salaire(); // Supposons que cette m�thode met � jour un attribut salaire
    E1->afficher(); // Affichage de l'employ�

    cout << endl << "***********  Commerciale  *************" << endl;
    Commerciale* C2 = new Commerciale("C2", "CP2", 80, 30);
    C2->calculer_salaire(); // Calculer le salaire pour le commerciale
    C2->afficher(); // Affichage du commerciale

    cout << endl << "***********  gestionnaire  *************" << endl;
    Gestionnaire* G2 = new Gestionnaire("E2", "EP2");
    G2->calculer_salaire(); // Calculer le salaire pour le gestionnaire
    G2->afficher(); // Affichage du gestionnaire

    cout << endl << "***********  gestionnaire commerce  *************" << endl;
    Gestionnaire_commerce* GC1 = new Gestionnaire_commerce("E2", "EP2",80,20);
    GC1->calculer_salaire(); // Calculer le salaire pour le gestionnaire
    GC1->afficher(); // Affichage du gestionnaire




    // Cr�ation de l'entreprise
    Entreprise en1("en1","adr1", 2);
    en1.ajouter_employe(E1); // Ajout de l'employ� g�n�ral
    en1.ajouter_employe(C2); // Ajout du commerciale
    en1.ajouter_employe(G2); // Ajout du gestionnaire



    // Affichage des salaires de tous les employ�s
    en1.afficher_salaires();
    en1.totale_salaires();

    // Suppression des employ�s - pas n�cessaire si l'entreprise les g�re
    // delete E1; // Pas n�cessaire, car Entreprise s'en occupera
    // delete E2; // Pas n�cessaire, car Entreprise s'en occupera

    return 0; // Terminaison du programme
}
