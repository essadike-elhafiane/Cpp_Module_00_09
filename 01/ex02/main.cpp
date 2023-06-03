/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 04:01:27 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/03 04:17:37 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "address of str : " << &str <<  std::endl 
    << "address of stringPTR : " << &stringPTR <<  std::endl 
    << "address of stringREF : " << &stringREF <<  std::endl << std::endl;

    std::cout << "value of str : " << str <<  std::endl 
    << "value of stringPTR : " << *stringPTR <<  std::endl 
    << "value of stringREF : " << stringREF <<  std::endl ;
}