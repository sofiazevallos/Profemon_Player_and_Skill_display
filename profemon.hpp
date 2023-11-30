//Author: Sofia Zevallos
//Interface of the Profemon class

#include <iostream>
#include <string>
// Include the header file that contains the Skill class declaration
#include "skill.hpp"

// Include guards
#ifndef PROFEMON_HPP
#define PROFEMON_HPP

// Enumerated type (enum) representing possible specialties for Profemon
enum Specialty {ML, SOFTWARE, HARDWARE};

// Class definition for the Profemon class
class Profemon
{
    public:
        // Default constructor
        Profemon();

        // Parameterized constructor
        Profemon(std::string name, double max_health, Specialty specialty);

        // Getter functions
        std::string getName();
        Specialty getSpecialty();
        int getLevel();
        double getMaxHealth();

        // Setter functions
        void setName(std::string name);
        void levelUp(int exp);
        bool learnSkill(int slot, Skill skill);
        void printProfemon(bool print_skills);

    private:
        // Private member variables
        std::string profemon_name;
        int profemon_level;
        int level_up_exp;
        int current_exp;
        double max_health_;
        Specialty profemon_specialty;
        Skill learned_skills[3]; // Array to store up to three learned skills
};

// End of the class definition

// End of include guards
#endif

