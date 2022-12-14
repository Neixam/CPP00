/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:29:34 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/04 17:29:36 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
public:
    Contact();
    ~Contact();
    Contact(const Contact& contact);
    Contact&     operator=(const Contact& other);
    std::string get_first_name(void) const;
    std::string get_last_name(void) const;
    std::string get_nick_name(void) const;
    std::string get_phone_number(void) const;
    std::string get_darkest_secret(void) const;
    void        set_first_name(const std::string& fn);
    void        set_last_name(const std::string& ln);
    void        set_nick_name(const std::string& nn);
    void        set_phone_number(const std::string& pn);
    void        set_darkest_secret(const std::string& ds);
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nick_name;
    std::string _phone_number;
    std::string _darkest_secret;
};

std::istream&   operator>>(std::istream& is, Contact& contact);

std::ostream&   operator<<(std::ostream& os, const Contact& c);
#endif