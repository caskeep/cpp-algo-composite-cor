#include <attack_cor.h>

namespace compcor
{

attack_result::attack_result()
    : basic_damage_(.0)
    , final_damage_(.0)
{}

attack_counter_info::attack_counter_info(creature::base_creature *attacker, creature::base_creature *target, double basic_damage)
    : attacker_(attacker)
    , target_(target)
    , basic_damage_(basic_damage)
    , fix_add_(.0)
    , fix_inner_multi_(.0)
    , fix_out_multi_(.0)
{}

attack_add::attack_add(int add_value)
    : add_value_(add_value)
{}

void attack_add::handle(attack_counter_info &counter) {
    counter.add_to_fix_add(add_value_);
    attack_cor_base::handle(counter);
}
    
} // namespace compcor
