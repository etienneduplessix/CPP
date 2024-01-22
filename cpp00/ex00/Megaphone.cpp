/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienneduplessix <etienneduplessix@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:38 by etiennedupl       #+#    #+#             */
/*   Updated: 2024/01/18 13:18:52 by etiennedupl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) 
{
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            for (int j = 0; argv[i][j] != '\0'; ++j) {
                std::cout << (char)toupper(argv[i][j]);
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }

    return 0;
}
