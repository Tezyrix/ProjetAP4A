#include "Server.h"

void Server::registerBadge(Badge &b) {
    b.m_ID = m_nextID;
    m_badgeTable[m_nextID] = &b;
    
    std::cout << "Registered a badge with id " << m_nextID << std::endl;

    m_nextID++;
}