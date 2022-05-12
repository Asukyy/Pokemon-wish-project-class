#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

    sf:: Texture texture;
    if(!texture.loadFromFile("../images/ground.jpg")){
        return 0;
    }
    sf::Sprite sprite;
        sprite.setTexture(texture);

    sf::Music music;
    if (!music.openFromFile("../son/ville.ogg"))
      return -1; // erreur                                                                                                                                                                             
    

	music.play();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
	window.display();


    }

    return 0;
}
