//Author: Sofia Zevallos
//Implementation of the Profemon class 
// Include necessary C++ standard library headers
#include <iostream>
#include "profemon.hpp"

// Default constructor implementation
Profemon::Profemon()
{
    // Initialize default values for a Profemon
    profemon_name = "Undefined";
}

// Parameterized constructor implementation
Profemon::Profemon(std::string name, double maxHealth, Specialty specialty)
{
    // Initialize a Profemon with the provided values
    this->profemon_name = name;
    this->profemon_level = 0;
    this->current_exp = 0;
    this->level_up_exp = 50;
    this->max_health_ = maxHealth;
    this->profemon_specialty = specialty; 
}

// Getter function for retrieving the Profemon's name
std::string Profemon::getName()
{
    return profemon_name;
}

// Getter function for retrieving the Profemon's level
int Profemon::getLevel()
{
    return profemon_level; 
}

// Getter function for retrieving the Profemon's maximum health
double Profemon::getMaxHealth()
{
    return max_health_;
}

// Getter function for retrieving the Profemon's specialty
Specialty Profemon::getSpecialty()
{
    return profemon_specialty; 
} 

// Setter function for updating the Profemon's name
void Profemon::setName(std::string name)
{
    this->profemon_name = name; 
}

// Function to level up the Profemon based on gained experience
void Profemon::levelUp(int exp)
{
    current_exp += exp;

    // Check if the Profemon should level up multiple times
    while (current_exp >= level_up_exp)
    {
        current_exp -= level_up_exp; 
        profemon_level++;

        // Adjust the experience required for the next level based on specialty
        switch(profemon_specialty)
        {
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

// Function to teach a skill to the Profemon at a specific slot
bool Profemon::learnSkill(int slot, Skill skill)
{
    // Check if the slot is valid
    if (slot < 0 || slot > 2)
    {
        return false;
    }

    // Check if the skill's specialty matches the Profemon's specialty
    if (skill.getSpecialty() != profemon_specialty)
    {
        return false;
    }

    // Learn the skill at the specified slot
    learned_skills[slot] = skill;
    return true;
}

// Function to print Profemon details, including learned skills if specified
void Profemon::printProfemon(bool print_skills)
{
    std::string s_placeholder; 

    // Determine the string representation of the Profemon's specialty
    if (profemon_specialty == ML)
    {
        s_placeholder = "ML"; 
    }
    else if (profemon_specialty == SOFTWARE)
    {
        s_placeholder = "SOFTWARE";
    }
    else if (profemon_specialty == HARDWARE)
    {
        s_placeholder = "HARDWARE"; 
    }

    // Print basic Profemon details
    std::cout << profemon_name << " [" << s_placeholder << "] | lvl " << profemon_level << " | exp " 
    << current_exp << "/" << level_up_exp << " | hp " << max_health_ <<std::endl;

    // Print learned skills if specified
    if (print_skills)
    {
        for (int i = 0; i < 3; i++)
        {
            if (learned_skills[i].getName() != "Undefined")
            {
                std::cout << "    " << learned_skills[i].getName() << " [" << 
                learned_skills[i].getTotalUses() << "] : "
                 << learned_skills[i].getDescription() <<std::endl; 
            }
        } 
    }
}
