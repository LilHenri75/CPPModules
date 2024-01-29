/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:27:23 by hebernar          #+#    #+#             */
/*   Updated: 2024/01/29 11:06:31 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "Contact.hpp"

class PhoneBook {
	private:
		size_t count;
		Contact contacts[8];

	public:
		PhoneBook();
		~PhoneBook();

		void addContact(void);
		void searchContact(void);
};

#endif