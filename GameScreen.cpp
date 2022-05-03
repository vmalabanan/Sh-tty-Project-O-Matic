//
// Created by vanes on 1/11/2022.
//

#include "GameScreen.h"

GameScreen::GameScreen() {

}

GameScreen::GameScreen(GameScreenName screenName) : States() {
    switch (screenName)
    {
        case SPLASH_SCREEN:
            screen = SPLASH_SCREEN;
            splashScreen();
            break;
        case BSOD_SCREEN:
            screen = BSOD_SCREEN;
            BSODScreen();
            break;
        case INTRO_SCREEN_BLANK:
            screen = INTRO_SCREEN_BLANK;
            introScreenBlank();
            break;
        case INTRO_SCREEN_A:
            screen = INTRO_SCREEN_A;
            introScreenA();
            break;
        case INTRO_SCREEN_B:
            screen = INTRO_SCREEN_B;
            introScreenB();
            break;
        case INTRO_SCREEN_C:
            screen = INTRO_SCREEN_C;
            introScreenC();
            break;
        case INTRO_SCREEN_C_W_BUTTON:
            screen = INTRO_SCREEN_C_W_BUTTON;
            introScreenCwButton();
            break;
        case PHONE_GAME_SCREEN:
            screen = PHONE_GAME_SCREEN;
            phoneGameScreen();
            break;
        case PHONE_GAME_SCREEN_2A:
            screen = PHONE_GAME_SCREEN_2A;
            phoneGameScreen2a();
            break;
        case PHONE_GAME_SCREEN_2B:
            screen = PHONE_GAME_SCREEN_2B;
            phoneGameScreen2b();
            break;
        case PHONE_GAME_SCREEN_2C:
            screen = PHONE_GAME_SCREEN_2C;
            phoneGameScreen2c();
            break;
        case PHONE_GAME_SCREEN_2D:
            screen = PHONE_GAME_SCREEN_2D;
            phoneGameScreen2d();
            break;
        case PHONE_GAME_SCREEN_2E:
            screen = PHONE_GAME_SCREEN_2E;
            phoneGameScreen2e();
            break;
        case PHONE_GAME_SCREEN_2F:
            screen = PHONE_GAME_SCREEN_2F;
            phoneGameScreen2f();
            break;
        case PHONE_GAME_SCREEN_2F_W_BUTTON:
            screen = PHONE_GAME_SCREEN_2F_W_BUTTON;
            phoneGameScreen2fwButton();
            break;
        case CHECK_IN_SCREEN_BLANK:
            screen = CHECK_IN_SCREEN_BLANK;
            checkInScreenBlank();
            break;
        case CHECK_IN_SCREEN_A:
            screen = CHECK_IN_SCREEN_A;
            checkInScreenA();
            break;
        case CHECK_IN_SCREEN_B:
            screen = CHECK_IN_SCREEN_B;
            checkInScreenB();
            break;
        case CHECK_IN_SCREEN_B_W_1_BUTTON:
            screen = CHECK_IN_SCREEN_B_W_1_BUTTON;
            checkInScreenBw1Button();
            break;
        case CHECK_IN_SCREEN_B_W_2_BUTTONS:
            screen = CHECK_IN_SCREEN_B_W_2_BUTTONS;
            checkInScreenBw2Buttons();
            break;
        case CHECK_IN_SCREEN_YES_BLANK:
            screen = CHECK_IN_SCREEN_YES_BLANK;
            checkInScreenYesBlank();
            break;
        case CHECK_IN_SCREEN_YES:
            screen = CHECK_IN_SCREEN_YES;
            checkInScreenYes();
            break;
        case CHECK_IN_SCREEN_NO_BLANK:
            screen = CHECK_IN_SCREEN_NO_BLANK;
            checkInScreenNoBlank();
            break;
        case CHECK_IN_SCREEN_NO_A:
            screen = CHECK_IN_SCREEN_NO_A;
            checkInScreenNoA();
            break;
        case CHECK_IN_SCREEN_NO_B:
            screen = CHECK_IN_SCREEN_NO_B;
            checkInScreenNoB();
            break;
        case NEXT_GAME_INTRO_SCREEN_BLANK:
            screen = NEXT_GAME_INTRO_SCREEN_BLANK;
            nextGameIntroScreenBlank();
            break;
        case NEXT_GAME_INTRO_SCREEN_A:
            screen = NEXT_GAME_INTRO_SCREEN_A;
            nextGameIntroScreenA();
            break;
        case NEXT_GAME_INTRO_SCREEN_B:
            screen = NEXT_GAME_INTRO_SCREEN_B;
            nextGameIntroScreenB();
            break;
        case NEXT_GAME_INTRO_SCREEN_B_W_BUTTON:
            screen = NEXT_GAME_INTRO_SCREEN_B_W_BUTTON;
            nextGameIntroScreenBwButton();
            break;
        case GAME_2_SCREEN_A:
            screen = GAME_2_SCREEN_A;
            game2A();
            break;
        case GAME_2_SCREEN_A_NO_BUTTON:
            screen = GAME_2_SCREEN_A_NO_BUTTON;
            game2ANoButton();
            break;
        case GAME_2_SCREEN_B:
            screen = GAME_2_SCREEN_B;
            game2B();
            break;
        case GAME_2_SCREEN_C:
            screen = GAME_2_SCREEN_C;
            game2C();
            break;
        case GAME_2_SCREEN_C_BLANK:
            screen = GAME_2_SCREEN_C_BLANK;
            game2CBlank();
            break;
        case GAME_2_SCREEN_D:
            screen = GAME_2_SCREEN_D;
            game2D();
            break;
        case GAME_2_SCREEN_E:
            screen = GAME_2_SCREEN_E;
            game2E();
            break;
        case GAME_2_SCREEN_F:
            screen = GAME_2_SCREEN_F;
            game2F();
            break;
        case GAME_2_SCREEN_G:
            screen = GAME_2_SCREEN_G;
            game2G();
            break;
        case GAME_2_SCREEN_H:
            screen = GAME_2_SCREEN_H;
            game2H();
            break;
        case GAME_2_SCREEN_I:
            screen = GAME_2_SCREEN_I;
            game2I();
            break;
        case GAME_2_SCREEN_J:
            screen = GAME_2_SCREEN_J;
            game2J();
            break;
        case GAME_2_SCREEN_J_BLANK:
            screen = GAME_2_SCREEN_J_BLANK;
            game2JBlank();
            break;
        case GAME_2_SCREEN_K:
            screen = GAME_2_SCREEN_K;
            game2K();
            break;
        case GAME_2_SCREEN_L:
            screen = GAME_2_SCREEN_L;
            game2L();
            break;
        case GAME_2_SCREEN_M:
            screen = GAME_2_SCREEN_M;
            game2M();
            break;
        case GAME_2_SCREEN_M_W_BUTTON:
            screen = GAME_2_SCREEN_M_W_BUTTON;
            game2MwButton();
            break;
        case GAME_2_SCREEN_N:
            screen = GAME_2_SCREEN_N;
            game2N();
            break;
        case GAME_2_SCREEN_N_W_BUTTON:
            screen = GAME_2_SCREEN_N_W_BUTTON;
            game2NwButton();
            break;
        case GAME_2_SCREEN_O:
            screen = GAME_2_SCREEN_O;
            game2O();
            break;
        case GAME_2_SCREEN_O_W_BUTTON:
            screen = GAME_2_SCREEN_O_W_BUTTON;
            game2OwButton();
            break;
        case GAME_2_SCREEN_P:
            screen = GAME_2_SCREEN_P;
            game2P();
            break;
        case GAME_2_SCREEN_P_W_BUTTON:
            screen = GAME_2_SCREEN_P_W_BUTTON;
            game2PwButton();
            break;
        case GAME_2_SCREEN_Q:
            screen = GAME_2_SCREEN_Q;
            game2Q();
            break;
        case GAME_2_SCREEN_Q_W_BUTTON:
            screen = GAME_2_SCREEN_Q_W_BUTTON;
            game2QwButton();
            break;
        case GAME_2_SCREEN_R:
            screen = GAME_2_SCREEN_R;
            game2R();
            break;
        case GAME_2_SCREEN_R_W_BUTTON:
            screen = GAME_2_SCREEN_R_W_BUTTON;
            game2RwButton();
            break;
        case GAME_2_SCREEN_S:
            screen = GAME_2_SCREEN_S;
            game2S();
            break;
        case GAME_2_SCREEN_S_W_BUTTON:
            screen = GAME_2_SCREEN_S_W_BUTTON;
            game2SwButton();
            break;
        case GAME_2_SCREEN_T:
            screen = GAME_2_SCREEN_T;
            game2T();
            break;
        case GAME_2_SCREEN_T_W_BUTTON:
            screen = GAME_2_SCREEN_T_W_BUTTON;
            game2TwButton();
            break;
        case GAME_2_SCREEN_U:
            screen = GAME_2_SCREEN_U;
            game2U();
            break;
        case GAME_2_SCREEN_U_W_BUTTON:
            screen = GAME_2_SCREEN_U_W_BUTTON;
            game2UwButton();
            break;
        case GAME_2_SCREEN_V:
            screen = GAME_2_SCREEN_M;
            game2V();
            break;
        case GAME_2_SCREEN_V_W_BUTTON:
            screen = GAME_2_SCREEN_V_W_BUTTON;
            game2VwButton();
            break;
        case GAME_2_SCREEN_W:
            screen = GAME_2_SCREEN_W;
            game2W();
            break;
        case GAME_2_SCREEN_W_W_BUTTON:
            screen = GAME_2_SCREEN_W_W_BUTTON;
            game2WwButton();
            break;
        case CHECK_IN_2_SCREEN_BLANK:
            screen = CHECK_IN_2_SCREEN_BLANK;
            checkInScreen2Blank();
            break;
        case CHECK_IN_2_SCREEN_A:
            screen = CHECK_IN_2_SCREEN_A;
            checkInScreen2A();
            break;
        case CHECK_IN_2_SCREEN_B:
            screen = CHECK_IN_2_SCREEN_B;
            checkInScreen2B();
            break;
        case CHECK_IN_2_SCREEN_B_BLANK:
            screen = CHECK_IN_2_SCREEN_B_BLANK;
            checkInScreen2BBlank();
            break;
        case CHECK_IN_2_SCREEN_C:
            screen = CHECK_IN_2_SCREEN_C;
            checkInScreen2C();
            break;
        case CHECK_IN_2_SCREEN_D:
            screen = CHECK_IN_2_SCREEN_D;
            checkInScreen2D();
            break;
        case CHECK_IN_2_SCREEN_D_W_BUTTON:
            screen = CHECK_IN_2_SCREEN_D_W_BUTTON;
            checkInScreen2DwButton();
            break;
        case POEM_SCREEN_A:
            screen = POEM_SCREEN_A;
            poemA();
            break;
        case POEM_SCREEN_B:
            screen = POEM_SCREEN_B;
            poemB();
            break;
        case POEM_SCREEN_C:
            screen = POEM_SCREEN_C;
            poemC();
            break;
        case POEM_SCREEN_D:
            screen = POEM_SCREEN_D;
            poemD();
            break;
        case POEM_SCREEN_E:
            screen = POEM_SCREEN_E;
            poemE();
            break;
        case POEM_SCREEN_F:
            screen = POEM_SCREEN_F;
            poemF();
            break;
        case POEM_SCREEN_G:
            screen = POEM_SCREEN_G;
            poemG();
            break;
        case POEM_SCREEN_H:
            screen = POEM_SCREEN_H;
            poemH();
            break;
        case POEM_SCREEN_I:
            screen = POEM_SCREEN_I;
            poemI();
            break;
        case POEM_SCREEN_J:
            screen = POEM_SCREEN_J;
            poemJ();
            break;
        case POEM_SCREEN_K:
            screen = POEM_SCREEN_K;
            poemK();
            break;
        case POEM_SCREEN_L:
            screen = POEM_SCREEN_L;
            poemL();
            break;
        case POEM_SCREEN_M:
            screen = POEM_SCREEN_M;
            poemM();
            break;
        case POEM_SCREEN_N:
            screen = POEM_SCREEN_N;
            poemN();
            break;
        case CHECK_IN_3_SCREEN_BLANK:
            screen = CHECK_IN_3_SCREEN_BLANK;
            checkInScreen3Blank();
            break;
        case CHECK_IN_3_SCREEN_A:
            screen = CHECK_IN_3_SCREEN_A;
            checkInScreen3A();
            break;
        case CHECK_IN_3_SCREEN_B:
            screen = CHECK_IN_3_SCREEN_B;
            checkInScreen3B();
            break;
        case CHECK_IN_3_SCREEN_B_BLANK:
            screen = CHECK_IN_3_SCREEN_B_BLANK;
            checkInScreen3BBlank();
            break;
        case CHECK_IN_3_SCREEN_C:
            screen = CHECK_IN_3_SCREEN_C;
            checkInScreen3C();
            break;
        case CHECK_IN_3_SCREEN_D:
            screen = CHECK_IN_3_SCREEN_D;
            checkInScreen3D();
            break;
        case CHECK_IN_3_SCREEN_D_BLANK:
            screen = CHECK_IN_3_SCREEN_D_BLANK;
            checkInScreen3DBlank();
            break;
        case CHECK_IN_3_SCREEN_E:
            screen = CHECK_IN_3_SCREEN_E;
            checkInScreen3E();
            break;
        case CHECK_IN_3_SCREEN_F:
            screen = CHECK_IN_3_SCREEN_F;
            checkInScreen3F();
            break;
        case CHECK_IN_3_SCREEN_G:
            screen = CHECK_IN_3_SCREEN_G;
            checkInScreen3G();
            break;
        case CHECK_IN_3_SCREEN_H:
            screen = CHECK_IN_3_SCREEN_H;
            checkInScreen3H();
            break;
        case CHECK_IN_3_SCREEN_H_W_BUTTON:
            screen = CHECK_IN_3_SCREEN_H_W_BUTTON;
            checkInScreen3HwButton();
            break;
    }
}

