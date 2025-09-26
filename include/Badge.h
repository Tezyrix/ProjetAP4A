#pragma once

#include <string>

enum UsrType{
    ETUDIANT = 0,
    PROFFESSEUR = 1,
};

class Server;

class Badge{
private:
    static unsigned int s_nextID;
    unsigned int m_ID;
    std::string m_firstName, m_lastName;
    UsrType m_type;
    Server& m_server;
    
public:
    Badge::Badge(std::string firstName, std::string lastName, UsrType t, Server& server) 
        : m_ID(s_nextID++), m_firstName(std::move(firstName)), m_lastName(std::move(lastName)), m_type(t), m_server(server) {}
};