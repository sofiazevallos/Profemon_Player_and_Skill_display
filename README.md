# Profemon Training Simulator

This project simulates a training environment for Profemons, creatures with different specialties and the ability to learn various skills. Each Profemon has a set of skills associated with its specialty, and the simulation allows creatures to level up and learn new skills.

## Files

### 1. `skill.hpp` and `skill.cpp`

These files define and implement the `Skill` class. The `Skill` class represents a skill that a Profemon can learn. It includes information such as the skill's name, description, total uses, and specialty.

### 2. `profemon.hpp` and `profemon.cpp`

These files define and implement the `Profemon` class. The `Profemon` class represents a creature with a name, level, maximum health, specialty, and the ability to learn up to three skills. The class includes functions for leveling up, learning skills, and printing Profemon details.

### 3. `main.cpp`

The `main.cpp` file contains the main function where the program execution begins. It demonstrates the usage of the `Skill` and `Profemon` classes by creating instances, learning skills, leveling up creatures, and printing their details.

## Usage

To run the Profemon Training Simulator, compile the source files using a C++ compiler and execute the generated executable. Make sure all source files (`skill.hpp`, `skill.cpp`, `profemon.hpp`, `profemon.cpp`, and `main.cpp`) are included in the compilation.

```bash
g++ skill.cpp profemon.cpp main.cpp -o profemon_simulator
./profemon_simulator
