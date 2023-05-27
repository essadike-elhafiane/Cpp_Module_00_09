/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:03:11 by eelhafia          #+#    #+#             */
/*   Updated: 2023/05/27 21:05:24 by eelhafia         ###   ########.fr       */
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
       void add_contact(std::string n, std::string ln, std::string kname, std::string ph, std::string st)
       {
          phone = ph;
          name = n;
          nickname = kname;
          lastname = ln;
          secret = st;
       }
       void add_index(int i)
        {
            index = i;
        }
        int get_index()
        {
            return (index);
        }
        std::string get_name()
       {
          return name;
       }
        std::string get_phone()
       {
          return phone;
       }
        std::string get_lastname()
       {
          return lastname;
       }
        std::string get_nicknime()
       {
          return nickname;
       }
        std::string get_secret()
       {
          return secret;
       }
};

class  PhoneBook
{
    private :
        Contact book[8];
        int len;
    public:
       void add(Contact cnt)
        {
            static int len1;
            if (len1 >= 8)
                len1 = 0;
            book[len1] = cnt;
            book[len1].add_index(len1);
            len1++;
            if (len < 8)
                len = len1;
        }
        Contact *SEARCH(int idx)
        {
           for (int i = 0; i < len; i++)
            {
                if (book[i].get_index() == idx)
                    return &book[i];
            }
            return (NULL);
        }
        int get_num_contact()
        {
            return len;
        }
};



// class Contact
// {
// private:
//     std::string name;
//     std::string lastname;
//     std::string nickname;
//     std::string phone;
//     std::string secret;

// public:
//     Contact() {} // add default constructor
//     Contact(std::string n, std::string ln, std::string nn, std::string p, std::string s)
//         : name(n), lastname(ln), nickname(nn), phone(p), secret(s) {} // add constructor with arguments
//     std::string getNickname() const { return nickname; } // add a getter for nickname
// };

// class PhoneBook
// {
// private:
//     Contact book[8];
//     int count = 0; // add a count variable to keep track of the number of contacts added

// public:
//     bool add(Contact c) // modify add function to take a Contact object as argument
//     {
//         if (count >= 8) // check if there is space in the phone book
//             return false;
//         book[count] = c; // add the contact to the phone book
//         count++; // increment the count
//         return true;
//     }

//     Contact* find(std::string nickname) // add a function to find acontact by nickname
//     {
//         for (int i = 0; i < count; i++)
//         {
//             if (book[i].getNickname() == nickname)
//                 return &book[i];
//         }
//         return nullptr; // if the contact is not found, return a nullptr
//     }
// };

#endif