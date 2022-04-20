#include "win.hpp"
win::win()
{
    
}
void win::start(){
    sf::RenderWindow window(sf::VideoMode(600,480),"TBDI2D",sf::Style::Default);
    window.setFramerateLimit(60);
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        if (event.type == sf::Event::Resized)
                {
                    sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                     window.setView(sf::View(visibleArea));
                }
        }

        // clear the window with black color
        window.clear(sf::Color::Black);
        window.display();
    }
}