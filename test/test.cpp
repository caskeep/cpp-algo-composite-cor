#include <attack_cor.h>
#include <base_creature.h>
#include <attack_cal.h>
#include <iostream>
#include "gtest/gtest.h"

TEST(AttackCor, Add) {
    EXPECT_EQ(0, 0);
    creature::base_creature creature_1 {100, 20, 5};
    creature::base_creature creature_2 {200, 50, 10};
    double basic_damage;
    EXPECT_EQ(calculation::cal_base::cal_basic_damage(&creature_1, &creature_2, basic_damage), 0);
    EXPECT_EQ(basic_damage, 10.0);
    compcor::attack_counter_info crt_1_hit_crt_2 {&creature_1, &creature_2, basic_damage};
    compcor::attack_add attack_add_cor{10};
    compcor::attack_add_inner_multi attack_add_inner_multi(2);
    attack_add_cor.add(&attack_add_inner_multi);
    attack_add_cor.handle(crt_1_hit_crt_2);
}