void GameScreen::eventHandler(sf::RenderWindow& window, sf::Event event) {
    switch(screen)
    {
        case SPLASH_SCREEN:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case BSOD_SCREEN:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case INTRO_SCREEN_C_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case PHONE_GAME_SCREEN:
            if(!isOn(HIDDEN))
            {
                button1.eventHandler(window, event);
                button2.eventHandler(window, event);
            }
            break;
        case PHONE_GAME_SCREEN_2F_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case CHECK_IN_SCREEN_B_W_2_BUTTONS:
            if(!isOn(HIDDEN))
            {
                button1.eventHandler(window, event);
                button2.eventHandler(window, event);
            }
            break;
        case NEXT_GAME_INTRO_SCREEN_B_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_A:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_M_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_N_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_O_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_P_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_Q_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_R_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_S_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_T_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_U_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_V_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case GAME_2_SCREEN_W_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case CHECK_IN_2_SCREEN_D_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case POEM_SCREEN_N:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
        case CHECK_IN_3_SCREEN_H_W_BUTTON:
            if(!isOn(HIDDEN))
                button1.eventHandler(window, event);
            break;
    }
}


void GameScreen::update() {
    switch(screen)
    {
        case SPLASH_SCREEN:
            button1.update();
            break;
        case BSOD_SCREEN:
            button1.update();
            break;
        case INTRO_SCREEN_C_W_BUTTON:
            button1.update();
            break;
        case PHONE_GAME_SCREEN:
            button1.update();
            button2.update();
            break;
        case PHONE_GAME_SCREEN_2F_W_BUTTON:
            button1.update();
            break;
        case CHECK_IN_SCREEN_B_W_2_BUTTONS:
            button1.update();
            button2.update();
            break;
        case NEXT_GAME_INTRO_SCREEN_B_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_A:
            button1.update();
            break;
        case GAME_2_SCREEN_M_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_N_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_O_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_P_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_Q_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_R_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_S_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_T_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_U_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_V_W_BUTTON:
            button1.update();
            break;
        case GAME_2_SCREEN_W_W_BUTTON:
            button1.update();
            break;
        case CHECK_IN_2_SCREEN_D_W_BUTTON:
            button1.update();
            break;
        case POEM_SCREEN_N:
            button1.update();
            break;
        case CHECK_IN_3_SCREEN_H_W_BUTTON:
            button1.update();
            break;
    }

}

