/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myda-chi <myda-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:51:01 by myda-chi          #+#    #+#             */
/*   Updated: 2025/11/17 15:51:09 by myda-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::string name = "yda";
    ClapTrap clap1;
    ClapTrap clap2(name);
    clap2.attack("target1");
    clap2.takeDamage(5);
    clap2.beRepaired(3);
    ClapTrap clap3 = clap2;
    clap3.attack("target2");
    return 0;
}
