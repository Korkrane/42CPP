/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:19:29 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/23 16:40:54 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(int ac, char **av)
{
	Data data;

	data.value = 42;
	data.str = "This is a test";

	uintptr_t ptr = serialize(&data);
	Data *test = deserialize(ptr);

	if(&data != test)
	{
		std::cout << "Error: Initial structure and deserialize are different" << std::endl;
		return 1;
	}
	std::cout << "--- initial data ---" << std::endl
		<< "value : " << data.value << std::endl
		<< "string : " << data.str << std::endl
		<< "address: " << &data << std::endl;
	std::cout << std::endl;
	std::cout << "--- data after serialization & deserialization ---" << std::endl
		<< "value : " << test->value << std::endl
		<< "string : " << test->str << std::endl
		<< "address: " << test << std::endl;

	return 0;
}
