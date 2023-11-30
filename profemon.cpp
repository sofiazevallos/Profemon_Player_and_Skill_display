//Author: Sofia Zevallos
//Implementation of the Profemon class 
#include <iostream>
#include "profemon.hpp" 

Profemon::Profemon()
{
    profemon_name = "Undefined";
    /*profemon_level = 0;
    current_exp = 0;
    level_up_exp = 50;
    max_health_ = 0;
    profemon_specialty = ML; 
    */
}

Profemon::Profemon(std::string name, double maxHealth, Specialty specialty)
{
    this->profemon_name = name;
    this->profemon_level = 0;
    this->current_exp = 0;
    this->level_up_exp = 50;
    this->max_health_ = maxHealth;
    this->profemon_specialty = specialty; 
}

std::string Profemon::getName()
{
    return profemon_name;
}

int Profemon::getLevel()
{
    return profemon_level; 
}

double Profemon::getMaxHealth()
{
    return max_health_;
}

Specialty Profemon::getSpecialty()
{
    return profemon_specialty; 
} 

void Profemon::setName(std::string name)
{
    this->profemon_name = name; 
}
void Profemon::levelUp(int exp){
    current_exp += exp;
    while(current_exp >= level_up_exp)
    {
        current_exp -= level_up_exp; 
        profemon_level++;
        switch(profemon_specialty){
            case ML:
            level_up_exp += 10;
            break;
            case SOFTWARE:
            level_up_exp += 15;
            break;
            case HARDWARE:
            level_up_exp += 20;
            break; 

        }
    }
}
bool Profemon::learnSkill(int slot, Skill skill)
{
    if(slot < 0 || slot > 2){
        return false;
    }
    if(skill.getSpecialty() != profemon_specialty)
    {
        return false;
    }
    learned_skills[slot] = skill;
    return true;
}

void Profemon::printProfemon(bool print_skills)
{
    std::string s_placeholder; 
    if(profemon_specialty == ML)
    {
        s_placeholder = "ML"; 
    }
    if(profemon_specialty == SOFTWARE)
    {
        s_placeholder = "SOFTWARE";
    }
    if(profemon_specialty == HARDWARE)
    {
        s_placeholder = "HARDWARE"; 
    }
    std::cout << profemon_name << " [" << s_placeholder << "] | lvl " << profemon_level << " | exp " 
    << current_exp << "/" << level_up_exp << " | hp " << max_health_ <<std::endl;
    if(print_skills)
    {
        for(int i = 0; i < 3; i++){
            if(learned_skills[i].getName() != "Undefined"){
                std::cout << "    " << learned_skills[i].getName() << " [" << 
                learned_skills[i].getTotalUses() << "] : "
                 << learned_skills[i].getDescription() <<std::endl; 
            }
        } 
    }
}