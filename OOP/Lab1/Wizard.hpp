#pragma once
#include"Character.hpp"
#include<iostream>
#include<vector>
#include<functional>

class Wizard : public Character
{
private:
    const int health_reg = 10;
    const int fire_a = 5;
    const int wrath_o_h = 10;
    void regeneration();
    void fire_aspect();
    void wrath_of_heaven();
    void init_funcs_vector();
    std::vector<std::function<void()>> super_powers_funcs;
    std::vector<std::string> super_powers;
    void print_super_powers();
    void print_info() override;
    void use_feature() override;
    void print_death() override;
public:
    Wizard();
};