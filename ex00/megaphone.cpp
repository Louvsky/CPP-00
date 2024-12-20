/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:24:19 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/10 10:45:05 by lgasqui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
 #include <cctype>
 
int	main(int argc, char **argv)
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				std::cout << static_cast<char>(toupper(argv[i][j]));
			}
			if(argv[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;	
	}
	
	return 0;
} 