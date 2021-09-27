/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:25:58 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/27 15:22:55 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 10

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	Array<int> tmp = numbers;
	Array<int> test(tmp);

	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << i << " numbers: " << numbers[i] << " mirror:" << mirror[i] << " tmp:" << tmp[i] << " test: " << test[i] << std::endl;
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}


    std::cout << "--- Check array affect after assignation test & numbers and +1 ---" << std::endl;
    test = numbers; 
	for (int i = 0; i < MAX_VAL; i++)
	{
        test[i] += 1;
		std::cout << i << " numbers: " << numbers[i] << " test: " << test[i] << std::endl;
    }


    std::cout << "--- Check array affect after test modification ---" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
        test[i] = 42;
		std::cout << i << " tmp: " << tmp[i] << " test: " << test[i] << std::endl;
    }
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}
