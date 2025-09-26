#include "BadgeReader.h"
#include "Server.h"

unsigned int BadgeReader::s_nextID = 1;

void BadgeReader::readBadge(Badge& badge) {
    m_server.checkAccess(*this, badge);
}