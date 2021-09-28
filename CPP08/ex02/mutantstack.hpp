/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:08:51 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 16:38:11 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void) {};
        ~MutantStack(void) {};
        MutantStack(MutantStack const &src)
        {
            *this = src;
        }
        MutantStack &operator=(MutantStack const &src)
        {
            this->c = src->s;
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {return this->c.begin();};
        iterator end() {return this->c.end();};

};
#endif
