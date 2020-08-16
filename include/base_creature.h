#pragma once

namespace creature {

class base_creature {
  private:
    int hp_;
    int attack_;
    int defence_;
  public:
    base_creature();
    base_creature(int hp);
    base_creature(int hp, int attack, int defence);
};
    
} // namespace compsor
