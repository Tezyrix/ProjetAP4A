#pragma once

#include <string>

enum UsrType{
    ETUDIANT = 0,
    PROFFESSEUR = 1,
};

class Server;

class Badge{
private:
    unsigned int m_ID;
    std::string m_firstName, m_lastName;
    UsrType m_type;
    
public:
    Badge(std::string firstName, std::string lastName, UsrType type, Server& s);

    friend class Server;
};