#ifndef WIN_HPP
#define WIN_HPP

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "./../set/set.hpp"
#include "./../menu/menu.hpp"
#include <iostream>

using namespace sf;

class win
{
private:
    RenderWindow * window;
    set *st;
    menu *mn;
public:
    win();
    ~win();
    void start();
    void draw();
};


#endif