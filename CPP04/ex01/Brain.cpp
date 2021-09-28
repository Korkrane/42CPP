/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:08:24 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 17:53:16 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;

    std::string ideas[] = {
        "good idea",
        "bad idead",
        "not an idea",
        "genius idea",
        "god idea",
        "dumb idea",
    };
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(Brain const &src)
{
    std::cout << "Brain Assignation operator called" << std::endl;
    if(this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
    return *this;
}

std::string Brain::getIdeas(int i)
{
    return this->ideas[i];
}

std::string *Brain::getAllIdeas()
{
    return this->ideas;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}
