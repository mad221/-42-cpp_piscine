/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:01:44 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 20:29:03 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/* Canonical Member Functions */
NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hp = 60;
	_mhp = 60;
	_ep = 120;
	_mep = 120;
	_lvl = 1;
	_mad = 60;
	_rad = 5;
	_adr = 0;
	SAY("Nin nin");
}
NinjaTrap::NinjaTrap(void) { }
NinjaTrap::NinjaTrap(const NinjaTrap &cpy) : ClapTrap(cpy) { *this = cpy; }
NinjaTrap::~NinjaTrap(void) { SAY("I vanish into the darkness"); }

/* Opeprator Overloads */
NinjaTrap& NinjaTrap::operator = (const NinjaTrap &old)
{
	_name = old.getname();
	_hp = old.gethp();
	_ep = old.getep();
	_lvl = old.getlvl();
	SAY("Seeing double!");
	return (*this);
}

/* Member Functions */
void	NinjaTrap::ninjaShoebox(ClapTrap const & target)
{ SAY(target.getname() << " finds a mirror in the shoebox"); }

void	NinjaTrap::ninjaShoebox(FragTrap const & target)
{ SAY(target.getname() << " finds a grenade in the shoebox"); }

void	NinjaTrap::ninjaShoebox(ScavTrap const & target)
{ SAY(target.getname() << " finds a bug in the shoebox"); }

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{ SAY(target.getname() << " finds nothing in the shoebox"); }
