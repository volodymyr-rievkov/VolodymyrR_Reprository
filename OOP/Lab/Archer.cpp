#include"Archer.hpp"
#include<iostream>

Archer::Archer()
{
    set_type("Archer🏹");
    set_health(60);
    set_max_health(health);
    set_damage(6);
    set_speed(3);
    set_replicas({"I never miss my mark.",
                "Precision is the key to victory.",
                "My arrows shall find their target."});
}

void Archer::print_info()
{
    Character::print_info();
    std::cout << " - Feature: " << "Speed increase" << ", when health is below 50%" << std::endl;
}

void Archer::use_feature()
{
    if(!feature_active && health < get_max_health() / 2)
    {
        speed += i_speed;
        std::cout << get_type() << " " << get_name() << "' " "feature has been used." << std::endl;
        std::cout << "Speed + " << i_speed << std::endl;
        feature_active = true;
    }
}

void Archer::print_death()
{
    std::cout << get_type() << " " << get_name() << ": "<< "My arrows... they miss their mark... can't keep fighting..." << std::endl;
    std::cout << R"(
 ▄▄▄       ██▀███   ▄████▄   ██░ ██ ▓█████  ██▀███      ██▓  ██████    ▓█████▄ ▓█████ ▄▄▄      ▓█████▄    
▒████▄    ▓██ ▒ ██▒▒██▀ ▀█  ▓██░ ██▒▓█   ▀ ▓██ ▒ ██▒   ▓██▒▒██    ▒    ▒██▀ ██▌▓█   ▀▒████▄    ▒██▀ ██▌   
▒██  ▀█▄  ▓██ ░▄█ ▒▒▓█    ▄ ▒██▀▀██░▒███   ▓██ ░▄█ ▒   ▒██▒░ ▓██▄      ░██   █▌▒███  ▒██  ▀█▄  ░██   █▌   
░██▄▄▄▄██ ▒██▀▀█▄  ▒▓▓▄ ▄██▒░▓█ ░██ ▒▓█  ▄ ▒██▀▀█▄     ░██░  ▒   ██▒   ░▓█▄   ▌▒▓█  ▄░██▄▄▄▄██ ░▓█▄   ▌   
 ▓█   ▓██▒░██▓ ▒██▒▒ ▓███▀ ░░▓█▒░██▓░▒████▒░██▓ ▒██▒   ░██░▒██████▒▒   ░▒████▓ ░▒████▒▓█   ▓██▒░▒█████    
 ▒▒   ▓▒█░░ ▒▓ ░▒▓░░ ░▒ ▒  ░ ▒ ░░▒░▒░░ ▒░ ░░ ▒▓ ░▒▓░   ░▓  ▒ ▒▓▒ ▒ ░    ▒▒▓  ▒ ░░ ▒░ ░▒▒   ▓▒█░ ▒▒▓  ▒    
  ▒   ▒▒ ░  ░▒ ░ ▒░  ░  ▒    ▒ ░▒░ ░ ░ ░  ░  ░▒ ░ ▒░    ▒ ░░ ░▒  ░ ░    ░ ▒  ▒  ░ ░  ░ ▒   ▒▒ ░ ░ ▒  ▒    
  ░   ▒     ░░   ░ ░         ░  ░░ ░   ░     ░░   ░     ▒ ░░  ░  ░      ░ ░  ░    ░    ░   ▒    ░ ░  ░    
      ░  ░   ░     ░ ░       ░  ░  ░   ░  ░   ░         ░        ░        ░       ░  ░     ░  ░   ░       
                   ░                                                    ░                       ░         
    )" << std::endl << std::endl;
}