void GameScreen::draw(sf::RenderTarget& window, sf::RenderStates states) const {
    switch(screen)
    {
        case SPLASH_SCREEN:
            window.draw(background1);
            window.draw(image1);
            window.draw(text1);
            window.draw(text2);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case BSOD_SCREEN:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case INTRO_SCREEN_BLANK:
            window.draw(background1);
            break;
        case INTRO_SCREEN_A:
            window.draw(background1);
            break;
        case INTRO_SCREEN_B:
            window.draw(background1);
            break;
        case INTRO_SCREEN_C:
            window.draw(background1);
            break;
        case INTRO_SCREEN_C_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case PHONE_GAME_SCREEN:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            window.draw(button2BG);
            window.draw(button2);
            break;
        case PHONE_GAME_SCREEN_2A:
            window.draw(background1);
            break;
        case PHONE_GAME_SCREEN_2B:
            window.draw(background1);
            break;
        case PHONE_GAME_SCREEN_2C:
            window.draw(background1);
            break;
        case PHONE_GAME_SCREEN_2D:
            window.draw(background1);
            break;
        case PHONE_GAME_SCREEN_2E:
            window.draw(background1);
            break;
        case PHONE_GAME_SCREEN_2F:
            window.draw(background1);
            break;
        case PHONE_GAME_SCREEN_2F_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case CHECK_IN_SCREEN_BLANK:
            window.draw(background1);
            break;
        case CHECK_IN_SCREEN_A:
            window.draw(background1);
            break;
        case CHECK_IN_SCREEN_B:
            window.draw(background1);
            break;
        case CHECK_IN_SCREEN_B_W_1_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case CHECK_IN_SCREEN_B_W_2_BUTTONS:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            window.draw(button2BG);
            window.draw(button2);
            break;
        case CHECK_IN_SCREEN_YES_BLANK:
            window.draw(background1);
            break;
        case CHECK_IN_SCREEN_YES:
            window.draw(background1);
            break;
        case CHECK_IN_SCREEN_NO_BLANK:
            window.draw(background1);
            break;
        case CHECK_IN_SCREEN_NO_A:
            window.draw(background1);
            break;
        case CHECK_IN_SCREEN_NO_B:
            window.draw(background1);
            break;
        case NEXT_GAME_INTRO_SCREEN_BLANK:
            window.draw(background1);
            break;
        case NEXT_GAME_INTRO_SCREEN_A:
            window.draw(background1);
            break;
        case NEXT_GAME_INTRO_SCREEN_B:
            window.draw(background1);
            break;
        case NEXT_GAME_INTRO_SCREEN_B_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_A:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_A_NO_BUTTON:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_B:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_C:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_C_BLANK:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_D:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_E:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_F:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_G:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_H:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_I:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_J:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_J_BLANK:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_K:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_L:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_M:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_M_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_N:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_N_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_O:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_O_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_P:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_P_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_Q:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_Q_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_R:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_R_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_S:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_S_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_T:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_T_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_U:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_U_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_V:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_V_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case GAME_2_SCREEN_W:
            window.draw(background1);
            break;
        case GAME_2_SCREEN_W_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case CHECK_IN_2_SCREEN_BLANK:
            window.draw(background1);
            break;
        case CHECK_IN_2_SCREEN_A:
            window.draw(background1);
            break;
        case CHECK_IN_2_SCREEN_B:
            window.draw(background1);
            break;
        case CHECK_IN_2_SCREEN_B_BLANK:
            window.draw(background1);
            break;
        case CHECK_IN_2_SCREEN_C:
            window.draw(background1);
            break;
        case CHECK_IN_2_SCREEN_D:
            window.draw(background1);
            break;
        case CHECK_IN_2_SCREEN_D_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case POEM_SCREEN_A:
            window.draw(background1);
            break;
        case POEM_SCREEN_B:
            window.draw(background1);
            break;
        case POEM_SCREEN_C:
            window.draw(background1);
            break;
        case POEM_SCREEN_D:
            window.draw(background1);
            break;
        case POEM_SCREEN_E:
            window.draw(background1);
            break;
        case POEM_SCREEN_F:
            window.draw(background1);
            break;
        case POEM_SCREEN_G:
            window.draw(background1);
            break;
        case POEM_SCREEN_H:
            window.draw(background1);
            break;
        case POEM_SCREEN_I:
            window.draw(background1);
            break;
        case POEM_SCREEN_J:
            window.draw(background1);
            break;
        case POEM_SCREEN_K:
            window.draw(background1);
            break;
        case POEM_SCREEN_L:
            window.draw(background1);
            break;
        case POEM_SCREEN_M:
            window.draw(background1);
            break;
        case POEM_SCREEN_N:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;
        case CHECK_IN_3_SCREEN_BLANK:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_A:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_B:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_B_BLANK:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_C:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_D:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_D_BLANK:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_E:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_F:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_G:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_H:
            window.draw(background1);
            break;
        case CHECK_IN_3_SCREEN_H_W_BUTTON:
            window.draw(background1);
            window.draw(button1BG);
            window.draw(button1);
            break;



}
}

