/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 03:02:07 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/03 03:55:25 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    //  Zombie(const std::string& name) : name(name) {};
    void seZombie(std::string name);
    void announce();
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name);
#endif