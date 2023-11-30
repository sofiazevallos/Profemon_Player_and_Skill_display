//Author: Sofia Zevallos
//Interface of the Skill class
#include <iostream>
#include <string>
#ifndef SKILL_HPP
#define SKILL_HPP

class Skill
{
    public:
        Skill(); 
        Skill(std::string name, std::string description, int specialty, int uses);
        std::string getName();
        std::string getDescription();
        int getTotalUses();
        int getSpecialty();
        void setName(std::string name);
        void setDescription(std::string description);
        void setTotalUses(int uses);
        bool setSpecialty(int specialty);
    
    private:
        std::string skill_name;
        std::string skill_description;
        int skill_use;
        int skill_specialty; 
};
#endif 
