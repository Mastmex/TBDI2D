#ifndef WIN_HPP
#define WIN_HPP

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/System.hpp"
#include "./../set/set.hpp"
#include "./../menu/menu.hpp"
#include "./../intro/intro.hpp"
#include <iostream>
#include <thread>
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
    void draw();
    void playLocMusic();
    unsigned int timer;
    Music mus;
public:
    win();
    ~win();
    void start();
    
    
};


#endif