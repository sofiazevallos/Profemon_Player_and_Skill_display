//Author: Sofia Zevallos
//Implementation of the Skill class 
#include "skill.hpp"
#include <iostream> 

Skill::Skill()
{
    skill_name = "Undefined";
    skill_description = "Undefined";
    skill_use = -1; 
    skill_specialty = -1; 
}

Skill::Skill(std::string name, std::string description, int specialty, int uses)
{
    this->skill_name = name;
    this->skill_description = description;
    this->skill_use = uses;
    this->skill_specialty = specialty; 
}
std::string Skill::getName()
{
    return skill_name; 
}
std::string Skill::getDescription()
{
    return skill_description; 
}
int Skill::getSpecialty()
{
    return skill_specialty; 
}
int Skill::getTotalUses()
{
    return skill_use; 
}
void Skill::setName(std::string name)
{
    this->skill_name = name; 
}
void Skill::setDescription(std::string description)
{
    this->skill_description = description;  
}

bool Skill::setSpecialty(int specialty)
{
    if(specialty == 0 || specialty == 1 || specialty == 2){
        this->skill_specialty = specialty;
        return true;
    }
    
return false; 
}

void Skill::setTotalUses(int uses)
{
    this->skill_use = uses;  
}
