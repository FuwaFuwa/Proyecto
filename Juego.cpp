#include "Juego.h"
#include <iostream>
using namespace std;
Juego::Juego()
{
    //ctor
}

Juego::~Juego()
{
    //dtor
}

void Juego::inicializarTablero(){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        tablero[i][j]=' ';
    }
    }
}


char Juego:: ganar(){
    if(tablero[0][0]=='X'||tablero[0][0]=='O'){
        if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
            if(tablero[0][0]=='X'){
                return 'X';
            }
                else{
                    return 'O';
                    }
}


        if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
                if(tablero[0][0]=='X'){
                    return 'X';
                    }
                        else{
                            return 'O';
                            }

            }

}



        if(tablero[1][1]=='X'||tablero[1][1]=='O'){

            if(tablero[1][1]==tablero[0][0] && tablero[1][1]==tablero[2][2]){
                if(tablero[1][1]=='X'){
                        return 'X';
                        }
                    else{
                    return 'O';
                    }
            }


            if(tablero[1][1]==tablero[1][0] && tablero[1][1]==tablero[1][2]){
                if(tablero[1][1]=='X'){
                    return 'X';
            }
            else{
                return 'O';
                }
            }


            if(tablero[1][1]==tablero[2][0] && tablero[1][1]==tablero[0][2]){
                if(tablero[1][1]=='X'){
                    return 'X';
                }
                else{
                return 'O';
                }
                }


        if(tablero[1][1]==tablero[0][1] && tablero[1][1]==tablero[2][1]){
                if(tablero[1][1]=='X'){
                    return 'X';
                }
            else{
                return 'O';
                }
            }
        }


            if(tablero[2][2]=='X'||tablero[2][2]=='O'){
                    if(tablero[2][2]==tablero[2][0] && tablero[2][2]==tablero[2][1]){
                        if(tablero[2][2]=='X'){
                                return 'X';
                    }else{
                        return 'O';
                }
            }


            if(tablero[2][2]==tablero[0][2] && tablero[2][2]==tablero[1][2]){
                    if(tablero[2][2]=='X'){
                        return 'X';
                    }
                else{
                    return 'O';
                    }
                }
            }


                return 'E';

}







void Juego::CuadroUno(char turno){
this->turno = turno;
if(turno=='O'){

cuadro1.loadFromFile("O.png");
sc1.setTexture(cuadro1);
sc1.setPosition(0,0);
tablero[0][0] = 'O';


}
else{

cuadro1.loadFromFile("X.png");
sc1.setTexture(cuadro1);
sc1.setPosition(0, 0);
tablero[0][0] = 'X';

}
}



void Juego::CuadroDos(char turno){
if(turno=='O'){

cuadro2.loadFromFile("O.png");
sc2.setTexture(cuadro2);
sc2.setPosition(300, 0);
tablero[0][1] = 'O';
}
else{

cuadro2.loadFromFile("X.png");
sc2.setTexture(cuadro2);
sc2.setPosition(300, 0);
tablero[0][1] = 'X';
}
}



void Juego::CuadroTres(char turno){
if(turno=='O'){

cuadro3.loadFromFile("O.png");
sc3.setTexture(cuadro3);
sc3.setPosition(600, 0);
tablero[0][2] = 'O';
}
else{

cuadro3.loadFromFile("X.png");
sc3.setTexture(cuadro3);
sc3.setPosition(600, 0);
tablero[0][2] = 'X';
}
}



void Juego::CuadroCuatro(char turno){
if(turno=='O'){

cuadro4.loadFromFile("O.png");
sc4.setTexture(cuadro4);
sc4.setPosition(0, 300);
tablero[1][0] = 'O';
}
else{

cuadro4.loadFromFile("X.png");
sc4.setTexture(cuadro4);
sc4.setPosition(0, 300);
tablero[1][0] = 'X';
}
}



void Juego::CuadroCinco(char turno){
if(turno=='O'){

cuadro5.loadFromFile("O.png");
sc5.setTexture(cuadro5);
sc5.setPosition(300, 300);
tablero[1][1] = 'O';
}
else{

cuadro5.loadFromFile("X.png");
sc5.setTexture(cuadro5);
sc5.setPosition(300, 300);
tablero[1][1] = 'X';
}
}


void Juego::CuadroSeis(char turno){
if(turno=='O'){

cuadro6.loadFromFile("O.png");
sc6.setTexture(cuadro6);
sc6.setPosition(600, 300);
tablero[1][2] = 'O';
}
else{

cuadro6.loadFromFile("X.png");
sc6.setTexture(cuadro6);
sc6.setPosition(600, 300);
tablero[1][2] = 'X';
}
}



void Juego::CuadroSiete(char turno){
if(turno=='O'){

cuadro7.loadFromFile("O.png");
sc7.setTexture(cuadro7);
sc7.setPosition(0, 600);
tablero[2][0] = 'O';
}
else{

cuadro7.loadFromFile("X.png");
sc7.setTexture(cuadro7);
sc7.setPosition(0, 600);
tablero[2][0] = 'X';
}
}



void Juego::CuadroOcho(char turno){
if(turno=='O'){

cuadro8.loadFromFile("O.png");
sc8.setTexture(cuadro8);
sc8.setPosition(300, 600);
tablero[2][1] = 'O';
}
else{

cuadro8.loadFromFile("X.png");
sc8.setTexture(cuadro8);
sc8.setPosition(300, 600);
tablero[2][1] = 'X';
}
}



void Juego::CuadroNueve(char turno){
if(turno=='O'){

cuadro9.loadFromFile("O.png");
sc9.setTexture(cuadro9);
sc9.setPosition(600, 600);
tablero[2][2] = 'O';
}
else{

cuadro9.loadFromFile("X.png");
sc9.setTexture(cuadro9);
sc9.setPosition(600, 600);
tablero[2][2] = 'X';
}
}
