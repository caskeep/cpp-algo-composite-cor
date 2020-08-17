#pragma once

#include <list>

namespace compcor {
class attack_cor_base;
}

namespace creature {

class base_creature {
  private:
    int hp_;
    int attack_;
    int defence_;
    std::list<compcor::attack_cor_base*> attack_cor;
  public:
    base_creature();
    base_creature(int hp);
    base_creature(int hp, int attack, int defence);

    int hp() const { return hp_; }
    int attack() const { return attack_; }
    int defence() const { return defence_; }
    void add_attack_cor(compcor::attack_cor_base *cor) { attack_cor.push_back(cor); }
};
    
} // namespace compsor
