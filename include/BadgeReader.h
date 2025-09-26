#pragma once

#include "Badge.h"

class BadgeReader{
private:
    static unsigned int s_nextID;
    unsigned int m_ID;
    Server& m_server;

public:
    BadgeReader(Server& server)
        : m_ID(s_nextID++), m_server(server) {}

    void readBadge(Badge& badge);
};