void GameScreen::splashScreen() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(ROUNDED_RECT));
    background1.setPosition(gameWindowWidth * 0.023, gameWindowHeight * 0.038);

    // Title
    image1.setTexture(Assets<sf::Texture>::getAsset(TITLE));
    image1.setPosition(gameWindowWidth * 0.135, gameWindowHeight * 0.14);

    // Text
    text1.setFont(Assets<sf::Font>::getAsset(DOS));
    text1.setFillColor(sf::Color(77, 77, 77));
    text1.setCharacterSize(19);
//    text1.setStyle(sf::Text::Bold);
    text1.setPosition(sf::Vector2f(gameWindowWidth * 0.17, gameWindowHeight * 0.43));
    text1.setString("Sh-tty Project O-Matic [Version 3.3.776]");

    // Text
    text2.setFont(Assets<sf::Font>::getAsset(DOS));
    text2.setFillColor(sf::Color(77, 77, 77));
    text2.setCharacterSize(19);
    text2.setPosition(sf::Vector2f(gameWindowWidth * 0.17, gameWindowHeight * 0.46));
    text2.setString("Copyright(c) 2022 Larry the Large Studios");

    // Button
    button1 = Button("Start", 24, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.4625, gameWindowHeight * 0.65), sf::Vector2f(120, 55), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.445, gameWindowHeight * 0.6375));

    // Button bg
    button1BG.setSize(sf::Vector2f(120, 55));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.455, gameWindowHeight * 0.6525));
    button1BG.setFillColor(sf::Color(200, 183, 183));
}

