/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myda-chi <myda-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 19:48:04 by myda-chi          #+#    #+#             */
/*   Updated: 2025/11/17 19:48:48 by myda-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::string name = "yda";
    ScavTrap scav1;
    ScavTrap scav2(name);
    scav2.attack("target1");
    scav2.takeDamage(5);
    scav2.beRepaired(3);
    scav2.guardGate();
    ScavTrap scav3 = scav2;
    scav3.attack("target2");
    return 0;
}