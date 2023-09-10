/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:26:20 by eelhafia          #+#    #+#             */
/*   Updated: 2023/05/30 01:10:41 by eelhafia         ###   ########.fr       */
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
    Zombie(std::string name);
    ~Zombie();
    void announce();
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );
#endif