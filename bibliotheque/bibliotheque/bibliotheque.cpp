#include "Livre.h"

int main() {
    // Cr�ation de la biblioth�que
    bibliotheque maBibliotheque;

    // Cr�ation de quelques livres
    Livre livre1("1984", "George Orwell", "1949", "123456789");
    Livre livre2("Le Petit Prince", "Antoine de Saint-Exup�ry", "1943", "987654321");
    Livre livre3("Harry Potter � l'�cole des sorciers", "J.K. Rowling", "1997", "456123789");

    // Ajout des livres � la biblioth�que
    maBibliotheque.ajouterLivre(livre1);
    maBibliotheque.ajouterLivre(livre2);
    maBibliotheque.ajouterLivre(livre3);

    // Affichage des livres
    cout << "Liste des livres dans la biblioth�que :" << endl;
    maBibliotheque.AfficherLivre();

    // Suppression d'un livre par son ISBN
    cout << "\nSuppression du livre avec ISBN 987654321..." << endl;
    maBibliotheque.supprimerLivreParISBN("987654321");

    // Affichage des livres apr�s suppression
    cout << "\nListe des livres apr�s suppression :" << endl;
    maBibliotheque.AfficherLivre();

    return 0;
}
