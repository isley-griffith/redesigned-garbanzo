#include <Game.hpp>
#include <SFML/Graphics.hpp>
#include <Tile.hpp>
#include <cstdint>

#include <iostream>

void Game::render() {
    sf::RenderWindow window(sf::VideoMode(800, 800), mName);
    // sf::CircleShape shape(100.f);
    // shape.setFillColor(sf::Color::Black);

    Tile aTile(2);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(aTile.drawTile());
        window.display();
    }
}

void Game::Run() {
    render();

    std::cout << mName << std::endl;
}
