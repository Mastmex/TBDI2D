#ifndef WIN_HPP
#define WIN_HPP

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "./../set/set.hpp"

using namespace sf;

class win
{
private:
    RenderWindow * window;
    set *st;
public:
    win();
    ~win();
    void start();
};


#endif