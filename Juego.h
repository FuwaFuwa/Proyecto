#ifndef JUEGO_H
#define JUEGO_H


#include <SFML/Graphics.hpp>
    class Juego
    {
    public:
        Juego();
        sf::Texture cuadro1, cuadro2, cuadro3, cuadro4, cuadro5, cuadro6, cuadro7, cuadro8, cuadro9;
        sf::Sprite sc1, sc2, sc3, sc4, sc5, sc6, sc7, sc8, sc9;
        char tablero[3][3];
        char turno;



        void inicializarTablero();
        void texturas();


        void CuadroUno(char turno);
        void CuadroDos(char turno);
        void CuadroTres(char turno);
        void CuadroCuatro(char turno);
        void CuadroCinco(char turno);
        void CuadroSeis(char turno);
        void CuadroSiete(char turno);
        void CuadroOcho(char turno);
        void CuadroNueve(char turno);

        char ganar();

        virtual ~Juego();

    protected:
    private:
    };
#endif // JUEGO_H
