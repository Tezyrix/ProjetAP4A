#include "Badge.h"
#include "Server.h"

Badge::Badge(std::string firstName, std::string lastName, UsrType t, Server& s) 
    : m_firstName(std::move(firstName)), m_lastName(std::move(lastName)), m_type(t)
{
    s.registerBadge(*this);
}