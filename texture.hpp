#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Audio.hpp>

//#ifndef PERSONNAGE on part du principe qu'on va beaucoup y acceder à partir de plusieurs emplacement

void deplacements(sf::Sprite &sprite_perso);
void camera();
void dial();
void pause();
void menupoke();
void collisions();
void history();
void texture();
void pokecombat();


#ifndef PERSONNAGE
#define PERSONNAGE

     extern sf:: Texture personnage;
    extern sf:: Sprite sprite_perso;
    extern int screenW, screenH;
    extern sf::View cam;
    extern sf::Texture dialogue;
    extern sf::Sprite sdialogue;
    extern sf::Texture dialogue2;
    extern sf::Sprite sdialogue2;
    extern float speed;
    extern sf::Texture transition;
    extern sf::Sprite stransition;
    extern sf::Sprite stransition;
    extern sf::View cam;
    extern sf::RenderWindow window;
    extern sf::Texture stinky;
    extern sf::Sprite sstinky;
    extern sf::Music music;
    extern sf::Texture nuage;
    extern sf::Sprite snuage;
    extern int j;
    extern sf::Texture mapping;
    extern sf::Sprite smap;
    extern sf::Texture map3;
    extern sf::Sprite smap3;
    extern int a;
    extern sf::Texture chambre;
    extern sf::Sprite schambre;
    extern sf::Texture salon;
    extern sf::Sprite ssalon;
    extern int det;
    extern bool check2;
    extern int pokemon;
    extern sf::Texture scenecombat1;
    extern sf::Sprite sscenecombat1;


    //gestion FPS
    extern bool updateFPS;
    extern float fpsCount, switchFps, fpsSpeed;
    extern int incre;


    //timer
    extern sf::Clock timer;



#endif



