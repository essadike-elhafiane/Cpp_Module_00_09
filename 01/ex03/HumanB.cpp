/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:14:13 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/04 16:26:49 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name, Weapon weapon) : name(name), WeaponB(weapon) {}
HumanB::HumanB(std::string name) : name(name), WeaponB(Weapon("Unknown")) {}

HumanB::~HumanB(){}
