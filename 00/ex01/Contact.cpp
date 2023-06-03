/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 05:24:14 by eelhafia          #+#    #+#             */
/*   Updated: 2023/05/28 05:59:41 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

 void Contact::add_contact()
{
    std::cout << std::endl << "  name       : ";
    std::cin >> name;
    if (std::cin.eof())
        exit(0);
    std::cout << "  lastname   : ";
    std::cin >> lastname;
    if (std::cin.eof())
        exit(0);
    std::cout  << "  nickename  : ";
    std::cin >> nickname;
    if (std::cin.eof())
        exit(0);
    std::cout << "  phone num  : ";
    std::cin >> phone;
    if (std::cin.eof())
        exit(0);
    std::cout << "  secret     : ";
    std::cin >> secret;
    if (std::cin.eof())
        exit(0);
}

void Contact::add_index(int i)
{
    index = i;
}

int Contact::get_index()
{
    return (index);
}
std::string Contact::get_name()
{
    return name;
}

std::string Contact::get_phone()
{
    return phone;
}

std::string Contact::get_lastname()
{
    return lastname;
}

std::string Contact::get_nicknime()
{
    return nickname;
}

std::string Contact::get_secret()
{
    return secret;
}
