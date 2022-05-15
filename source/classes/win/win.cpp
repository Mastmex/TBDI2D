#include "win.hpp"
win::win()
{
    st = new set();
    sf::ContextSettings sett;
    sett.antialiasingLevel = this->st->getAal();
    this->window = new RenderWindow(VideoMode(this->st->getLength(), this->st->getHeight()),"TBDI2D",sf::Style::Default,sett);
    window->setFramerateLimit(this->st->getFps());
    this->mn = new menu();
}

win::~win(){
    delete window;
}
/**
 * @brief Основной цикл окна.
 * @author Mast_mex
 * @version 0.1
 * 
 * @details Данный метод содержит в себе основной цикл окна, а так же отвечает за взаимодействие с пользователем.
 */
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
                    this->mn->resize(event.size.width,event.size.height);
                    window->setView(View(visibleArea));
                }
        }

        // clear the window with black color
        this->draw();
    }
}

/**
 * @brief Отрисовка окна
 * @author Mast_mex
 * @version 0.1
 * @details Данный метод содержит в себе все необходимое для отрисовки окна.
 */
void win::draw()
{
    try {
		this->window->clear(Color::Black);
        mn->draw(this->window);
        window->display();
	}
	catch (int a)
	{
		std::cout << "Exeption " << a;
	}
}