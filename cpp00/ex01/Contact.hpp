/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienneduplessix <etienneduplessix@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:22 by etiennedupl       #+#    #+#             */
/*   Updated: 2024/01/18 13:18:24 by etiennedupl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
public:
    Contact();
    ~Contact();

    friend std::istream& operator>>(std::istream& in, Contact& contact);
    friend std::ostream& operator<<(std::ostream& out, const Contact& contact);

    // Getter methods
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getNickname() const { return nickname; }

private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
};

#endif // CONTACT_HPP
