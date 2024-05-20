#pragma once
#include<iostream>
#include"Character.hpp"
#include"Archer.hpp"
#include"Warrior.hpp"
#include"Wizard.hpp"
#include"Golem.hpp"
#include"Map.hpp"

class Battlefield
{
public:
    Battlefield() {};
    virtual ~Battlefield() {};
    virtual void start() = 0;
    virtual void print_title() = 0;
    Map<std::string, Character*> players;
    std::pair<int, int> get_players_amount_limits();
    int* get_players_amount();
    Character* get_current_player();
private:
    int players_amount = 0;
    const int min_players_amount = 2;
    const int max_players_amount = 6;
    Character* current_player = nullptr;
protected:
    void print_players();
    void attack();
    void set_random_current_player();
    void change_current_player();
};