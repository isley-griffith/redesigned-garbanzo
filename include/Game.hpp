#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

#include <string>

class Game {
private:
    std::string mName;

    bool mRunning = true;

    sf::RenderWindow window;
    sf::CircleShape testShape;

    void create_window();
    void handle_input();
    void handle_event(const sf::Event&);
    void render(void);

public:
    Game(std::string);
    void Run(void);

};

#endif
