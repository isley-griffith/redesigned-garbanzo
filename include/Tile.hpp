#ifndef TILE_H
#define TILE_H
#include <SFML/Graphics.hpp>
#include <cstdint>

class Tile {
private:
    uint8_t mId;
    sf::Color mColor;


public:
    Tile(uint8_t id);
    sf::RectangleShape drawTile();
};

#endif