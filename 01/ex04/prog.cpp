/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:26:07 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/04 20:08:19 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void    fun_write_in_outfile(std::ifstream& fd, std::ofstream& out_fd, char **av)
{
    std::string str;

    while (std::getline(fd, str))
    {
        for (int i = 0; str[i]; i++)
        {
            std::size_t pos = str.find(av[2]);
            while (i < pos && str[i] && pos != std::string::npos)
                out_fd << str[i++];  
            while (pos != std::string::npos)
            {
                if (i == pos && str[i])
                {
                    for (int j = 0; j < std::string(av[2]).length(); j++)
                    {
                        if (str[i])
                            ++i;
                    }
                    out_fd << av[3];
                }
                pos = str.find(av[2], pos + std::string(av[2]).length());
                while (i < pos && pos != std::string::npos && str[i])
                    out_fd << str[i++];
            }
            if (str[i])
                out_fd << str[i];
            else 
                break;
        }
        out_fd << std::endl;
    }
}
