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
    Battlefield();
    void start();
private:
    int players_amount = 0;
    const int min_players_amount = 2;
    const int max_players_amount = 6;
    Character* current_player = nullptr;
    const std::vector<std::string> characters = {"Archer", "Golem", "Warrior", "Wizard"};
    Map<std::string, Character*> players;
    void print_characters();
    void start();
    void set_players();
    void set_players_amount();
    void print_players();
    void set_random_current_player();
    void print_start();
    void attack();
    void change_current_player();
    void finish();
};