void GameScreen::BSODScreen() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(BSOD));
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button
    button1 = Button("here", 32, sf::Color(0, 0, 170), sf::Vector2f(gameWindowWidth * 0.425, gameWindowHeight * 0.6975), sf::Vector2f(120, 55), sf::Color(200, 183, 183), sf::Vector2f(gameWindowWidth * 0.4075, gameWindowHeight * 0.69));

    // Button bg
    button1BG.setSize(sf::Vector2f(119, 59));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.42, gameWindowHeight * 0.7025));
    button1BG.setFillColor(sf::Color(125, 125, 255));

}

void GameScreen::introScreenBlank() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(INTRO_BLANK));
    Assets<sf::Texture>::assets[INTRO_BLANK].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::introScreenA() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(INTRO_A));
    Assets<sf::Texture>::assets[INTRO_A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::introScreenB() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(INTRO_B));
    Assets<sf::Texture>::assets[INTRO_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::introScreenC() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(INTRO_C));
    Assets<sf::Texture>::assets[INTRO_C].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::introScreenCwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(INTRO_C));
    Assets<sf::Texture>::assets[INTRO_C].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.69, gameWindowHeight * 0.8325), sf::Vector2f(100, 54), sf::Color(200, 183, 183), sf::Vector2f(gameWindowWidth * 0.6725, gameWindowHeight * 0.8175));

    // Button bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.6825, gameWindowHeight * 0.8325));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::phoneGameScreen() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(FIRST_GAME));
    Assets<sf::Texture>::assets[FIRST_GAME].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Snooze", 19, sf::Color(255, 255, 255), sf::Vector2f(gameWindowWidth * 0.48, gameWindowHeight * 0.47), sf::Vector2f(147, 44), sf::Color(252, 140, 2), sf::Vector2f(gameWindowWidth * 0.4525, gameWindowHeight * 0.455));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(147, 44));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.4625, gameWindowHeight * 0.47));
    button1BG.setFillColor(sf::Color(170, 68, 0));

    // Button2
    button2 = Button("Stop", 15, sf::Color(255, 255, 255), sf::Vector2f(gameWindowWidth * 0.4935, gameWindowHeight * 0.71), sf::Vector2f(73, 35), sf::Color(172, 147, 147), sf::Vector2f(gameWindowWidth * 0.48, gameWindowHeight * 0.7));

    // Button2 bg
    button2BG.setSize(sf::Vector2f(73, 35));
    button2BG.setPosition(sf::Vector2f(gameWindowWidth * 0.4865, gameWindowHeight * 0.71));
    button2BG.setFillColor(sf::Color(145, 111, 111));


}

