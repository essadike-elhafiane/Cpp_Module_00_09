/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:14:29 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/04 17:33:18 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* WeaponB;
    public:
    HumanB(std::string name, Weapon &weapon);
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack();
    ~HumanB();
};


#endif