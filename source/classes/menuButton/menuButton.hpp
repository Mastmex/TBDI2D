#ifndef MENUBUTTON_HPP
#define MENUBUTTON_HPP
#include "./../button/button.hpp"
#include <SFML/Graphics.hpp>


class menuButton : public button
{
private:
    float x;
    float y;
    float length;
    float height;
    float coex, coey;
    sf::Texture* frame;
    sf::Sprite* frames;
    sf::RenderWindow *win;
public:
    menuButton(float x, float y, float length, float height, sf::RenderWindow *wind);
    ~menuButton();
    bool isAbove(float x, float y) override;
    void resize(float c1, float c2) override;
};



#endif