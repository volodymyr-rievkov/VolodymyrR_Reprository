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
    change_font_colour(6);
    std::cout << " - Feature: " << "Speed increase" << ", when health is below 50%" << std::endl;
    change_font_colour(7);
}

void Archer::use_feature()
{
    if(!feature_active && health < max_health / 2)
    {
        speed += i_speed;
        change_font_colour(6);
        std::cout << get_type() << " " << get_name() << "'s " "feature has been used." << std::endl;
        std::cout << "Speed + " << i_speed << std::endl << std::endl;
        change_font_colour(7);
        feature_active = true;
    }
}

void Archer::print_death()
{
    change_font_colour(4);
    std::cout << get_type() << " " << get_name() << ": ";
    type_text("My arrows... they miss their mark... can't keep fighting...");
    std::cout << std::endl;
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
    change_font_colour(7);
}
