#include <SFML/Graphics.hpp>
#include "texture.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int a=0;
sf::Music bruitdialogue;
using namespace std;
sf::Music bruitdialogue2;
sf::Texture dialogue2;
sf:: Sprite sdialogue2;
int i=0;

void dial(){

if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)){
a++;
if (sprite_perso.getPosition().x == 680 && sprite_perso.getPosition().y == 300){

    smap.setScale(0.f,0.f);
    ssalon.setScale(2.f,2.f);
    j=-2;
    sprite_perso.setPosition(220,490);

       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}

}


if (sprite_perso.getPosition().x == 260 && sprite_perso.getPosition().y == 300){

        dialogue.loadFromFile("images/minart.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 260, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}

if (sprite_perso.getPosition().x == 590 && sprite_perso.getPosition().y == 300){

        dialogue.loadFromFile("images/dialogueboite1.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();

if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}

if (sprite_perso.getPosition().x == 170 && sprite_perso.getPosition().y == 300){

        dialogue.loadFromFile("images/dialogueboite1.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 170, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}


}

if (sprite_perso.getPosition().x == 400 && sprite_perso.getPosition().y == 490){

        dialogue.loadFromFile("images/fleurdialogue.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}
if (sprite_perso.getPosition().x == 210 && sprite_perso.getPosition().y == 620){

        dialogue.loadFromFile("images/dtexte.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 210, sprite_perso.getPosition().y + 112);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}

if (sprite_perso.getPosition().x == 720 && sprite_perso.getPosition().y == 580){

        dialogue.loadFromFile("images/alan.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 408, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}
if (sprite_perso.getPosition().x == 580 && sprite_perso.getPosition().y == 300){

        dialogue.loadFromFile("images/dialogueboite1.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}


}

if((sprite_perso.getPosition().x >=510 && sprite_perso.getPosition().x <=610)&& (sprite_perso.getPosition().y ==30) && (sf::Keyboard::isKeyPressed(sf::Keyboard::E)))

            {
        dialogue2.loadFromFile("images/1.png");
            sdialogue2.setTexture(dialogue2);
            sdialogue2.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 390);
            sdialogue2.setScale(1.f, 0.75f);
        if (!bruitdialogue2.openFromFile("son/dialogues.ogg"));
              bruitdialogue2.setVolume(100.f);
             bruitdialogue2.play();
             speed=0;
                i++;


            }



            if(i==2){
                dialogue2.loadFromFile("images/2.png");
            sdialogue2.setTexture(dialogue2);
            sdialogue2.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 390);
            sdialogue2.setScale(1.f, 0.75f);



}
     if(i==3){

                dialogue2.loadFromFile("images/3.png");
            sdialogue2.setTexture(dialogue2);
            sdialogue2.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 390);
            sdialogue2.setScale(1.f, 0.75f);

  }
     if(sf::Keyboard::isKeyPressed(sf::Keyboard::E) && i==4){


                dialogue2.loadFromFile("images/4.png");
            sdialogue2.setTexture(dialogue2);
            sdialogue2.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 390);
            sdialogue2.setScale(1.f, 0.75f);
        if (!bruitdialogue2.openFromFile("son/receive_poke.ogg"));
              bruitdialogue2.setVolume(100.f);
             bruitdialogue2.play();
                          music.setVolume(0.f);

  }

  if(i>=5){
                        if(!nuage.loadFromFile("images/Nuage_anim.png"))
                        cout<<"ERROR"<<endl;
                        snuage.setTexture(nuage);
                        snuage.setScale(0.6f,0.6f);
                        snuage.setPosition(565, 10);
                        if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}

incre=2;
sstinky.setPosition(1000,1000);
speed=10;
sdialogue2.setScale(0.f,0.f);
bruitdialogue2.setVolume(0.f);
        music.setVolume(50.f);



  }

}
















