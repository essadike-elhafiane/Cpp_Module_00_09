/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:48:25 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/10 20:24:17 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    std::cout << "DEBUG => ";
    harl.complain(s[0]);
    std::cout << "INFO => ";
    harl.complain(s[1]);
    std::cout << "WARNING => ";
    harl.complain(s[2]);
    std::cout << "ERROR => ";
    harl.complain(s[3]);
}
