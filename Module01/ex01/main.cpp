/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 03:01:46 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/03 04:00:02 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *h1;
    
    h1 = zombieHorde(14, "lslsls");
    for (int i = 0; i < 14; i++)
        h1[i].announce();
    delete[] h1;
    return (0);
}