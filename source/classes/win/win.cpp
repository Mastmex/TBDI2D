#include "win.hpp"
win::win()
{
    st = new set();
    sf::ContextSettings sett;
    sett.antialiasingLevel = this->st->getAal();
    this->window = new RenderWindow(VideoMode(this->st->getLength(), this->st->getHeight()),"TBDI2D",sf::Style::Default,sett);
    window->setFramerateLimit(this->st->getFps());
}
/**
 * @brief Отрисовка окна
 * @author Mast_mex
 * @version 0.1
 * 
 * @details Данный метод служит для отрисовки окна. В нём устанавливаются все основные значения.
 */
win::~win(){
    delete window;
}
void win::start(){
    while (window->isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        Event event;
        while (window->pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == Event::Closed)
                window->close();
        if (event.type == Event::Resized)
                {
                    FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                     window->setView(View(visibleArea));
                }
        }

        // clear the window with black color
        window->clear(Color::Black);
        window->display();
    }
}