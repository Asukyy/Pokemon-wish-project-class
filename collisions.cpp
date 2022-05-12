
        #include <SFML/Graphics.hpp>
        #include <iostream>
        #include "texture.hpp"

        using namespace std;
        int incre = 1;
        int j=1;
        sf::Texture salon;
        sf::Sprite ssalon;

        void collisions(){

        if(j==1){
    if((abs((sprite_perso.getPosition().x >=510 && sprite_perso.getPosition().x <=610)&& (sprite_perso.getPosition().y ==20) && incre==1)))
    {
                    sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y +10);

    }


//arbre
               if((abs((sprite_perso.getPosition().x >=560 && sprite_perso.getPosition().x <=850)&& (sprite_perso.getPosition().y ==290)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y +10);

               }

               if((abs((sprite_perso.getPosition().y >=0 && sprite_perso.getPosition().y <=30)&& (sprite_perso.getPosition().x ==610)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x -10, sprite_perso.getPosition().y );

               }


               if((abs((sprite_perso.getPosition().y >=0 && sprite_perso.getPosition().y <=30)&& (sprite_perso.getPosition().x ==510)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x +10, sprite_perso.getPosition().y);

               }


                              if((abs((sprite_perso.getPosition().y >=20 && sprite_perso.getPosition().y <=810)&& (sprite_perso.getPosition().x ==70)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x +10, sprite_perso.getPosition().y);
                              }

                               if((abs((sprite_perso.getPosition().x >=620 && sprite_perso.getPosition().x <=970)&& (sprite_perso.getPosition().y ==20)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y +10);

               }

                   if((abs((sprite_perso.getPosition().x >=80 && sprite_perso.getPosition().x <=500)&& (sprite_perso.getPosition().y ==20)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y +10);

               }

   if((abs((sprite_perso.getPosition().y >=90 && sprite_perso.getPosition().y <=290)&& (sprite_perso.getPosition().x ==850)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x +10, sprite_perso.getPosition().y);
                              }

                                 if((abs((sprite_perso.getPosition().x >=600 && sprite_perso.getPosition().x <=850)&& (sprite_perso.getPosition().y ==90)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y -10);

               }

 if((abs((sprite_perso.getPosition().x >=560 && sprite_perso.getPosition().x <=590)&& (sprite_perso.getPosition().y ==230)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y -10);

               }

                if((abs((sprite_perso.getPosition().y >=80 && sprite_perso.getPosition().y <=220)&& (sprite_perso.getPosition().x ==600)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x -10, sprite_perso.getPosition().y);

               }

                               if((abs((sprite_perso.getPosition().y >=240 && sprite_perso.getPosition().y <=290)&& (sprite_perso.getPosition().x ==560)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x -10, sprite_perso.getPosition().y);

               }

               //deuxieme maison

                              if((abs((sprite_perso.getPosition().x >=140 && sprite_perso.getPosition().x <=430)&& (sprite_perso.getPosition().y ==290)))){

                        sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y +10);

               }

               if((abs((sprite_perso.getPosition().y >=90 && sprite_perso.getPosition().y <=290)&& (sprite_perso.getPosition().x ==430)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x +10, sprite_perso.getPosition().y);
                              }
if((abs((sprite_perso.getPosition().x >=180 && sprite_perso.getPosition().x <=430)&& (sprite_perso.getPosition().y ==90)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y -10);
                              }

                              if((abs((sprite_perso.getPosition().y >=90 && sprite_perso.getPosition().y <=230)&& (sprite_perso.getPosition().x ==180)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x -10, sprite_perso.getPosition().y);
                              }

                              if((abs((sprite_perso.getPosition().x >=130 && sprite_perso.getPosition().x <=190)&& (sprite_perso.getPosition().y ==230)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y -10);
                              }

                              if((abs((sprite_perso.getPosition().y >=240 && sprite_perso.getPosition().y <=290)&& (sprite_perso.getPosition().x ==140)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x -10, sprite_perso.getPosition().y);
                              }

                              if((abs((sprite_perso.getPosition().x >=550 && sprite_perso.getPosition().x <=900)&& (sprite_perso.getPosition().y ==370)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y -10);
                              }

                              if((abs((sprite_perso.getPosition().y >=380 && sprite_perso.getPosition().y <=570)&& (sprite_perso.getPosition().x ==890)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x +10, sprite_perso.getPosition().y);
                              }

                              if((abs((sprite_perso.getPosition().y >=380 && sprite_perso.getPosition().y <=570)&& (sprite_perso.getPosition().x ==550)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x -10, sprite_perso.getPosition().y);
                              }

                                                            if((abs((sprite_perso.getPosition().x >=550 && sprite_perso.getPosition().x <=900)&& (sprite_perso.getPosition().y ==570)))){

                                            sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y +10);
}

//barriere une

                              if((abs((sprite_perso.getPosition().x >=190 && sprite_perso.getPosition().x <=430)&& (sprite_perso.getPosition().y ==440)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y -10);
         }

           if((abs((sprite_perso.getPosition().y >=430 && sprite_perso.getPosition().y <=480)&& (sprite_perso.getPosition().x ==440)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);
         }

           if((abs((sprite_perso.getPosition().x >=190 && sprite_perso.getPosition().x <=430)&& (sprite_perso.getPosition().y ==480)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y +10);
         }

          if((abs((sprite_perso.getPosition().y >=430 && sprite_perso.getPosition().y <=480)&& (sprite_perso.getPosition().x ==170)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }

         //pancarte

          if((abs((sprite_perso.getPosition().y >=580 && sprite_perso.getPosition().y <=620)&& (sprite_perso.getPosition().x ==180)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }

          if((abs((sprite_perso.getPosition().y >=580 && sprite_perso.getPosition().y <=620)&& (sprite_perso.getPosition().x ==240)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);
         }

          if((abs((sprite_perso.getPosition().x >=180 && sprite_perso.getPosition().x <=240)&& (sprite_perso.getPosition().y ==580)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);
         }

          if((abs((sprite_perso.getPosition().x >=180 && sprite_perso.getPosition().x <=240)&& (sprite_perso.getPosition().y ==610)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }

         //deuxieme barrriere

          if((abs((sprite_perso.getPosition().x >=560 && sprite_perso.getPosition().x <=840)&& (sprite_perso.getPosition().y ==670)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);
         }

          if((abs((sprite_perso.getPosition().x >=560 && sprite_perso.getPosition().x <=840)&& (sprite_perso.getPosition().y ==710)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }


          if((abs((sprite_perso.getPosition().y >=670 && sprite_perso.getPosition().y <=710)&& (sprite_perso.getPosition().x ==850)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);
         }

          if((abs((sprite_perso.getPosition().y >=670 && sprite_perso.getPosition().y <=710)&& (sprite_perso.getPosition().x ==550)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }

         //lac

          if((abs((sprite_perso.getPosition().x >=270 && sprite_perso.getPosition().x <=480)&& (sprite_perso.getPosition().y ==710)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);
         }


          if((abs((sprite_perso.getPosition().y >=710 && sprite_perso.getPosition().y <=810)&& (sprite_perso.getPosition().x ==270)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }

          if((abs((sprite_perso.getPosition().y >=710 && sprite_perso.getPosition().y <=810)&& (sprite_perso.getPosition().x ==480)))){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);
         }

         }
         if((abs((sprite_perso.getPosition().y >=300 && sprite_perso.getPosition().y <=810)&& (sprite_perso.getPosition().x ==510)))&& j==0){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);
         }
         if((abs((sprite_perso.getPosition().y >=300 && sprite_perso.getPosition().y <=810)&& (sprite_perso.getPosition().x ==610)))&& j==0){

                                                sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }
         if((abs((sprite_perso.getPosition().x >=520 && sprite_perso.getPosition().x <=600)&& (sprite_perso.getPosition().y ==310)))&& j==0){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }

             if((abs((sprite_perso.getPosition().x >=80 && sprite_perso.getPosition().x <=900)&& (sprite_perso.getPosition().y ==800)))&& j==1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);
         }

     /*     if((abs((sprite_perso.getPosition().x >=80 && sprite_perso.getPosition().x <=900)&& (sprite_perso.getPosition().y ==800)))&& j==2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);
         }*/

                          if((sprite_perso.getPosition().x>=220 && (sprite_perso.getPosition().x<=270)) &&  (sprite_perso.getPosition().y==150) && j==-1){
                schambre.setScale(0.f, 0.f);
                j=-2;
                salon.loadFromFile("images/image_maison_2.jpg");
            ssalon.setTexture(salon);
            ssalon.setScale(2.f, 2.f);
            sprite_perso.setPosition(250,170);

        }

                    if((sprite_perso.getPosition().x>=220 && (sprite_perso.getPosition().x<=270)) &&  (sprite_perso.getPosition().y==140) && j==-2){
                        ssalon.setScale(0.f, 0.f);
                        schambre.setScale(2.f, 2.f);
                        sprite_perso.setPosition(250, 170);

                    }

        if((sprite_perso.getPosition().x>=160 && (sprite_perso.getPosition().x<=260)) &&  (sprite_perso.getPosition().y==520) && j==-2){

            ssalon.setScale(0.f, 0.f);
            smap.setScale(2.9f, 2.9f);
            j=1;
            sprite_perso.setPosition(680,300);
        }


                     if((abs((sprite_perso.getPosition().y >=150 && sprite_perso.getPosition().y <=530)&& (sprite_perso.getPosition().x ==160)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);
         }
          if((abs((sprite_perso.getPosition().x >=170 && sprite_perso.getPosition().x <=710)&& (sprite_perso.getPosition().y ==530)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);
         }
          if((abs((sprite_perso.getPosition().y >=220 && sprite_perso.getPosition().y <=520)&& (sprite_perso.getPosition().x ==710)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }
          if((abs((sprite_perso.getPosition().x >=650 && sprite_perso.getPosition().x <=720)&& (sprite_perso.getPosition().y ==220)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }
          if((abs((sprite_perso.getPosition().y >=180 && sprite_perso.getPosition().y <=210)&& (sprite_perso.getPosition().x ==650)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }
          if((abs((sprite_perso.getPosition().x >=400 && sprite_perso.getPosition().x <=640)&& (sprite_perso.getPosition().y ==180)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }
          if((abs((sprite_perso.getPosition().y >=150 && sprite_perso.getPosition().y <=180)&& (sprite_perso.getPosition().x ==390)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }
                   if((abs((sprite_perso.getPosition().x >=280 && sprite_perso.getPosition().x <=380)&& (sprite_perso.getPosition().y ==150)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }
                   if((abs((sprite_perso.getPosition().x >=170 && sprite_perso.getPosition().x <=210)&& (sprite_perso.getPosition().y ==150)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }
                   if((abs((sprite_perso.getPosition().y >=270 && sprite_perso.getPosition().y <=390)&& (sprite_perso.getPosition().x ==570)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }
                            if((abs((sprite_perso.getPosition().y >=270 && sprite_perso.getPosition().y <=390)&& (sprite_perso.getPosition().x ==690)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);
         }
                            if((abs((sprite_perso.getPosition().x >=570 && sprite_perso.getPosition().x <=680)&& (sprite_perso.getPosition().y ==270)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);
         }
                                     if((abs((sprite_perso.getPosition().x >=570 && sprite_perso.getPosition().x <=680)&& (sprite_perso.getPosition().y ==390)))&& j==-1){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }


         //j-2
                                              if((abs((sprite_perso.getPosition().x >=500 && sprite_perso.getPosition().x <=780)&& (sprite_perso.getPosition().y ==150)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }
                                                       if((abs((sprite_perso.getPosition().y >=90 && sprite_perso.getPosition().y <=150)&& (sprite_perso.getPosition().x ==490)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
         }
                                                                if((abs((sprite_perso.getPosition().x >=360 && sprite_perso.getPosition().x <=480)&& (sprite_perso.getPosition().y ==90)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);
         }

                                                                if((abs((sprite_perso.getPosition().y >=100 && sprite_perso.getPosition().y <=150)&& (sprite_perso.getPosition().x ==350)))&& j==-2){


                             sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);
                                                                }

                                                                if((abs((sprite_perso.getPosition().x >=280 && sprite_perso.getPosition().x <=340)&& (sprite_perso.getPosition().y ==150)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);

}
                                                                if((abs((sprite_perso.getPosition().x >=100 && sprite_perso.getPosition().x <=200)&& (sprite_perso.getPosition().y ==150)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);

}
  if((abs((sprite_perso.getPosition().y >=160 && sprite_perso.getPosition().y <=510)&& (sprite_perso.getPosition().x ==100)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);

}
  if((abs((sprite_perso.getPosition().x >=220 && sprite_perso.getPosition().x <=770)&& (sprite_perso.getPosition().y ==520)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);

}
  if((abs((sprite_perso.getPosition().x >=110 && sprite_perso.getPosition().x <=160)&& (sprite_perso.getPosition().y ==520)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);

}
  if((abs((sprite_perso.getPosition().y >=160 && sprite_perso.getPosition().y <=510)&& (sprite_perso.getPosition().x ==770)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);

}

if((abs((sprite_perso.getPosition().y >=350 && sprite_perso.getPosition().y <=470)&& (sprite_perso.getPosition().x ==400)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);

}

  if((abs((sprite_perso.getPosition().x >=400 && sprite_perso.getPosition().x <=650)&& (sprite_perso.getPosition().y ==340)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);

}
if((abs((sprite_perso.getPosition().y >=350 && sprite_perso.getPosition().y <=470)&& (sprite_perso.getPosition().x ==660)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);

}

  if((abs((sprite_perso.getPosition().x >=400 && sprite_perso.getPosition().x <=650)&& (sprite_perso.getPosition().y ==470)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);

}

if((abs((sprite_perso.getPosition().y >=210 && sprite_perso.getPosition().y <=310)&& (sprite_perso.getPosition().x ==470)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);

}

  if((abs((sprite_perso.getPosition().x >=470 && sprite_perso.getPosition().x <=660)&& (sprite_perso.getPosition().y ==310)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);

}
if((abs((sprite_perso.getPosition().y >=210 && sprite_perso.getPosition().y <=310)&& (sprite_perso.getPosition().x ==670)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x+10, sprite_perso.getPosition().y);

}

  if((abs((sprite_perso.getPosition().x >=470 && sprite_perso.getPosition().x <=660)&& (sprite_perso.getPosition().y ==210)))&& j==-2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y-10);

}




//J=2

 if((abs((sprite_perso.getPosition().x >=620 && sprite_perso.getPosition().x <=730)&& (sprite_perso.getPosition().y ==760)))&& j==2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x, sprite_perso.getPosition().y+10);

}
 if((abs((sprite_perso.getPosition().y >=710 && sprite_perso.getPosition().y <=810)&& (sprite_perso.getPosition().x ==720)))&& j==2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);

}
 if((abs((sprite_perso.getPosition().y >=610 && sprite_perso.getPosition().y <=810)&& (sprite_perso.getPosition().x ==720)))&& j==2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);

}
 if((abs((sprite_perso.getPosition().y >=710 && sprite_perso.getPosition().y <=760)&& (sprite_perso.getPosition().x==610)))&& j==2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
}

 if((abs((sprite_perso.getPosition().y >=710 && sprite_perso.getPosition().y <=760)&& (sprite_perso.getPosition().x==610)))&& j==2){

                                               sprite_perso.setPosition(sprite_perso.getPosition().x-10, sprite_perso.getPosition().y);
}
   }