void GameScreen::phoneGameScreen2a() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(FIRST_GAME_2A));
    Assets<sf::Texture>::assets[FIRST_GAME_2A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::phoneGameScreen2b() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(FIRST_GAME_2B));
    Assets<sf::Texture>::assets[FIRST_GAME_2B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::phoneGameScreen2c() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(FIRST_GAME_2C));
    Assets<sf::Texture>::assets[FIRST_GAME_2C].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::phoneGameScreen2d() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(FIRST_GAME_2D));
    Assets<sf::Texture>::assets[FIRST_GAME_2D].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::phoneGameScreen2e() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(FIRST_GAME_2E));
    Assets<sf::Texture>::assets[FIRST_GAME_2E].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::phoneGameScreen2f() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(FIRST_GAME_2F));
    Assets<sf::Texture>::assets[FIRST_GAME_2F].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::phoneGameScreen2fwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(FIRST_GAME_2F));
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button
    button1 = Button("Next", 19, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.66, gameWindowHeight * 0.49), sf::Vector2f(90, 45), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.6425, gameWindowHeight * 0.4775));

    // Button bg
    button1BG.setSize(sf::Vector2f(90, 45));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.65, gameWindowHeight * 0.49));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::checkInScreenBlank() {
    introScreenBlank();
}

void GameScreen::checkInScreenA() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_A));
    Assets<sf::Texture>::assets[CHECK_IN_A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::checkInScreenB() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_B));
    Assets<sf::Texture>::assets[CHECK_IN_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::checkInScreenBw1Button() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_B));
    Assets<sf::Texture>::assets[CHECK_IN_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Yes", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.40, gameWindowHeight * 0.70), sf::Vector2f(82, 54), sf::Color(200, 183, 183), sf::Vector2f(gameWindowWidth * 0.385, gameWindowHeight * 0.685));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(82, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.395, gameWindowHeight * 0.70));
    button1BG.setFillColor(sf::Color(172, 147, 147));

}

void GameScreen::checkInScreenBw2Buttons() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_B));
    Assets<sf::Texture>::assets[CHECK_IN_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Yes", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.40, gameWindowHeight * 0.70), sf::Vector2f(82, 54), sf::Color(200, 183, 183), sf::Vector2f(gameWindowWidth * 0.385, gameWindowHeight * 0.685));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(82, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.395, gameWindowHeight * 0.70));
    button1BG.setFillColor(sf::Color(172, 147, 147));

    // Button2
    button2 = Button("No", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.56, gameWindowHeight * 0.70), sf::Vector2f(70, 54), sf::Color(200, 183, 183), sf::Vector2f(gameWindowWidth * 0.5425, gameWindowHeight * 0.685));

    // Button2 bg
    button2BG.setSize(sf::Vector2f(70, 54));
    button2BG.setPosition(sf::Vector2f(gameWindowWidth * 0.5525, gameWindowHeight * 0.70));
    button2BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::checkInScreenYesBlank() {
    introScreenBlank();
}

