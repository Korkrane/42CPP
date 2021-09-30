/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:59:03 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/30 12:24:04 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	const char *str = "Hello";
	int arr[5] = {0, 1, 2, 3, 4};

	iter(arr, sizeof(arr)/sizeof(arr[0]), display);
	iter(str, strlen(str), display);
}
