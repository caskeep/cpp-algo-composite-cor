#pragma once

namespace creature
{
class base_creature;
} // namespace creature


namespace compcor
{

class attack_result {
  private:
    double basic_damage_;
    double final_damage_;
  public:
    attack_result();
};

// final_damage = (basic_damage * fix_inner_multi + fix_add) * fix_out_multi
class attack_counter_info {
  private:
    creature::base_creature *attacker_;
    creature::base_creature *target_;
    double basic_damage_;
    double fix_add_;
    double fix_inner_multi_;
    double fix_out_multi_;
  public:
    attack_counter_info(creature::base_creature *attacker, creature::base_creature *target, double basic_damage);
    void add_to_fix_add(double add) { fix_add_ += add; }
    void add_to_inner_multi(double add) { fix_inner_multi_ += add; }
    void add_to_out_multi(double add) { fix_out_multi_ += add; }
};

class attack_cor_base {
  private:
    attack_cor_base *next_;
  public:
    attack_cor_base();
    virtual ~attack_cor_base() = default;

    virtual void handle(attack_counter_info &counter) {
        if (next_) next_->handle(counter);
        else return;
    }
};

class attack_add : public attack_cor_base {
  private:
    int add_value_;
  public:
    attack_add(int add_value);
    ~attack_add() override = default;

    void handle(attack_counter_info &counter) override;
};

class attack_add_inner_multi : public attack_cor_base {
  private:
    int add_inner_multi_;
  public:
    attack_add_inner_multi(int add_value);
    ~attack_add_inner_multi() override = default;

    void handle(attack_counter_info &counter) override;
};

} // namespace compsor