void GameScreen::checkInScreenYes() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_YES));
    Assets<sf::Texture>::assets[CHECK_IN_YES].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::checkInScreenNoBlank() {
    introScreenBlank();
}

void GameScreen::checkInScreenNoA() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_NO_A));
    Assets<sf::Texture>::assets[CHECK_IN_NO_A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::checkInScreenNoB() {
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_NO_B));
    Assets<sf::Texture>::assets[CHECK_IN_NO_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::nextGameIntroScreenBlank() {
    introScreenBlank();
}

void GameScreen::nextGameIntroScreenA() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(NEXT_GAME_INTRO_A));
    Assets<sf::Texture>::assets[NEXT_GAME_INTRO_A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::nextGameIntroScreenB() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(NEXT_GAME_INTRO_B));
    Assets<sf::Texture>::assets[NEXT_GAME_INTRO_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::nextGameIntroScreenBwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(NEXT_GAME_INTRO_B));
    Assets<sf::Texture>::assets[NEXT_GAME_INTRO_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.67, gameWindowHeight * 0.68), sf::Vector2f(100, 54), sf::Color(200, 183, 183), sf::Vector2f(gameWindowWidth * 0.6525, gameWindowHeight * 0.665));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.6625, gameWindowHeight * 0.68));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2A() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_A));
    Assets<sf::Texture>::assets[GAME_2_A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Shuffle", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.21, gameWindowHeight * 0.72), sf::Vector2f(135, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.1925, gameWindowHeight * 0.705));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(135, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.2025, gameWindowHeight * 0.72));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2ANoButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_A));
    Assets<sf::Texture>::assets[GAME_2_A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::game2B() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_B));
    Assets<sf::Texture>::assets[GAME_2_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2C() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_C));
    Assets<sf::Texture>::assets[GAME_2_C].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2CBlank() {
    game2ANoButton();
}

void GameScreen::game2D() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_D));
    Assets<sf::Texture>::assets[GAME_2_D].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2E() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_E));
    Assets<sf::Texture>::assets[GAME_2_E].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2F() { // NEED TO DRAW CARD HERE!!!!
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_F));
    Assets<sf::Texture>::assets[GAME_2_F].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2G() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_G));
    Assets<sf::Texture>::assets[GAME_2_G].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2H() {  // NEED TO DRAW CARD HERE!!!!
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_H));
    Assets<sf::Texture>::assets[GAME_2_H].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2I() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_I));
    Assets<sf::Texture>::assets[GAME_2_I].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2J() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_J));
    Assets<sf::Texture>::assets[GAME_2_J].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2JBlank() {
    game2I();
}

void GameScreen::game2K() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_K));
    Assets<sf::Texture>::assets[GAME_2_K].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2L() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_L));
    Assets<sf::Texture>::assets[GAME_2_L].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2M() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_M));
    Assets<sf::Texture>::assets[GAME_2_M].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2MwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_M));
    Assets<sf::Texture>::assets[GAME_2_M].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2N() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_N));
    Assets<sf::Texture>::assets[GAME_2_N].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2NwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_N));
    Assets<sf::Texture>::assets[GAME_2_N].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2O() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_O));
    Assets<sf::Texture>::assets[GAME_2_O].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2OwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_O));
    Assets<sf::Texture>::assets[GAME_2_O].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2P() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_P));
    Assets<sf::Texture>::assets[GAME_2_P].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2PwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_P));
    Assets<sf::Texture>::assets[GAME_2_P].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2Q() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_Q));
    Assets<sf::Texture>::assets[GAME_2_Q].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2QwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_Q));
    Assets<sf::Texture>::assets[GAME_2_Q].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2R() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_R));
    Assets<sf::Texture>::assets[GAME_2_R].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2RwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_R));
    Assets<sf::Texture>::assets[GAME_2_R].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2S() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_S));
    Assets<sf::Texture>::assets[GAME_2_S].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2SwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_S));
    Assets<sf::Texture>::assets[GAME_2_S].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2T() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_T));
    Assets<sf::Texture>::assets[GAME_2_T].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2TwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_T));
    Assets<sf::Texture>::assets[GAME_2_T].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2U() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_U));
    Assets<sf::Texture>::assets[GAME_2_U].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2UwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_U));
    Assets<sf::Texture>::assets[GAME_2_U].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2V() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_V));
    Assets<sf::Texture>::assets[GAME_2_V].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2VwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_V));
    Assets<sf::Texture>::assets[GAME_2_V].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::game2W() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_W));
    Assets<sf::Texture>::assets[GAME_2_W].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::game2WwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(GAME_2_W));
    Assets<sf::Texture>::assets[GAME_2_W].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.875, gameWindowHeight * 0.87), sf::Vector2f(100, 54), sf::Color(227, 219, 219), sf::Vector2f(gameWindowWidth * 0.8575, gameWindowHeight * 0.855));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.8675, gameWindowHeight * 0.87));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::checkInScreen2Blank() {
    introScreenBlank();
}

