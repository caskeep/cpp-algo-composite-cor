#include <base_creature.h>

namespace creature
{

base_creature::base_creature()
    : hp_(0)
    , attack_(0)
    , defence_(0)
{}

base_creature::base_creature(int hp)
    : hp_(hp)
    , attack_(0)
    , defence_(0)
{}

base_creature::base_creature(int hp, int attack, int defence)
    : hp_(hp)
    , attack_(attack)
    , defence_(defence)
{}
    
} // namespace compcor
