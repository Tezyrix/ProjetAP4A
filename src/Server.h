#pragma once

#include <iostream>
#include <unordered_map>

#include "Badge.h"
#include "BadgeReader.h"

class Server{
private:
    
public:
    void checkAccess(BadgeReader& reader, Badge& badge);
};