#pragma once

namespace compcor
{

class attack_result {
  private:
    double final_damage_;
  public:
    attack_result();
};

class attack_cor_base {
  private:
    attack_cor_base *next_;
  public:
    attack_cor_base();
    virtual ~attack_cor_base() = default;

};

} // namespace compsor
