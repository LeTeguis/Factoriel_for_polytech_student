#include <iostream>

int main(int argc, char** argv){
    std::cout << "Donnez moi un nombre dont je dois calculer son factoriel\n";
    
    unsigned long n = 1; 
    std::cin >> n;

    unsigned long fact = 1;
    unsigned long n_ = n;

    while (n > 1){
        fact = fact * n;
        n--;
    }

    std::cout << n_ << "! = " << fact << std::endl;

    return 0;
}

/*
    - je dois demander a l'utilisateur de me fournir le nombre // std::cout << "Donnez moi un nombre dont je dois calculer son factoriel\n";
    - je dois chercher a recuperer le nombre // type nom_variable = 0; unsigned long n = 1; std::cin >> n;
    - apres je dois calculer le factoriel du nombre // n! = n * (n - 1) * (n - 2)  ... * 1
    - de dois afficher le resultat a l'ecran // std::cout << n << "! = " << fact << std::endl;
*/