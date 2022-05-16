#ifndef INTRO_HPP
#define INTRO_HPP
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <ctime>
#include <iostream>

class intro
{
private:
    sf::Texture *dis,*prod,*ld;
    sf::Sprite *diss,*prods,*lds;
    unsigned int timer;
public:
    intro();
    void resize(float a, float b);
    void draw(sf::RenderWindow *win);
};

#endif