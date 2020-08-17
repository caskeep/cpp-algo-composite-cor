#include <attack_cor.h>
#include <base_creature.h>
#include <attack_cal.h>
#include <iostream>
#include "gtest/gtest.h"

TEST(AttackCor, Add) {
    EXPECT_EQ(0, 0);
    creature::base_creature creature_1 {100, 10, 5};
    creature::base_creature creature_2 {200, 50, 10};
    double basic_damage;
    EXPECT_EQ(calculation::cal_base::cal_basic_damage(&creature_1, &creature_2, basic_damage), 0);
    // compcor::attack_counter_info crt_1_hit_crt_2 {&creature_1, &creature_2, basic_damage};
}
