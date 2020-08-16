#include <attack_cal.h>
#include <base_creature.h>

namespace calculation
{

int cal_base::cal_basic_damage(creature::base_creature *attacker, creature::base_creature *target, double &basic_damage) {
    if (nullptr == attacker || nullptr == target) return -1;
    basic_damage = double(attacker->attack() - target->defence());
    return 0;
}
    
} // namespace calculation
