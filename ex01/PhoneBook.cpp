/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 05:24:09 by eelhafia          #+#    #+#             */
/*   Updated: 2023/05/28 05:49:14 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(Contact cnt)
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

Contact *PhoneBook::SEARCH(int idx)
{
    for (int i = 0; i < len; i++)
    {
        if (book[i].get_index() == idx)
            return &book[i];
    }
    return (NULL);
}
        
int PhoneBook::get_num_contact()
{
    return len;
}
