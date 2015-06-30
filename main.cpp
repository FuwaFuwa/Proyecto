#include <iostream>
#include <SFML/Graphics.hpp>
#include "Juego.h"
#include <SFML/Audio.hpp>

using namespace std;

Juego *jue = new Juego();
int xmouse=0, ymouse=0;
bool click;
int contador=0;
char turno = 'X';
sf::Font font;
sf::Text text;
sf::Music musica, mus;



void gano(){

font.loadFromFile("Blambot Pro Bold.ttf");

    text.setFont(font);



    if(jue->ganar()=='X'){
            text.setString("Ganan las X");
            text.setCharacterSize(50);
            text.setColor(sf::Color::Green);
            text.setStyle(sf::Text::Bold | sf::Text::Underlined);
            text.setPosition(250, 450);


          }else if(jue->ganar()=='O'){
            text.setString("Ganan los 0");
            text.setCharacterSize(50);
            text.setColor(sf::Color::Green);
            text.setStyle(sf::Text::Bold | sf::Text::Underlined);
            text.setPosition(250, 450);
                    }
             else if(contador>=9 && jue->ganar()=='E'){
            text.setString("Empate");
            text.setCharacterSize(50);
            text.setColor(sf::Color::Green);
            text.setStyle(sf::Text::Bold | sf::Text::Underlined);
            text.setPosition(300, 450);
        }



}

void dibujar(){

            if(ymouse>=0 && ymouse<=300){
                if(xmouse>=0 && xmouse<=300){
                        jue->CuadroUno(turno);
                        contador++;

                        if(turno == 'X')
                        turno = 'O';
                        else
                        turno='X';

                        }



                    else if(xmouse>=300 && xmouse<=600){
                    jue->CuadroDos(turno);
                    contador++;

                    if(turno == 'X')
                        turno = 'O';
                        else
                        turno='X';

                    }
                    else if(xmouse>=600 && xmouse<=900){
                        contador++;
                    jue->CuadroTres(turno);

                    if(turno == 'X')
                        turno = 'O';
                        else
                        turno='X';


                        }
                    }


                    if(ymouse>=300 && ymouse<=600){
                        if(xmouse>=0 && xmouse<=300){
                        jue->CuadroCuatro(turno);
                            contador++;

                            if(turno == 'X')
                        turno = 'O';
                        else
                        turno='X';

                            }

                        else if(xmouse>=300 && xmouse<=600){
                            jue->CuadroCinco(turno);
                            contador++;
                            if(turno == 'X')
                            turno = 'O';
                            else
                            turno='X';

                            }


                else if(xmouse>=600 && xmouse<=900){
                        jue->CuadroSeis(turno);
                        contador++;

                        if(turno == 'X')
                        turno = 'O';
                        else
                        turno='X';

                }
                }


                if(ymouse>=600 && ymouse<=900){
                    if(xmouse>=0 && xmouse<=300){
                        jue->CuadroSiete(turno);
                        contador++;

                        if(turno == 'X')
                        turno = 'O';
                        else
                        turno='X';

                }

                else if(xmouse>=300 && xmouse<=600){
                            contador++;
                        jue->CuadroOcho(turno);

                        if(turno == 'X')
                        turno = 'O';
                        else
                        turno='X';
                        }

                else if(xmouse>=600 && xmouse<=900){
                        contador++;
                            jue->CuadroNueve(turno);

                            if(turno == 'X')
                        turno = 'O';
                        else
                        turno='X';
                            }
                }


                gano();

}


void jugar(){

    sf::Texture tablero, x, o;
    sf::Sprite stablero, sx, so;


    tablero.loadFromFile("tablero.png");
    stablero.setTexture(tablero);




    sf::Vector2i screenDimensions(900,900);
    sf::RenderWindow window(sf::VideoMode(screenDimensions.x, screenDimensions.y), "Juego");




     while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                window.close();
                window.clear();

                }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape){
                window.close();
                window.clear();
                }




                 if(event.type==sf::Event::MouseButtonPressed && event.mouseButton.button==sf::Mouse::Left){
                            click=true;

                    }


                if(event.type==sf::Event::MouseMoved){
                            xmouse=event.mouseMove.x;
                            ymouse=event.mouseMove.y;
                    }
                }




                    window.clear();


                    if(click){

                    dibujar();
                    click=false;

                    }


                window.draw(stablero);
                window.draw(jue->sc1);
                window.draw(jue->sc2);
                window.draw(jue->sc3);
                window.draw(jue->sc4);
                window.draw(jue->sc5);
                window.draw(jue->sc6);
                window.draw(jue->sc7);
                window.draw(jue->sc8);
                window.draw(jue->sc9);
                window.draw(text);
                window.display();

    }
mus.stop();

}
void instrucciones(){


        sf::RenderWindow window(sf::VideoMode(800,600), "Juego");
        sf::Texture instru;
        sf::Sprite sinstru;


        instru.loadFromFile("Instrucciones.png");
        sinstru.setTexture(instru);


        while (window.isOpen()){
        sf::Event event;


            while (window.pollEvent(event))
        {
                    if (event.type == sf::Event::Closed)
                    return;

                      if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                          window.close();

        }


        window.clear();
        window.draw(sinstru);
        window.display();
        }

}


void menu (){


    sf::Vector2i screenDimensions(800,600);
    sf::RenderWindow window(sf::VideoMode(screenDimensions.x, screenDimensions.y), "Juego");


    sf::Texture menu;
    sf::Sprite smenu;
    sf::Music musica;

    musica.openFromFile("musica.wav");

    mus.openFromFile("OtraMusica.wav");


    menu.loadFromFile("Menu.png");
    smenu.setTexture(menu);



    int opcion = 1;

     while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                window.close();

                     musica.play();

        if(event.type==sf::Event::KeyPressed && event.key.code==sf::Keyboard::Num1)
        {

            musica.stop();
            mus.play();

            jugar();

        }
        if(event.type==sf::Event::KeyPressed && event.key.code==sf::Keyboard::Num2)
        {
        instrucciones();
        }
        if(event.type==sf::Event::KeyPressed && event.key.code==sf::Keyboard::Num3)
        {
        exit(0);
        }

        }

        window.clear();
        window.draw(smenu);
        window.display();



}
}

int main()
{

    menu();

    return 0;
}
