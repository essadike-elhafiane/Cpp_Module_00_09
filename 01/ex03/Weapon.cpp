/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:18:59 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/04 16:35:56 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(std::string type): type(type){}

std::string Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    
}