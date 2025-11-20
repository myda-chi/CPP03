/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myda-chi <myda-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:09:00 by myda-chi          #+#    #+#             */
/*   Updated: 2025/11/20 15:48:55 by myda-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    _name = "default_name";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}
FragTrap::FragTrap(const std::string &name):ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}
FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}
void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " is requesting a high five!" << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}
