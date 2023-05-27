/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:13:41 by eelhafia          #+#    #+#             */
/*   Updated: 2023/05/27 21:33:32 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string str;
    std::string info[5];
    Contact cnt;
    PhoneBook ph;
    
    std::cout << "\033[2J\033[1;1H" << "   entre command \"ADD\" for add new contact and \"SEARCH\" and \"EXIT\"" << std::endl << std::endl;
    std::cout << " cmd here => ";
    std::cin >> str;
    while (!str.empty())
    {
        if (str == "ADD")
        {
            std::cout << "  name       : ";
            std::cin >> info[0];
            std::cout << "  lastname   : ";
            std::cin >> info[1];
            std::cout  << "  nickename  : ";
            std::cin >> info[2];
            std::cout << "  phone num  : ";
            std::cin >> info[3];
            std::cout << "  secret     : ";
            std::cin >> info[4];
            cnt.add_contact(info[0], info[1], info[2], info[3], info[4]);
            if (!info[0].empty() && !info[1].empty() && !info[2].empty() && !info[3].empty() && !info[4].empty())
                ph.add(cnt);
        }
        else if (str == "SEARCH")
        {
            Contact *cnts;
            int idx;

            std::cout << "---------------------------------------------" << std::endl;
            std::cout << "|  index   |  name    | last name| nickname |" << std::endl;
            std::cout << "---------------------------------------------" << std::endl;
            for(int i = 0; i < ph.get_num_contact(); i++)
            {
                cnts = ph.SEARCH(i);
                std::string name = (cnts->get_name().length() <= 10) ? cnts->get_name() : cnts->get_name().substr(0, 9) + ".";
                std::string lastname = (cnts->get_lastname().length() <= 10) ? cnts->get_lastname() : cnts->get_nicknime().substr(0, 9) + ".";
                std::string nickname = (cnts->get_nicknime().length() <= 10) ? cnts->get_nicknime() : cnts->get_nicknime().substr(0, 9) + ".";
                
                std::cout << "|" << std::setw(10) << i  << "|";
                std::cout << std::setw(10) << name  << "|";
                std::cout << std::setw(10) << lastname  << "|";
                std::cout << std::setw(10) << nickname << "|" << std::endl;
                std::cout << "---------------------------------------------" << std::endl;
            }
            std::cout << "entre name for search : ";
            if (std::cin >> idx)
                idx = idx;
            else if (std::cin.eof())
                exit(0);
            else
            {
                idx = 11;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            cnts = ph.SEARCH(idx);
            if (cnts)
                std::cout << "----------------------------------" << std::endl << "| name       |   "
                << cnts->get_name() << std::endl << "----------------------------------" << std::endl << "| last name  |   "
                << cnts->get_lastname()<< std::endl<< "----------------------------------" 
                << std::endl<< "| nickname   |   " << cnts->get_nicknime() << std::endl << "----------------------------------" 
                << std::endl<< "| phone num  |   " << cnts->get_phone() << std::endl<< "----------------------------------" 
                << std::endl<< "| secret     |   " << cnts->get_secret() << std::endl<< "----------------------------------" << std::endl;
            else
                std::cout << "contact  not fond try for correct id " << std::endl;
        }
        else if (str == "EXIT")
            exit(0);
        else 
            std::cout << "  cmd not fond !" << std::endl;
        std::cout << " cmd here => ";
        std::cin >> str;
    }
    return 0;
}