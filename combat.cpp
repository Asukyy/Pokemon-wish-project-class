#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cmath>
#include <vector>
#include "texture.hpp"

using namespace std;

sf::Texture scenecombat1;
sf::Sprite sscenecombat1;

        void sleep(int seconds) {

    time_t start_time = 0;
    time_t current_time = 0;

    start_time = time(NULL);
    while(current_time-start_time+1 <= seconds) {
        current_time = time(NULL);
    }
}

void pokecombat(){

int pokemon=100;
int potion=10;
int vie=1;
int test=1;
bool sceneCombat=false;



 if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)){
            if((sprite_perso.getPosition().x>=660) && (sprite_perso.getPosition().x<=690) && (sprite_perso.getPosition().y>=770))
    {
        vie++;
            for(vie%2==0; pokemon<=100; pokemon++)
        {
        cout<<pokemon<<endl;

        }
    }

        }

         if(vie%2==0)
            {
                speed=0;
            }

            if(j==2 && sprite_perso.getPosition().y==610 && sprite_perso.getPosition().x>480 && sprite_perso.getPosition().x<580)
            {
                sceneCombat=false;

            }
                 if(sceneCombat==true){

                scenecombat1.loadFromFile("images/combat1.png");
                sscenecombat1.setTexture(scenecombat1);
                sscenecombat1.setScale(2.7f,2.7f);
                sscenecombat1.setPosition(180,315);
                smap3.setScale(0.f,0.f);
                speed=0;
            }

}
