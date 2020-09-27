#include <SFML/Window.hpp>
#include <defaults.hpp>

#include <Game.hpp>

int main()
{
    Game *g = new Game(GAME_NAME);
    g->Run();

    return 0;
}
