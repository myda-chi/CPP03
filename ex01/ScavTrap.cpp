#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->_name ="";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string &name): ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
                  << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
    {
        std::cout << "ScavTrap " << this->_name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}
