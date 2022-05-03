//
// Created by vanes on 1/11/2022.
//

#ifndef MAIN_CPP_GAMESCREEN_H
#define MAIN_CPP_GAMESCREEN_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Button.h"
#include "States.h"
#include "GameScreenName.h"

class GameScreen : public sf::Drawable, public States {
public:
    GameScreen();
    GameScreen(GameScreenName screenName);

    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    Button button1;
    Button button2;

    sf::Sprite background1;
private:
    sf::Sprite image1;
    sf::Sprite image2;
    sf::Text text1;
    sf::Text text2;
    sf::RectangleShape button1BG;
    sf::RectangleShape button2BG;


    GameScreenName screen;
    void splashScreen();
    void BSODScreen();

    void introScreenBlank();
    void introScreenA();
    void introScreenB();
    void introScreenC();
    void introScreenCwButton();

    void phoneGameScreen();
    void phoneGameScreen2a();
    void phoneGameScreen2b();
    void phoneGameScreen2c();
    void phoneGameScreen2d();
    void phoneGameScreen2e();
    void phoneGameScreen2f();
    void phoneGameScreen2fwButton();

    void checkInScreenBlank();
    void checkInScreenA();
    void checkInScreenB();
    void checkInScreenBw1Button();
    void checkInScreenBw2Buttons();

    void checkInScreenYesBlank();
    void checkInScreenYes();

    void checkInScreenNoBlank();
    void checkInScreenNoA();
    void checkInScreenNoB();

    void nextGameIntroScreenBlank();
    void nextGameIntroScreenA();
    void nextGameIntroScreenB();
    void nextGameIntroScreenBwButton();

    void game2A();
    void game2ANoButton();
    void game2B();
    void game2C();
    void game2CBlank();
    void game2D();
    void game2E();
    void game2F();
    void game2G();
    void game2H();
    void game2I();
    void game2J();
    void game2JBlank();
    void game2K();
    void game2L();
    void game2M();
    void game2MwButton();
    void game2N();
    void game2NwButton();
    void game2O();
    void game2OwButton();
    void game2P();
    void game2PwButton();
    void game2Q();
    void game2QwButton();
    void game2R();
    void game2RwButton();
    void game2S();
    void game2SwButton();
    void game2T();
    void game2TwButton();
    void game2U();
    void game2UwButton();
    void game2V();
    void game2VwButton();
    void game2W();
    void game2WwButton();

    void checkInScreen2Blank();
    void checkInScreen2A();
    void checkInScreen2B();
    void checkInScreen2BBlank();
    void checkInScreen2C();
    void checkInScreen2D();
    void checkInScreen2DwButton();

    void poemA();
    void poemB();
    void poemC();
    void poemD();
    void poemE();
    void poemF();
    void poemG();
    void poemH();
    void poemI();
    void poemJ();
    void poemK();
    void poemL();
    void poemM();
    void poemN();

    void checkInScreen3Blank();
    void checkInScreen3A();
    void checkInScreen3B();
    void checkInScreen3BBlank();
    void checkInScreen3C();
    void checkInScreen3D();
    void checkInScreen3DBlank();
    void checkInScreen3E();
    void checkInScreen3F();
    void checkInScreen3G();
    void checkInScreen3H();
    void checkInScreen3HwButton();

};



#endif //MAIN_CPP_GAMESCREEN_H
