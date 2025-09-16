#include"etudiant.h"
#include <iostream>
#include <vector>

int main()
{
    vector<etudiant> etudiants;
    vector<employe> employes;

    // Test des classes et des m�thodes
    cout << "### TEST DES CLASSES ETUDIANT ###" << endl;
    Etudiant e1, e2;
    cin >> e1;
    cin >> e2;
    etudiants.push_back(e1);
    etudiants.push_back(e2);

    cout << "\nListe des �tudiants : " << endl;
    for (const auto& etu : etudiants) {
        cout << etu << endl;
    }

    cout << "\n### TEST DES CLASSES EMPLOYE ###" << endl;
    Employe emp1, emp2;
    cin >> emp1;
    cin >> emp2;
    employes.push_back(emp1);
    employes.push_back(emp2);

    cout << "\nListe des employ�s : " << endl;
    for (const auto& emp : employes) {
        cout << emp << endl;
    }

    // Comparaison des employ�s par salaire
    if (emp1 == emp2) {
        cout << "\nLes deux employ�s ont le m�me salaire." << endl;
    }
    else {
        cout << "\nLes deux employ�s n'ont pas le m�me salaire." << endl;
    }

    return 0;
}

}

