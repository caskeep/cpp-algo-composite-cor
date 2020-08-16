#pragma once

namespace creature
{
class base_creature;
} // namespace creature


namespace calculation
{

class cal_base {
  public:
    static int cal_basic_damage(creature::base_creature *attacker, creature::base_creature *target, double &basic_damage);
};
    
} // namespace calculation
