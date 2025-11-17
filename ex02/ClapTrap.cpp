/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myda-chi <myda-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:11:45 by myda-chi          #+#    #+#             */
/*   Updated: 2025/11/17 19:46:22 by myda-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << YELLOW "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << YELLOW "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << YELLOW "ClapTrap Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << YELLOW "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << BLUE "ClapTrap " << this->_name << " attacks " << target << ", causing"
                << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
        std::cout << BLUE "Remaining energy points: " << this->_energyPoints << std::endl;
    }
    else
    {
        std::cout << RED "ClapTrap " << this->_name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        this->_hitPoints -= amount;
        if (this->_hitPoints < 0)
            this->_hitPoints = 0;
        std::cout << RED "ClapTrap " << this->_name << " takes " << amount << " points of damage! "
                << "Remaining hit points: " << this->_hitPoints << std::endl;
    }
    else
    {
        std::cout << RED "ClapTrap " << this->_name << " is already out of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << GREEN "ClapTrap " << this->_name << " is repaired by " << amount << " points! "
                << "Current hit points: " << this->_hitPoints << ", Remaining energy points: " << this->_energyPoints << std::endl;
    }
    else
    {
        std::cout << RED "ClapTrap " << this->_name << " has no energy or hit points left to repair!" << std::endl;
    }
}
ClapTrap::~ClapTrap()
{
    std::cout << YELLOW "ClapTrap Destructor called" << std::endl;
}