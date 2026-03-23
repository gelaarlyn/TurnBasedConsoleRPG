#include "Vamphire.h"
#include "ActionResult.h"
#include <iostream>

Vamphire::Vamphire(std::string name, int maxHp, int maxToughness)
    : Enemy{ std::move(name), maxHp, maxToughness }
 {
}

ActionResult Vamphire::performAttack()
{
    ++m_turnCount;

    if (m_turnCount % 4 == 0)
    {
       
        std::cout << "  >> " << m_name
            << " absorbs the moisture -- REGENERATE! <<\n";
        heal(12);
        return ActionResult{ActionResult::Type::Damage, 8};
    }

    return ActionResult{ ActionResult::Type::Damage, 14 };
}