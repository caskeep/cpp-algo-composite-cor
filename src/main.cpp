#include <attack_cor.h>
#include <base_creature.h>
#include <attack_cal.h>
#include <iostream>

int main() {
    creature::base_creature creature_1 {100, 10, 5};
    creature::base_creature creature_2 {200, 50, 10};
    double basic_damage;
    int ret = calculation::cal_base::cal_basic_damage(&creature_1, &creature_2, basic_damage);
    if (ret != 0) {
        return -1;
    }
    // compcor::attack_counter_info crt_1_hit_crt_2 {&creature_1, &creature_2, basic_damage};
    return 0;
}
