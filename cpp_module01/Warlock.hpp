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