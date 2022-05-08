#include "win.hpp"
win::win()
{
    this->window = new RenderWindow(VideoMode(960, 540),"TBDI2D");
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
    
    window->setFramerateLimit(60);
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