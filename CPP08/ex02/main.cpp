/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:08:38 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 16:47:18 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int mutant_stack_test()
{
    std::cout << "--- Mutant Stack test ---" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Current top element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Current stack size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << "Iteration of our stack (begin to end): " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

int list_test()
{
    std::cout << "--- std::list test ---" << std::endl;

    std::list<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);

    std::cout << "Current top element: " << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << "Current stack size: " << mstack.size() << std::endl;

    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);

    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << "Iteration of our stack (begin to end): " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::list<int> s(mstack);
    return 0;
}

int main()
{
    mutant_stack_test();
    std::cout << std::endl;
    list_test();
}
