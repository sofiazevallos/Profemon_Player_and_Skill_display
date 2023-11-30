//Author: Sofia Zevallos
//Interface of the Profemon class
#include <iostream>
#include <string>
#include "skill.hpp" 
#ifndef PROFEMON_HPP
#define PROFEMON_HPP

enum Specialty{ML, SOFTWARE, HARDWARE};

class Profemon
{
    public:
        Profemon();
        Profemon(std::string name, double max_health, Specialty specialty);
        std::string getName();
        Specialty getSpecialty();
        int getLevel();
        double getMaxHealth();
        void setName(std::string name);
        void levelUp(int exp);
        bool learnSkill(int slot, Skill skill);
        void printProfemon(bool print_skills);

    private:
        std::string profemon_name;
        int profemon_level;
        int level_up_exp;
        int current_exp;
        double max_health_;
        Specialty profemon_specialty;
        Skill learned_skills[3]; 
};
#endif 

