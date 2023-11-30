//Author: Sofia Zevallos
//Implementation of the Skill class 

//Include the header file that contains the class declaration
#include "skill.hpp"
#include <iostream>

// Default constructor implementation
Skill::Skill()
{
    // Initialize default values for the skill
    skill_name = "Undefined";
    skill_description = "Undefined";
    skill_use = -1;
    skill_specialty = -1;
}

// Parameterized constructor implementation
Skill::Skill(std::string name, std::string description, int specialty, int uses)
{
    // Initialize the skill with the provided values
    this->skill_name = name;
    this->skill_description = description;
    this->skill_use = uses;
    this->skill_specialty = specialty;
}

// Getter function for retrieving the skill name
std::string Skill::getName()
{
    return skill_name;
}

// Getter function for retrieving the skill description
std::string Skill::getDescription()
{
    return skill_description;
}

// Getter function for retrieving the skill specialty
int Skill::getSpecialty()
{
    return skill_specialty;
}

// Getter function for retrieving the total uses of the skill
int Skill::getTotalUses()
{
    return skill_use;
}

// Setter function for updating the skill name
void Skill::setName(std::string name)
{
    this->skill_name = name;
}

// Setter function for updating the skill description
void Skill::setDescription(std::string description)
{
    this->skill_description = description;
}

// Setter function for updating the skill specialty
bool Skill::setSpecialty(int specialty)
{
    // Check if the provided specialty is valid (0, 1, or 2)
    if (specialty == 0 || specialty == 1 || specialty == 2)
    {
        // Update the skill specialty and return true
        this->skill_specialty = specialty;
        return true;
    }

    // Return false if the provided specialty is not valid
    return false;
}

// Setter function for updating the total uses of the skill
void Skill::setTotalUses(int uses)
{
    this->skill_use = uses;
}
