#ifndef WIN_HPP
#define WIN_HPP

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "./../set/set.hpp"
#include "./../menu/menu.hpp"
#include "./../intro/intro.hpp"
#include <iostream>
using namespace sf;


enum sost{
    load,
    men
};

class win
{
private:
    RenderWindow * window;
    set *st;
    menu *mn;
    int current_sost;
    intro *in;
public:
    win();
    ~win();
    void start();
    void draw();
};


#endif