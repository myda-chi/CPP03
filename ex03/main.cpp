/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myda-chi <myda-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:48:53 by myda-chi          #+#    #+#             */
/*   Updated: 2025/11/19 19:31:10 by myda-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap yda("Yda");
    ClapTrap latifa("Latifa");
    ClapTrap myda;
    ScavTrap henna;
    FragTrap morena;
    DiamondTrap john;

    yda.attack("a");
    yda.attack("b");
    yda.attack("c");
    yda.takeDamage(10);
    latifa.takeDamage(5);
    latifa.takeDamage(10);
    myda.beRepaired(15);
    myda.takeDamage(20);
    henna.attack("an enemy");
    henna.takeDamage(30);
    henna.beRepaired(20);
    henna.guardGate();
    morena.attack("a target");
    morena.takeDamage(40);
    morena.beRepaired(25);
    morena.highFivesGuys();
    john.attack("the boss");
    john.takeDamage(50);
    john.beRepaired(30);
    john.guardGate();
    john.highFivesGuys();
    john.whoAmI();
    return 0;
}