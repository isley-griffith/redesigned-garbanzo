#include <Tile.hpp>
#include <tileids.hpp>
#include <SFML/Graphics.hpp>
#include <cstdint>


Tile::Tile(uint8_t blockNum) {
    switch (blockNum) {
        case DIRT:
            mColor = sf::Color::Black;
            break;
        case GRASS:
            mColor = sf::Color::Green;
            break;
        case SAND:
            mColor = sf::Color::Yellow;
            break;
        case TREE:
            mColor = sf::Color::Red;
            break;
        case WATER:
            mColor = sf::Color::Blue;
            break;
    }
}

sf::RectangleShape Tile::drawTile() {
    sf::RectangleShape rectangle(sf::Vector2f(16, 16));
    rectangle.setFillColor(mColor);
    return rectangle;
}




