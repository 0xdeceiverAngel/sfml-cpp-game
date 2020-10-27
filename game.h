#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
class Game{
	public:
		Game();
//		~Game() ;
		void run();
		void processInput();
//		void update();
		void render();
	private:
		RenderWindow window;
        Texture texture;
        Sprite sprite;
        Sprite aircraft;
};

void Game::processInput()
{
	sf::Event event;
        while (window.pollEvent(event))
        {
        	if (event.type == sf::Event::Closed) window.close();

        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
						  aircraft.move(-0.4,0);
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
						  aircraft.move(0.4,0);
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
						  aircraft.move(0,-0.4);
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
						  aircraft.move(0,0.4);

        }


void Game::render()
{

	window.clear(Color::White);
        window.draw(aircraft);
        window.display();
}

Game::Game(){
	 window.create(VideoMode(500, 500), "The game");
//	 Texture t;
	 texture.loadFromFile("aricraft.png");
	 aircraft.setTexture(texture);
}
void Game::run(){
	while(window.isOpen())
	{
		processInput();
//		update();
		render();
	}
}
