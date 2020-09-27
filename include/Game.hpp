#ifndef GAME_H
#define GAME_H

#include <string>

class Game {
private:
    std::string mName;
    void render(void);

public:
    Game(std::string name) { mName = name; }
    void Run(void);

};

#endif
