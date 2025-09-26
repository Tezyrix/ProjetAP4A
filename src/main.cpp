#include <iostream>

#include "Server.h"
#include "Badge.h"

int main() {
    Server s;

    Badge B1("Prenom1", "NOM1", UsrType::ETUDIANT, s);
    Badge B2("Prenom2", "NOM2", UsrType::PROFFESSEUR, s);
    
    return 0;
}