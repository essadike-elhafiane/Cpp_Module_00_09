/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:39:53 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/05 01:08:17 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <stdio.h>
int main(int ac, char ** av)
{
    if (ac < 4 || ac > 4)
        return (std::cout << "Error arg !" << std::endl, 1);
    std::ifstream fd(av[1]);
    if (!fd.is_open())
        return (std::cerr << "Error: could not open infile" << std::endl, 1);
    std::ofstream out_fd(std::string(av[1]) + ".replace");
    if (!fd.is_open())
        return (std::cerr << "Error: could not open outfile" << std::endl, 1);
    fun_write_in_outfile(fd, out_fd, av);
    fd.close();
    out_fd.close();
}
