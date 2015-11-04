#pragma once

#include "drm_type.h"
#include <src/database.h>

class SteamDRM : public DRMType
{
    std::vector<QDir> steamDirectoryList;
	std::vector<Game> steamVector;
    void parseAcf();

public:
    using DRMType::DRMType;
    void checkExists();
    void findGames();
    QWidget* createPane();
    SteamDRM();
};

