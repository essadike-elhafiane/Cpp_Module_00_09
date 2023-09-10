/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:12:30 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/04 16:28:49 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type);
    std::string getType(void);
    void    setType(std::string type);
    ~Weapon();
};

#endif