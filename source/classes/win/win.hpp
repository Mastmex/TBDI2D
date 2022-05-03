#ifndef WIN_HPP
#define WIN_HPP

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

using namespace sf;

class win
{
private:
    RenderWindow * window;
public:
    win();
    ~win();
    void start();
};


#endif