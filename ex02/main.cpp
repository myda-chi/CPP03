/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myda-chi <myda-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:13:46 by myda-chi          #+#    #+#             */
/*   Updated: 2025/11/17 20:14:21 by myda-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::string name = "yda";
    FragTrap frag1;
    FragTrap frag2(name);
    frag2.attack("target1");
    frag2.takeDamage(5);
    frag2.beRepaired(3);
    frag2.highFivesGuys();
    FragTrap frag3 = frag2;
    frag3.attack("target2");
    return 0;
}