void GameScreen::checkInScreen2A() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_2_A));
    Assets<sf::Texture>::assets[CHECK_IN_2_A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen2B(){
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_2_B));
    Assets<sf::Texture>::assets[CHECK_IN_2_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen2BBlank() {
    introScreenBlank();
}

void GameScreen::checkInScreen2C() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_2_C));
    Assets<sf::Texture>::assets[CHECK_IN_2_C].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen2D() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_2_D));
    Assets<sf::Texture>::assets[CHECK_IN_2_D].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen2DwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_2_D));
    Assets<sf::Texture>::assets[CHECK_IN_2_D].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.77, gameWindowHeight * 0.64), sf::Vector2f(100, 54), sf::Color(200, 183, 183), sf::Vector2f(gameWindowWidth * 0.7525, gameWindowHeight * 0.625));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.7625, gameWindowHeight * 0.64));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}

void GameScreen::poemA() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_A));
    Assets<sf::Texture>::assets[POEM_A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemB() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_B));
    Assets<sf::Texture>::assets[POEM_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemC() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_C));
    Assets<sf::Texture>::assets[POEM_C].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemD() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_D));
    Assets<sf::Texture>::assets[POEM_D].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemE() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_E));
    Assets<sf::Texture>::assets[POEM_E].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemF() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_F));
    Assets<sf::Texture>::assets[POEM_F].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemG() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_G));
    Assets<sf::Texture>::assets[POEM_G].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemH() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_H));
    Assets<sf::Texture>::assets[POEM_H].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemI() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_I));
    Assets<sf::Texture>::assets[POEM_I].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemJ() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_J));
    Assets<sf::Texture>::assets[POEM_J].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemK() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_K));
    Assets<sf::Texture>::assets[POEM_K].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemL() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_L));
    Assets<sf::Texture>::assets[POEM_L].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemM() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_M));
    Assets<sf::Texture>::assets[POEM_M].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);
}

void GameScreen::poemN() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(POEM_N));
    Assets<sf::Texture>::assets[POEM_N].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("here", 24, sf::Color(142, 219, 112), sf::Vector2f(gameWindowWidth * 0.745, gameWindowHeight * 0.90), sf::Vector2f(100, 54), sf::Color(51, 51, 51), sf::Vector2f(gameWindowWidth * 0.7275, gameWindowHeight * 0.885));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.7375, gameWindowHeight * 0.90));
    button1BG.setFillColor(sf::Color(26, 26, 26));
}

void GameScreen::checkInScreen3Blank() {
    introScreenBlank();
}

void GameScreen::checkInScreen3A() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_3_A));
    Assets<sf::Texture>::assets[CHECK_IN_3_A].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen3B() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_3_B));
    Assets<sf::Texture>::assets[CHECK_IN_3_B].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen3BBlank() {
    introScreenBlank();
}

void GameScreen::checkInScreen3C() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_3_C));
    Assets<sf::Texture>::assets[CHECK_IN_3_C].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen3D() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_3_D));
    Assets<sf::Texture>::assets[CHECK_IN_3_D].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen3DBlank() {
    introScreenBlank();
}

void GameScreen::checkInScreen3E() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_3_E));
    Assets<sf::Texture>::assets[CHECK_IN_3_E].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen3F() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_3_F));
    Assets<sf::Texture>::assets[CHECK_IN_3_F].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen3G() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_3_G));
    Assets<sf::Texture>::assets[CHECK_IN_3_G].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen3H() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_3_H));
    Assets<sf::Texture>::assets[CHECK_IN_3_H].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

}

void GameScreen::checkInScreen3HwButton() {
    // Background
    background1.setTexture(Assets<sf::Texture>::getAsset(CHECK_IN_3_H));
    Assets<sf::Texture>::assets[CHECK_IN_3_H].setSmooth(true); // Smooth texture
    background1.setPosition((gameWindowWidth - background1.getGlobalBounds().width) / 2, (gameWindowHeight - background1.getGlobalBounds().height) / 2);

    // Button1
    button1 = Button("Next", 21, sf::Color(77, 77, 77), sf::Vector2f(gameWindowWidth * 0.78, gameWindowHeight * 0.84), sf::Vector2f(100, 54), sf::Color(200, 183, 183), sf::Vector2f(gameWindowWidth * 0.7625, gameWindowHeight * 0.825));

    // Button1 bg
    button1BG.setSize(sf::Vector2f(100, 54));
    button1BG.setPosition(sf::Vector2f(gameWindowWidth * 0.7725, gameWindowHeight * 0.84));
    button1BG.setFillColor(sf::Color(172, 147, 147));
}
