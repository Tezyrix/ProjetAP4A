#pragma once

#include <iostream>
#include <unordered_map>

#include "Badge.h"

class Server{
private:
    unsigned int m_nextID = 0;
    std::unordered_map<int, Badge*> m_badgeTable;
    
public:
    void registerBadge(Badge &b);
};