#ifndef ATARGET_HPP
#define ATARGET_HPP

    #include <string>
    #include "ASpell.hpp"

    class ATarget {
        
        private:
        std::string _type;

        public:
        ATarget( const std::string& type );
        ATarget( const ATarget& copy );
        ATarget& operator=( const ATarget& src );
        virtual ~ATarget();

        const std::string& getType( void ) const;

        virtual ATarget* clone() const = 0;
        void    getHitBySpell(const ASpell& spell) const;
    };


#endif