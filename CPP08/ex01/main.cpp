/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:53:11 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 16:07:17 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void basic_positive_test()
{
    std::cout << "--- basic_positive_test ---" << std::endl;
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void basic_negative_test()
{
    std::cout << "--- basic_negative_test ---" << std::endl;
    Span sp = Span(5);

    sp.addNumber(-4);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(-8);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void basic_memory_exception_test()
{
    std::cout << "--- basic_memory_exception_test ---" << std::endl;
    Span sp = Span(5);

    sp.addNumber(-4);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(-8);
    sp.addNumber(11);
    
    try
    {
        sp.addNumber(42);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void basic_elements_exception_test()
{
    std::cout << "--- basic_elements_exception_test ---" << std::endl;
    Span sp = Span(1);

    sp.addNumber(42);
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void basic_add_range_test()
{
    std::cout << "--- basic_add_range_test ---" << std::endl;
    Span sp = Span(10);
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    try
    {
        sp.addNumbers(arr, 10);
        sp.display();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void basic_add_big_range_test()
{
    std::cout << "--- basic_add_big_range_test ---" << std::endl;
    Span sp = Span(100000);
    int arr[100000];

    for(int i = 0; i < 100000; i++)
        arr[i] = i;
    try
    {
        sp.addNumbers(arr, 100000);
        //sp.display(); //wanna see a long list ?
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void basic_add_range_exception_test()
{
    std::cout << "--- basic_add_range_exception_test ---" << std::endl;
    Span sp = Span(10);
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    try
    {
        sp.addNumbers(arr, 11);
        sp.display();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    basic_positive_test();
    std::cout << std::endl;
    basic_negative_test();
    std::cout << std::endl;
    basic_memory_exception_test();
    std::cout << std::endl;
    basic_elements_exception_test();
    std::cout << std::endl;
    basic_add_range_test();
    std::cout << std::endl;
    basic_add_big_range_test();
    std::cout << std::endl;
    basic_add_range_exception_test();
    std::cout << std::endl;
}
