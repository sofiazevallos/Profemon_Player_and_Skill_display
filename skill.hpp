//Author: Sofia Zevallos
//Interface of the Skill class
#include <iostream>
#include <string>
#ifndef SKILL_HPP
#define SKILL_HPP

//class definition
class Skill
{
    public:
        // Default constructor
        Skill(); 

        // Parameterized constructor
        Skill(std::string name, std::string description, int specialty, int uses);

        // Getter functions
        std::string getName();
        std::string getDescription();
        int getTotalUses();
        int getSpecialty();

        // Setter functions
        void setName(std::string name);
        void setDescription(std::string description);
        void setTotalUses(int uses);
        bool setSpecialty(int specialty);
    
    private:
        // Private member variables
        std::string skill_name;
        std::string skill_description;
        int skill_use;
        int skill_specialty; 
};
// End of the class definition
// End of include guards
#endif 
