/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:25:44 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/04 17:12:01 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), WeaponA(weapon) {}

void    HumanA::attack(void)
{
    std::cout << name <<  " attacks with their " << WeaponA.getType() << std::endl;
}
HumanA::~HumanA() {}