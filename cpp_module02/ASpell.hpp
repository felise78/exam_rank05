#ifndef ASPELL_HPP
#define ASPELL_HPP

    #include <string>
    class ATarget;

    class ASpell {
        
        private:
        std::string _name;
        std::string _effects;

        public:
        ASpell( const std::string& name, const std::string effects );
        ASpell( const ASpell& copy );
        ASpell& operator=( const ASpell& src );
        virtual ~ASpell();

        const std::string& getName( void ) const;
        const std::string& getEffects( void ) const;

        virtual ASpell* clone() const = 0;
        void launch(const ATarget& target);
    };

#endif