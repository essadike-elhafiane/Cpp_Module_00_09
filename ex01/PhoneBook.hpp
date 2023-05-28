/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:03:11 by eelhafia          #+#    #+#             */
/*   Updated: 2023/05/28 05:53:53 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
class Contact
{
    private:
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string phone;
        std::string secret;
        int index;
    public:
        Contact() {};
        ~Contact() {};
        void add_contact();
        void add_index(int i);
        int get_index();
        std::string get_name();
        std::string get_phone();
        std::string get_lastname();
        std::string get_nicknime();
        std::string get_secret();
};
 
class  PhoneBook
{
    private :
        Contact book[8];
        int len;
    public:
        PhoneBook(){
            len = 0;
        };
        ~PhoneBook(){};
        void add(Contact cnt);
        Contact *SEARCH(int idx);
        int get_num_contact();
};

#endif