#ifndef OTHELLOPLAYER_H
#define OTHELLOPLAYER_H



#include "Othello.h"
#include "OthelloBoard.h"

namespace Desdemona
{
    class OthelloPlayer
    {
        public:
            Turn turn;

            /**
             * Default constructor
             */
            OthelloPlayer( Turn turn );
            
            /**
             * Default destructor
             */
            virtual ~OthelloPlayer( ) {}

            virtual Move play( const OthelloBoard& board );

        private:

    };

    class BotException : public exception
    {
        public:
            const OthelloPlayer& player;
            BotException( const OthelloPlayer& player ) throw() :
                player( player ) {}
            ~BotException() throw() {}
            const char* what() const throw()
            {
                return "Bot threw an unhandled exception.";
            }
    };
}

#endif /* #ifndef OTHELLOPLAYER_H */
