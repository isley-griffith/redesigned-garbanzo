#include <Game.hpp>
#include <SFML/Graphics.hpp>
#include <Tile.hpp>
#include <cstdint>

#include <iostream>

Game::Game(std::string name) {
    mName = name;
}

void Game::create_window() {
    window.create(sf::VideoMode(800, 800), mName);
    testShape.setRadius(100.f);
    testShape.setFillColor(sf::Color::Green);
}

void Game::render() {

    window.clear();

    window.draw(testShape);

    window.display();
}

void Game::handle_event(const sf::Event &event) {
    if (event.type == sf::Event::Closed)
        mRunning = false;
}

void Game::handle_input() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
    }
}

void Game::Run() {
    create_window();

    while (window.isOpen() && mRunning) {
        sf::Event event;

        handle_input();
        while (window.pollEvent(event))
            handle_event(event);

        render();
        // sf::sleep(sf::milliseconds(10));
    }
    window.close();
}
