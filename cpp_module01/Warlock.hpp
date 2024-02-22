#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <map>
#include "ASpell.hpp"

class Warlock {

private : 
std::string _name;
std::string _title;
std::map<std::string, ASpell*> _spells;

public:
Warlock( const std::string& name, const std::string& title );
Warlock( const Warlock& copy );
Warlock& operator=( const Warlock& src );
~Warlock();

const std::string& getName( void ) const;
const std::string& getTitle( void ) const;
void    setTitle( const std::string& title );

void introduce() const;
void learnSpell(ASpell* spell);
void forgetSpell(std::string spell);
void launchSpell(std::string spell, const ATarget& target);
};

#endif


// , takes a pointer to ASpell, that makes the Warlock learn a spell
// * , takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
// * , takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.