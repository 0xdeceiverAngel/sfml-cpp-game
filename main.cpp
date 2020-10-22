#include <SFML/Graphics.hpp>
using namespace sf;
//using namespace ;
int main()
{
    RenderWindow window(VideoMode(500, 500), "The game");
//    CircleShape shape(100.f);
//    shape.setFillColor(Color::Green);
	Texture t;
	t.loadFromFile("aricraft.png");
	Sprite aircraft(t);
	float dx=0,dy=0;
	
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
        	if (event.type == sf::Event::Closed) window.close();
        	if (event.type == sf::Event::KeyPressed)
            {
                switch (event.key.code)
                {
                // If escape is pressed, close the application
//                case  sf::Keyboard::Escape : window.close(); break;

                // Process the up, down, left and right keys
//                case sf::Keyboard::Up :     upFlag=true; break;
//                case sf::Keyboard::Down:    downFlag=true; break;
//                case sf::Keyboard::Left:    dx=-0.5; break;
//                case sf::Keyboard::Right:   dx=0.5; break;
                default : break;
                }
            }

            // If a key is released
            if (event.type == sf::Event::KeyReleased)
            {
                switch (event.key.code)
                {
                // Process the up, down, left and right keys
//                case sf::Keyboard::Up :     upFlag=false; break;
//                case sf::Keyboard::Down:    downFlag=false; break;
//                case sf::Keyboard::Left:    dx=0; break;
//                case sf::Keyboard::Right:   dx=0; break;
                default : break;
                }
            }

        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
						  aircraft.move(-0.4,0);
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
						  aircraft.move(0.4,0);
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
						  aircraft.move(0,-0.4);
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
						  aircraft.move(0,0.4);
        window.clear(Color::White);
        window.draw(aircraft);
        window.display();
        }

		return 0;
    }

    

