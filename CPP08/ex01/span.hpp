/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:37:00 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/27 21:16:53 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    public:
        Span(void);
        Span(unsigned int n);
        ~Span(void);
        Span(Span const &src);
        Span &operator=(Span const &src);

        void addNumber(int i);
        void addNumbers(int *numbers, int size);
        int shortestSpan();
        int longestSpan();
        std::vector<int> getV();
        void display();

        class memoryException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };

        class elementsException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };

    private:
        std::vector<int> v;
        int len;
        int total;
};

#endif
