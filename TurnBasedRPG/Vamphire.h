#pragma once

#include "Enemy.h"

class Vamphire: public Enemy
{
public:
     Vamphire(std::string name, int maxHp, int maxToughness);

    
    ActionResult performAttack() override;
    //vsgegehwy5
private:
    int m_turnCount{ 0 };
};