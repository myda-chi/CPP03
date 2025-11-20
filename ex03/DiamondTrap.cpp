/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myda-chi <myda-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:41:24 by myda-chi          #+#    #+#             */
/*   Updated: 2025/11/20 15:55:10 by myda-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("default_clap_name"), FragTrap(), ScavTrap()
{
    std::cout << BLUE "DiamondTrap Default constructor called" << std::endl;
    _name = "default_name";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string &name):ClapTrap(name + "_clap_name"),FragTrap(), ScavTrap(), _name(name)
{
    std::cout << MAGENTA "DiamondTrap constructor called" << std::endl;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):ClapTrap(other.ClapTrap::_name),FragTrap(other), ScavTrap(other), _name(other._name)
{
    std::cout << YELLOW "DiamondTrap Copy constructor called" << std::endl;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << YELLOW "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << this->ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED "DiamondTrap Destructor called" << std::endl;
}
