#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cmath>
#include <vector>
#include "texture.hpp"


using namespace std;

    bool check=false;
    int screenH=600;
    int screenW=800;
    int b=1;
    int det=0;
    bool check2=false;
    int offsetX =32, offsetY=32;


//sf::RectangleShape maison1(sf::Vector2f(120.f, 50.f));

    sf::Music music;
    sf::Texture menu;
    sf::Sprite smenu;
    sf::Texture mapping;
    sf::Sprite smap;
    sf::Texture dialogue;
    sf::Sprite sdialogue;
    sf::Texture pauses;
    sf::Sprite spause;
    sf::Texture pause2;
    sf::Sprite spause2;
    sf::Texture stinky;
    sf::Sprite sstinky;
    sf::Texture chambre;
    sf::Sprite schambre;
    sf::Texture pause3;
    sf::Sprite spause3;






void texture(){

    if(!menu.loadFromFile("images/menu-1.png"))
            cout<<"ERROR"<<endl;
    smenu.setTexture(menu);
    smenu.setScale(0.9f, 1.1f);




    if(!personnage.loadFromFile("images/spritev2p1.png"))
            cout<<"ERROR"<<endl;
    sprite_perso.setTexture(personnage);
    sprite_perso.setScale(1.3f, 1.3f);
    sprite_perso.setPosition(680, 300);

     if(!mapping.loadFromFile("images/bourgp.png"))
            cout<<"ERROR"<<endl;
    smap.setTexture(mapping);
        smap.setScale(2.9f, 2.9f);


    if(!stinky.loadFromFile("images/stinky.png"))
            cout<<"ERROR"<<endl;
    sstinky.setTexture(stinky);
    sstinky.setScale(0.4f, 0.4f);
    sstinky.setPosition(565, 10);

    if(!chambre.loadFromFile("images/image_maison_2.jpg")){
    cout<<"ERROR"<<endl;
    schambre.setTexture(salon);
    j=-2;
    }
}

void audio(){

         if (!music.openFromFile("son/ville.ogg"))
      cout<<"ERROR"<<endl; // erreur

                     music.play();
             music.setVolume(50.f);
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(screenW, screenH), "Pokemon version Or!");
        window.setFramerateLimit(15);

            texture();

                 chambre.loadFromFile("images/image_maison_1.jpg");
    schambre.setTexture(chambre);
        schambre.setScale(2.f, 2.f);
        sprite_perso.setPosition(550,330);
        j=-1;
        smap.setScale(0.f,0.f);



    while (window.isOpen())
    {


        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


         while (check == false)
            {

                window.clear();
                window.draw(smenu);
                window.display();

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))


                    check = true;

                    audio();
                    music.setLoop(true);

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                    return EXIT_SUCCESS;
            }


    //j'appelle le texture.cpp dans le personnages.cpp pour les deplacements et tout ca reviens dans le main, le .hpp sert à crée ses fonctions rappelez

         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
        check2=true;
        b++;
        det=0;


         if(!pauses.loadFromFile("images/pauseyes.png"))
                cout<<"ERROR"<<endl;
            spause.setTexture(pauses);
            spause.setPosition(sprite_perso.getPosition().x -180, sprite_perso.getPosition().y -180);
            spause.setScale(0.5f, 0.5f);
            speed=0;
            smap.setColor(sf::Color(255, 255, 255, 50));
                    sstinky.setColor(sf::Color(255, 255, 255, 50));

            det=1;
            }

                if(b%2==1){
        check2=false;
        spause.setScale(0.f, 0.f);
        spause2.setScale(0.f, 0.f);
        spause3.setScale(0.f, 0.f);
        smap.setColor(sf::Color(255, 255, 255, 255));
        sstinky.setColor(sf::Color(255, 255, 255, 255));
                }

                                if(check2==true) {

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2)){
           pause2.loadFromFile("images/pauseno.png");
            spause2.setTexture(pause2);
            spause2.setPosition(sprite_perso.getPosition().x -180, sprite_perso.getPosition().y -180);
            spause2.setScale(0.5f, 0.5f);
            det=2;
            spause.setScale(0.f, 0.f);
            spause3.setScale(0.f, 0.f);
           }

                  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad1)){

                         pauses.loadFromFile("images/pauseyes.png");
            spause.setTexture(pauses);
            spause.setPosition(sprite_perso.getPosition().x -180, sprite_perso.getPosition().y -180);
            spause.setScale(0.5f, 0.5f);
            spause3.setScale(0.f, 0.f);

            det=1;

           }

                           if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && det==2){

                    speed=10;
                    b=3;
                }


                 if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && det==3){

                    return EXIT_SUCCESS;
                 }


                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad3))
                {

                    spause.setScale(0.f,0.f);
                    spause2.setScale(0.f,0.f);
                    pause3.loadFromFile("images/sauver_grise_copie.png");
                    spause3.setPosition(sprite_perso.getPosition().x -180, sprite_perso.getPosition().y -180);
                    spause3.setTexture(pause3);
                    spause3.setScale(0.5f, 0.5f);
                    speed=0;
                    smap.setColor(sf::Color(255, 255, 255, 50));
                    sstinky.setColor(sf::Color(255, 255, 255, 50));
                    det=3;
                 }

        }


if(j==0 && b%2==0 ||j==1 && b%2==0){
    speed=0;
}
        deplacements(sprite_perso);
        camera();
        dial();
        history();
        collisions();



        window.clear();
        window.draw(smap);
        window.draw(ssalon);
        window.draw(schambre);
        window.draw(ssalon);
        window.draw(stransition);
        window.draw(smap3);
        window.draw(sdialogue);
        window.draw(sdialogue2);
        window.draw(sstinky);
        window.draw(sprite_perso);
        window.draw(spause3);
        window.draw(spause2);
        window.draw(spause);
        window.draw(spause3);
        window.draw(sscenecombat1);
        window.setView(cam);
        window.display();


    }
    return 0;
}
