//
// Created by vanes on 1/11/2022.
//

#include "ShttyProjectOMatic.h"
#include <ctime>

ShttyProjectOMatic::ShttyProjectOMatic(){

    // Create window
    unsigned int gameWindowWidth = 1440, gameWindowHeight = 810;
    sf::RenderWindow window(sf::VideoMode(gameWindowWidth, gameWindowHeight, 32), "Sh-tty Project O-Matic", sf::Style::Close);

    // Limit framerate to 60 fps
    window.setFramerateLimit(60);

    // Bind sounds
    Sounds::bindSounds();

    // Declare music object
    sf::Music redAlert;
    redAlert.openFromFile("Assets/Sounds/red-alert-klaxon.wav");

    // Create deck for shuffling
    Deck deck;

    // Seed random number generator
    srand(time(nullptr));

    // Shuffle deck
    deck.shuffle();

    // Create linked list of cards
    DoublyLinkedList<Card> list;

    // Push shuffled deck into linked list
    for (int i = 0; i < 52; ++i) {
        list.push_back(deck.deck[i]);
    }

    // Top and bottom cards of the deck
    Card topCard;
    Card bottomCard;

    topCard = list.front();
    bottomCard = list.back();

    // Calculate/store rank and suit of top and bottom cards
    Rank topCardRank, bottomCardRank;
    Suit topCardSuit, bottomCardSuit;

    topCardRank = topCard.getRank();
    bottomCardRank = bottomCard.getRank();
    topCardSuit = topCard.getSuit();
    bottomCardSuit = bottomCard.getSuit();

    drawRank(topCardRank, topCardSuit, bottomCardRank, bottomCardSuit);
    drawSuit(topCardSuit, bottomCardSuit);

    // Declare game screen objects
    GameScreen splashScreen(SPLASH_SCREEN);
    GameScreen BSODScreen(BSOD_SCREEN);

    GameScreen introScreenBlank(INTRO_SCREEN_BLANK);
    GameScreen introScreenA(INTRO_SCREEN_A);
    GameScreen introScreenB(INTRO_SCREEN_B);
    GameScreen introScreenC(INTRO_SCREEN_C);
    GameScreen introScreenCwButton(INTRO_SCREEN_C_W_BUTTON);

    GameScreen phoneGameScreen(PHONE_GAME_SCREEN);
    GameScreen phoneGameScreen2A(PHONE_GAME_SCREEN_2A);
    GameScreen phoneGameScreen2B(PHONE_GAME_SCREEN_2B);
    GameScreen phoneGameScreen2C(PHONE_GAME_SCREEN_2C);
    GameScreen phoneGameScreen2D(PHONE_GAME_SCREEN_2D);
    GameScreen phoneGameScreen2E(PHONE_GAME_SCREEN_2E);
    GameScreen phoneGameScreen2F(PHONE_GAME_SCREEN_2F);
    GameScreen phoneGameScreen2FwButton(PHONE_GAME_SCREEN_2F_W_BUTTON);

    GameScreen checkInScreenBlank(CHECK_IN_SCREEN_BLANK);
    GameScreen checkInScreenA(CHECK_IN_SCREEN_A);
    GameScreen checkInScreenB(CHECK_IN_SCREEN_B);
    GameScreen checkInScreenBw1Button(CHECK_IN_SCREEN_B_W_1_BUTTON);
    GameScreen checkInScreenBw2Buttons(CHECK_IN_SCREEN_B_W_2_BUTTONS);

    GameScreen checkInScreenYesBlank(CHECK_IN_SCREEN_YES_BLANK);
    GameScreen checkInScreenYes(CHECK_IN_SCREEN_YES);

    GameScreen checkInScreenNoBlank(CHECK_IN_SCREEN_NO_BLANK);
    GameScreen checkInScreenNoA(CHECK_IN_SCREEN_NO_A);
    GameScreen checkInScreenNoB(CHECK_IN_SCREEN_NO_B);

    GameScreen nextGameIntroScreenBlank(NEXT_GAME_INTRO_SCREEN_BLANK);
    GameScreen nextGameIntroScreenA(NEXT_GAME_INTRO_SCREEN_A);
    GameScreen nextGameIntroScreenB(NEXT_GAME_INTRO_SCREEN_B);
    GameScreen nextGameIntroScreenBwButton(NEXT_GAME_INTRO_SCREEN_B_W_BUTTON);

    GameScreen game2A(GAME_2_SCREEN_A);
    GameScreen game2ANoButton(GAME_2_SCREEN_A_NO_BUTTON);
    GameScreen game2B(GAME_2_SCREEN_B);
    GameScreen game2C(GAME_2_SCREEN_C);
    GameScreen game2CBlank(GAME_2_SCREEN_C_BLANK);
    GameScreen game2D(GAME_2_SCREEN_D);
    GameScreen game2E(GAME_2_SCREEN_E);
    GameScreen game2F(GAME_2_SCREEN_F);
    GameScreen game2G(GAME_2_SCREEN_G);
    GameScreen game2H(GAME_2_SCREEN_H);
    GameScreen game2I(GAME_2_SCREEN_I);
    GameScreen game2J(GAME_2_SCREEN_J);
    GameScreen game2JBlank(GAME_2_SCREEN_J_BLANK);
    GameScreen game2K(GAME_2_SCREEN_K);
    GameScreen game2L(GAME_2_SCREEN_L);
    GameScreen game2M(GAME_2_SCREEN_M);
    GameScreen game2N(GAME_2_SCREEN_N);
    GameScreen game2O(GAME_2_SCREEN_O);
    GameScreen game2P(GAME_2_SCREEN_P);
    GameScreen game2Q(GAME_2_SCREEN_Q);
    GameScreen game2R(GAME_2_SCREEN_R);
    GameScreen game2S(GAME_2_SCREEN_S);
    GameScreen game2T(GAME_2_SCREEN_T);
    GameScreen game2U(GAME_2_SCREEN_U);
    GameScreen game2V(GAME_2_SCREEN_V);
    GameScreen game2W(GAME_2_SCREEN_W);
    GameScreen game2MwButton(GAME_2_SCREEN_M_W_BUTTON);
    GameScreen game2NwButton(GAME_2_SCREEN_N_W_BUTTON);
    GameScreen game2OwButton(GAME_2_SCREEN_O_W_BUTTON);
    GameScreen game2PwButton(GAME_2_SCREEN_P_W_BUTTON);
    GameScreen game2QwButton(GAME_2_SCREEN_Q_W_BUTTON);
    GameScreen game2RwButton(GAME_2_SCREEN_R_W_BUTTON);
    GameScreen game2SwButton(GAME_2_SCREEN_S_W_BUTTON);
    GameScreen game2TwButton(GAME_2_SCREEN_T_W_BUTTON);
    GameScreen game2UwButton(GAME_2_SCREEN_U_W_BUTTON);
    GameScreen game2VwButton(GAME_2_SCREEN_V_W_BUTTON);
    GameScreen game2WwButton(GAME_2_SCREEN_W_W_BUTTON);

    GameScreen checkIn2ScreenBlank(CHECK_IN_2_SCREEN_BLANK);
    GameScreen checkIn2ScreenA(CHECK_IN_2_SCREEN_A);
    GameScreen checkIn2ScreenB(CHECK_IN_2_SCREEN_B);
    GameScreen checkIn2ScreenBBlank(CHECK_IN_2_SCREEN_B_BLANK);
    GameScreen checkIn2ScreenC(CHECK_IN_2_SCREEN_C);
    GameScreen checkIn2ScreenD(CHECK_IN_2_SCREEN_D);
    GameScreen checkIn2ScreenDwButton(CHECK_IN_2_SCREEN_D_W_BUTTON);

    GameScreen poemScreenA(POEM_SCREEN_A);
    GameScreen poemScreenB(POEM_SCREEN_B);
    GameScreen poemScreenC(POEM_SCREEN_C);
    GameScreen poemScreenD(POEM_SCREEN_D);
    GameScreen poemScreenE(POEM_SCREEN_E);
    GameScreen poemScreenF(POEM_SCREEN_F);
    GameScreen poemScreenG(POEM_SCREEN_G);
    GameScreen poemScreenH(POEM_SCREEN_H);
    GameScreen poemScreenI(POEM_SCREEN_I);
    GameScreen poemScreenJ(POEM_SCREEN_J);
    GameScreen poemScreenK(POEM_SCREEN_K);
    GameScreen poemScreenL(POEM_SCREEN_L);
    GameScreen poemScreenM(POEM_SCREEN_M);
    GameScreen poemScreenN(POEM_SCREEN_N);

    GameScreen checkIn3ScreenBlank(CHECK_IN_3_SCREEN_BLANK);
    GameScreen checkIn3ScreenA(CHECK_IN_3_SCREEN_A);
    GameScreen checkIn3ScreenB(CHECK_IN_3_SCREEN_B);
    GameScreen checkIn3ScreenBBlank(CHECK_IN_3_SCREEN_B_BLANK);
    GameScreen checkIn3ScreenC(CHECK_IN_3_SCREEN_C);
    GameScreen checkIn3ScreenD(CHECK_IN_3_SCREEN_D);
    GameScreen checkIn3ScreenDBlank(CHECK_IN_3_SCREEN_D_BLANK);
    GameScreen checkIn3ScreenE(CHECK_IN_3_SCREEN_E);
    GameScreen checkIn3ScreenF(CHECK_IN_3_SCREEN_F);
    GameScreen checkIn3ScreenG(CHECK_IN_3_SCREEN_G);
    GameScreen checkIn3ScreenH(CHECK_IN_3_SCREEN_H);
    GameScreen checkIn3ScreenHwButton(CHECK_IN_3_SCREEN_H_W_BUTTON);

    // Set gameState = first screen
    gameState = SPLASH_SCREEN;
//    gameState = GAME_2_SCREEN_A;

    // Put screens into map
    std::map<GameScreenName, GameScreen> state;

    state[SPLASH_SCREEN] = splashScreen;
    state[BSOD_SCREEN] = BSODScreen;

    state[INTRO_SCREEN_BLANK] = introScreenBlank;
    state[INTRO_SCREEN_A] = introScreenA;
    state[INTRO_SCREEN_B] = introScreenB;
    state[INTRO_SCREEN_C] = introScreenC;
    state[INTRO_SCREEN_C_W_BUTTON] = introScreenCwButton;

    state[PHONE_GAME_SCREEN] = phoneGameScreen;
    state[PHONE_GAME_SCREEN_2A] = phoneGameScreen2A;
    state[PHONE_GAME_SCREEN_2B] = phoneGameScreen2B;
    state[PHONE_GAME_SCREEN_2C] = phoneGameScreen2C;
    state[PHONE_GAME_SCREEN_2D] = phoneGameScreen2D;
    state[PHONE_GAME_SCREEN_2E] = phoneGameScreen2E;
    state[PHONE_GAME_SCREEN_2F] = phoneGameScreen2F;
    state[PHONE_GAME_SCREEN_2F_W_BUTTON] = phoneGameScreen2FwButton;

    state[CHECK_IN_SCREEN_BLANK] = checkInScreenBlank;
    state[CHECK_IN_SCREEN_A] = checkInScreenA;
    state[CHECK_IN_SCREEN_B] = checkInScreenB;
    state[CHECK_IN_SCREEN_B_W_1_BUTTON] = checkInScreenBw1Button;
    state[CHECK_IN_SCREEN_B_W_2_BUTTONS] = checkInScreenBw2Buttons;

    state[CHECK_IN_SCREEN_YES_BLANK] = checkInScreenYesBlank;
    state[CHECK_IN_SCREEN_YES] = checkInScreenYes;

    state[CHECK_IN_SCREEN_NO_BLANK] = checkInScreenNoBlank;
    state[CHECK_IN_SCREEN_NO_A] = checkInScreenNoA;
    state[CHECK_IN_SCREEN_NO_B] = checkInScreenNoB;

    state[NEXT_GAME_INTRO_SCREEN_BLANK] = nextGameIntroScreenBlank;
    state[NEXT_GAME_INTRO_SCREEN_A] = nextGameIntroScreenA;
    state[NEXT_GAME_INTRO_SCREEN_B] = nextGameIntroScreenB;
    state[NEXT_GAME_INTRO_SCREEN_B_W_BUTTON] = nextGameIntroScreenBwButton;

    state[GAME_2_SCREEN_A] = game2A;
    state[GAME_2_SCREEN_A_NO_BUTTON] = game2ANoButton;
    state[GAME_2_SCREEN_B] = game2B;
    state[GAME_2_SCREEN_C] = game2C;
    state[GAME_2_SCREEN_C_BLANK] = game2CBlank;
    state[GAME_2_SCREEN_D] = game2D;
    state[GAME_2_SCREEN_E] = game2E;
    state[GAME_2_SCREEN_F] = game2F;
    state[GAME_2_SCREEN_G] = game2G;
    state[GAME_2_SCREEN_H] = game2H;
    state[GAME_2_SCREEN_I] = game2I;
    state[GAME_2_SCREEN_J] = game2J;
    state[GAME_2_SCREEN_J_BLANK] = game2JBlank;
    state[GAME_2_SCREEN_K] = game2K;
    state[GAME_2_SCREEN_L] = game2L;
    state[GAME_2_SCREEN_M] = game2M;
    state[GAME_2_SCREEN_N] = game2N;
    state[GAME_2_SCREEN_O] = game2O;
    state[GAME_2_SCREEN_P] = game2P;
    state[GAME_2_SCREEN_Q] = game2Q;
    state[GAME_2_SCREEN_R] = game2R;
    state[GAME_2_SCREEN_S] = game2S;
    state[GAME_2_SCREEN_T] = game2T;
    state[GAME_2_SCREEN_U] = game2U;
    state[GAME_2_SCREEN_V] = game2V;
    state[GAME_2_SCREEN_W] = game2W;
    state[GAME_2_SCREEN_M_W_BUTTON] = game2MwButton;
    state[GAME_2_SCREEN_N_W_BUTTON] = game2NwButton;
    state[GAME_2_SCREEN_O_W_BUTTON] = game2OwButton;
    state[GAME_2_SCREEN_P_W_BUTTON] = game2PwButton;
    state[GAME_2_SCREEN_Q_W_BUTTON] = game2QwButton;
    state[GAME_2_SCREEN_R_W_BUTTON] = game2RwButton;
    state[GAME_2_SCREEN_S_W_BUTTON] = game2SwButton;
    state[GAME_2_SCREEN_T_W_BUTTON] = game2TwButton;
    state[GAME_2_SCREEN_U_W_BUTTON] = game2UwButton;
    state[GAME_2_SCREEN_V_W_BUTTON] = game2VwButton;
    state[GAME_2_SCREEN_W_W_BUTTON] = game2WwButton;

    state[CHECK_IN_2_SCREEN_BLANK] = checkIn2ScreenBlank;
    state[CHECK_IN_2_SCREEN_A] = checkIn2ScreenA;
    state[CHECK_IN_2_SCREEN_B] = checkIn2ScreenB;
    state[CHECK_IN_2_SCREEN_B_BLANK] = checkIn2ScreenBBlank;
    state[CHECK_IN_2_SCREEN_C] = checkIn2ScreenC;
    state[CHECK_IN_2_SCREEN_D] = checkIn2ScreenD;
    state[CHECK_IN_2_SCREEN_D_W_BUTTON] = checkIn2ScreenDwButton;

    state[POEM_SCREEN_A] = poemScreenA;
    state[POEM_SCREEN_B] = poemScreenB;
    state[POEM_SCREEN_C] = poemScreenC;
    state[POEM_SCREEN_D] = poemScreenD;
    state[POEM_SCREEN_E] = poemScreenE;
    state[POEM_SCREEN_F] = poemScreenF;
    state[POEM_SCREEN_G] = poemScreenG;
    state[POEM_SCREEN_H] = poemScreenH;
    state[POEM_SCREEN_I] = poemScreenI;
    state[POEM_SCREEN_J] = poemScreenJ;
    state[POEM_SCREEN_K] = poemScreenK;
    state[POEM_SCREEN_L] = poemScreenL;
    state[POEM_SCREEN_M] = poemScreenM;
    state[POEM_SCREEN_N] = poemScreenN;

    state[CHECK_IN_3_SCREEN_BLANK] = checkIn3ScreenBlank;
    state[CHECK_IN_3_SCREEN_A] = checkIn3ScreenA;
    state[CHECK_IN_3_SCREEN_B] = checkIn3ScreenB;
    state[CHECK_IN_3_SCREEN_B_BLANK] = checkIn3ScreenBBlank;
    state[CHECK_IN_3_SCREEN_C] = checkIn3ScreenC;
    state[CHECK_IN_3_SCREEN_D] = checkIn3ScreenD;
    state[CHECK_IN_3_SCREEN_D_BLANK] = checkIn3ScreenDBlank;
    state[CHECK_IN_3_SCREEN_E] = checkIn3ScreenE;
    state[CHECK_IN_3_SCREEN_F] = checkIn3ScreenF;
    state[CHECK_IN_3_SCREEN_G] = checkIn3ScreenG;
    state[CHECK_IN_3_SCREEN_H] = checkIn3ScreenH;
    state[CHECK_IN_3_SCREEN_H_W_BUTTON] = checkIn3ScreenHwButton;


    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            // if user clicks the window's X button, the window closes
            if(event.type == sf::Event::Closed)
                window.close();

            // Track mouse position relative to game window
            sf::Vector2f mousePos = static_cast<sf::Vector2f>(sf::Mouse::getPosition(window));

            // SPLASH SCREEN:
            if(gameState == SPLASH_SCREEN)
            {
                // If mouse position is within the bounds of button1 background
                if(splashScreen.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = INTRO_SCREEN_BLANK;

                        // Play sound
                        Sounds::sounds[EIGHT_BIT_1_UP].play();

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        splashScreen.stateOn(HIDDEN);

                    }
                }
            }

            // INTRO SCREEN C W BUTTON:
            if(gameState == INTRO_SCREEN_C_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(introScreenCwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // Change gameState to next screen
                        gameState = PHONE_GAME_SCREEN;

                        // Play sound
                        redAlert.setLoop(true);
                        redAlert.play();

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        introScreenCwButton.stateOn(HIDDEN);

                        // Set next game screen to visible
                        phoneGameScreen.stateOff(HIDDEN);
                    }
                }
            }

            // PHONE GAME SCREEN:
            if(gameState == PHONE_GAME_SCREEN)
            {
                // If mouse position is within the bounds of button1 background
                if(phoneGameScreen.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // Play sound
                        Sounds::sounds[EIGHT_BIT_INCORRECT].play();
                    }
                }

                // If mouse position is within the bounds of button2 background
                if(phoneGameScreen.button2.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Stop red alert sound
                        redAlert.stop();

                        // Change gameState to next screen
                        gameState = PHONE_GAME_SCREEN_2A;

                    }
                }
            }

            // PHONE GAME SCREEN 2F w Button:
            if(gameState == PHONE_GAME_SCREEN_2F_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(phoneGameScreen2FwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        phoneGameScreen2FwButton.stateOn(HIDDEN);
                    }
                }
            }

            // CHECK IN SCREEN WITH TWO BUTTONS:
            if(gameState == CHECK_IN_SCREEN_B_W_2_BUTTONS)
            {
                // If mouse position is within the bounds of button1 background ("YES")
                if(checkInScreenBw2Buttons.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_SCREEN_YES_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        checkInScreenBw2Buttons.stateOn(HIDDEN);
                    }
                }

                // If mouse position is within the bounds of button2 background ("NO")
                if(checkInScreenBw2Buttons.button2.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_SCREEN_NO_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        checkInScreenBw2Buttons.stateOn(HIDDEN);
                    }
                }
            }

            // NEXT GAME INTRO SCREEN B W BUTTON:
            if(gameState == NEXT_GAME_INTRO_SCREEN_B_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(nextGameIntroScreenBwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = GAME_2_SCREEN_A;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        nextGameIntroScreenBwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2A:
            if(gameState == GAME_2_SCREEN_A)
            {
                // If mouse position is within the bounds of button1 background
                if(game2A.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Play sound
                        Sounds::sounds[SHUFFLE].play();

                        // Change gameState to next screen
                        gameState = GAME_2_SCREEN_A_NO_BUTTON;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2A.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2M W BUTTON:
            if(gameState == GAME_2_SCREEN_M_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2MwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2MwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2N W BUTTON:
            if(gameState == GAME_2_SCREEN_N_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2NwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2NwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2O W BUTTON:
            if(gameState == GAME_2_SCREEN_O_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2OwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2OwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2P W BUTTON:
            if(gameState == GAME_2_SCREEN_P_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2PwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2PwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2Q W BUTTON:
            if(gameState == GAME_2_SCREEN_Q_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2QwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2QwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2R W BUTTON:
            if(gameState == GAME_2_SCREEN_R_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2RwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2RwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2S W BUTTON:
            if(gameState == GAME_2_SCREEN_S_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2SwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2SwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2T W BUTTON:
            if(gameState == GAME_2_SCREEN_T_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2TwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2TwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2U W BUTTON:
            if(gameState == GAME_2_SCREEN_U_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2UwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2UwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2V W BUTTON:
            if(gameState == GAME_2_SCREEN_V_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2VwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2VwButton.stateOn(HIDDEN);
                    }
                }
            }

            // GAME 2W W BUTTON:
            if(gameState == GAME_2_SCREEN_W_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(game2WwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_2_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        game2WwButton.stateOn(HIDDEN);
                    }
                }
            }

            // CHECK IN SCREEN 2D W BUTTON:
            if(gameState == CHECK_IN_2_SCREEN_D_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(checkIn2ScreenDwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = POEM_SCREEN_A;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        checkIn2ScreenDwButton.stateOn(HIDDEN);
                    }
                }
            }

            // POEM SCREEN N:
            if(gameState == POEM_SCREEN_N)
            {
                // If mouse position is within the bounds of button1 background
                if(poemScreenN.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Change gameState to next screen
                        gameState = CHECK_IN_3_SCREEN_BLANK;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        poemScreenN.stateOn(HIDDEN);
                    }
                }
            }

            // CHECK IN SCREEN 3H W BUTTON:
            if(gameState == CHECK_IN_3_SCREEN_H_W_BUTTON)
            {
                // If mouse position is within the bounds of button1 background
                if(checkIn3ScreenHwButton.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // restart the clock
                        clock1.restart();

                        // Play sound
                        Sounds::sounds[EIGHT_BIT_FAIL].play();

                        // Change gameState to next screen
                        gameState = BSOD_SCREEN;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                        checkIn3ScreenHwButton.stateOn(HIDDEN);
                    }
                }
            }

            // BSOD SCREEN:
            if(gameState == BSOD_SCREEN)
            {
                // If mouse position is within the bounds of button1 background ("Start")
                if(BSODScreen.button1.background.getGlobalBounds().contains(mousePos))
                {
                    // If mouse button is pressed
                    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                    {
                        // Change gameState to next screen
                        gameState = SPLASH_SCREEN;

                        // Set screen to hidden so that button(s) stop working when screen is changed
                         BSODScreen.stateOn(HIDDEN);

                        // Set next game screen to visible
                         splashScreen.stateOff(HIDDEN);
                    }
                }
            }

            // Look at events only for the current game screen
            state[gameState].eventHandler(window, event);
        }

        // INTRO SCREEN BLANK:
        if(gameState == INTRO_SCREEN_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = INTRO_SCREEN_A;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // INTRO SCREEN A:
        if(gameState == INTRO_SCREEN_A)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = INTRO_SCREEN_B;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // INTRO SCREEN B:
        if(gameState == INTRO_SCREEN_B)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = INTRO_SCREEN_C;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // INTRO SCREEN C:
        if(gameState == INTRO_SCREEN_C)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = INTRO_SCREEN_C_W_BUTTON;

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // PHONE GAME SCREEN 2A:
        if(gameState == PHONE_GAME_SCREEN_2A)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = PHONE_GAME_SCREEN_2B;

                // Play sound
                Sounds::sounds[TEXT_MESSAGE].play();

            }
        }

        // PHONE GAME SCREEN 2B:
        if(gameState == PHONE_GAME_SCREEN_2B)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = PHONE_GAME_SCREEN_2C;

                // Play sound
                Sounds::sounds[TEXT_MESSAGE].play();

            }
        }

        // PHONE GAME SCREEN 2C:
        if(gameState == PHONE_GAME_SCREEN_2C)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = PHONE_GAME_SCREEN_2D;

                // Play sound
                Sounds::sounds[TEXT_MESSAGE].play();

            }
        }

        // PHONE GAME SCREEN 2D:
        if(gameState == PHONE_GAME_SCREEN_2D)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = PHONE_GAME_SCREEN_2E;

                // Play sound
                Sounds::sounds[TEXT_MESSAGE].play();
            }
        }

        // PHONE GAME SCREEN 2E:
        if(gameState == PHONE_GAME_SCREEN_2E)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = PHONE_GAME_SCREEN_2F;

                // Play sound
                Sounds::sounds[TEXT_MESSAGE].play();
            }
        }

        // PHONE GAME SCREEN 2F:
        if(gameState == PHONE_GAME_SCREEN_2F)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = PHONE_GAME_SCREEN_2F_W_BUTTON;

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();

                // Set next game screen to visible
                phoneGameScreen2FwButton.stateOff(HIDDEN);
            }
        }

        // CHECK-IN SCREEN BLANK:
        if(gameState == CHECK_IN_SCREEN_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_SCREEN_A;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK-IN SCREEN A:
        if(gameState == CHECK_IN_SCREEN_A)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_SCREEN_B;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK-IN SCREEN B:
        if(gameState == CHECK_IN_SCREEN_B)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_SCREEN_B_W_1_BUTTON;

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // CHECK-IN SCREEN B W ONE BUTTON:
        if(gameState == CHECK_IN_SCREEN_B_W_1_BUTTON)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_SCREEN_B_W_2_BUTTONS;

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();

                // Set next game screen to visible
                checkInScreenBw2Buttons.stateOff(HIDDEN);
            }
        }

        // CHECK IN SCREEN YES BLANK:
        if(gameState == CHECK_IN_SCREEN_YES_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_SCREEN_YES;

                // Play sound
                Sounds::sounds[EIGHT_BIT_POSITIVE].play();
            }
        }

        // CHECK IN SCREEN YES:
        if(gameState == CHECK_IN_SCREEN_YES)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = NEXT_GAME_INTRO_SCREEN_BLANK;

            }
        }

        // CHECK IN SCREEN NO BLANK:
        if(gameState == CHECK_IN_SCREEN_NO_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_SCREEN_NO_A;

                // Play sound
                Sounds::sounds[EIGHT_BIT_WARNING].play();
            }
        }

        // CHECK IN SCREEN NO A:
        if(gameState == CHECK_IN_SCREEN_NO_A)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_SCREEN_NO_B;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN SCREEN NO B:
        if(gameState == CHECK_IN_SCREEN_NO_B)
        {
            if(clock1.getElapsedTime().asSeconds() > 5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = NEXT_GAME_INTRO_SCREEN_BLANK;

            }
        }

        // NEXT GAME INTRO SCREEN BLANK:
        if(gameState == NEXT_GAME_INTRO_SCREEN_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = NEXT_GAME_INTRO_SCREEN_A;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // NEXT GAME INTRO SCREEN A:
        if(gameState == NEXT_GAME_INTRO_SCREEN_A)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = NEXT_GAME_INTRO_SCREEN_B;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // NEXT GAME INTRO SCREEN B:
        if(gameState == NEXT_GAME_INTRO_SCREEN_B)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = NEXT_GAME_INTRO_SCREEN_B_W_BUTTON;

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }


        // GAME 2A NO BUTTON:
        if(gameState == GAME_2_SCREEN_A_NO_BUTTON)
        {
            if(clock1.getElapsedTime().asSeconds() > 3)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_B;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2B:
        if(gameState == GAME_2_SCREEN_B)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_C;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2C:
        if(gameState == GAME_2_SCREEN_C)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_C_BLANK;

            }
        }

        // GAME 2C BLANK:
        if(gameState == GAME_2_SCREEN_C_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_D;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();

            }
        }

        // GAME 2D:
        if(gameState == GAME_2_SCREEN_D)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_E;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2E:
        if(gameState == GAME_2_SCREEN_E)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_F;

                // Play sound
                Sounds::sounds[TEXT_MESSAGE].play();
            }
        }

        // GAME 2F:
        if(gameState == GAME_2_SCREEN_F)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_G;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2G:
        if(gameState == GAME_2_SCREEN_G)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_H;

                // Play sound
                Sounds::sounds[TEXT_MESSAGE].play();
            }
        }

        // GAME 2H:
        if(gameState == GAME_2_SCREEN_H)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_I;
            }
        }

        // GAME 2I:
        if(gameState == GAME_2_SCREEN_I)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_J;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2J: "My incredibly sophisticated analysis tells me..."
        if(gameState == GAME_2_SCREEN_J)
        {
            if(clock1.getElapsedTime().asSeconds() > 3.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_J_BLANK;

            }
        }

        // GAME 2J Blank:
        if(gameState == GAME_2_SCREEN_J_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen BASED ON CONDITIONS
                if(topCardRank == bottomCardRank)
                    gameState = GAME_2_SCREEN_K; // Ranks are equal
                else
                    gameState = GAME_2_SCREEN_O; // Ranks !=

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2K: "Their ranks are equal"
        if(gameState == GAME_2_SCREEN_K)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_L; // "Ranks are == and"

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2L: "Ranks are == and"
        if(gameState == GAME_2_SCREEN_L)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen BASED ON CONDITIONS
                if(topCardSuit == bottomCardSuit)
                    gameState = GAME_2_SCREEN_M; // Same suit
                else
                    gameState = GAME_2_SCREEN_N; // Different suits

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2M: "Ranks are == and same suit"
        if(gameState == GAME_2_SCREEN_M)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_M_W_BUTTON; // w/ Button

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // GAME 2N: "Ranks are == and different suits"
        if(gameState == GAME_2_SCREEN_N)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_N_W_BUTTON; // w/ Button

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // GAME 2O: "Ranks are !="
        if(gameState == GAME_2_SCREEN_O)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen BASED ON CONDITIONS
                if(topCardRank > bottomCardRank)
                    gameState = GAME_2_SCREEN_P; // Top card has higher rank
                else
                    gameState = GAME_2_SCREEN_Q; // Bottom card has higher rank

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2P: "Top card has higher rank"
        if(gameState == GAME_2_SCREEN_P)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_U; // "and"

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2Q: "Bottom card has higher rank"
        if(gameState == GAME_2_SCREEN_Q)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_R; // "and"

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2R: "Bottom card has higher rank and"
        if(gameState == GAME_2_SCREEN_R)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen BASED ON CONDITIONS
                if(topCardSuit == bottomCardSuit)
                    gameState = GAME_2_SCREEN_S; // Same suit
                else
                    gameState = GAME_2_SCREEN_T; // Different suits

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2S: "Bottom card has higher rank and same suit"
        if(gameState == GAME_2_SCREEN_S)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_S_W_BUTTON; // w/ Button

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // GAME 2T: "Bottom card has higher rank and different suits"
        if(gameState == GAME_2_SCREEN_T)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_T_W_BUTTON; // w/ Button

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // GAME 2U: "Top card has higher rank and"
        if(gameState == GAME_2_SCREEN_U)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen BASED ON CONDITIONS
                if(topCardSuit == bottomCardSuit)
                    gameState = GAME_2_SCREEN_V; // Same suit
                else
                    gameState = GAME_2_SCREEN_W; // Different suits

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // GAME 2V: "Top card has higher rank and same suit"
        if(gameState == GAME_2_SCREEN_V)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_V_W_BUTTON; // w/ Button

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // GAME 2W: "Top card has higher rank and different suits"
        if(gameState == GAME_2_SCREEN_W)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = GAME_2_SCREEN_W_W_BUTTON; // w/ Button

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // CHECK IN 2 SCREEN BLANK:
        if(gameState == CHECK_IN_2_SCREEN_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_2_SCREEN_A;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN 2 SCREEN A:
        if(gameState == CHECK_IN_2_SCREEN_A)
        {
            if(clock1.getElapsedTime().asSeconds() > 3)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_2_SCREEN_B;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN 2 SCREEN B:
        if(gameState == CHECK_IN_2_SCREEN_B)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_2_SCREEN_B_BLANK;

            }
        }

        // CHECK IN 2 SCREEN B BLANK:
        if(gameState == CHECK_IN_2_SCREEN_B_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_2_SCREEN_C;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN 2 SCREEN C:
        if(gameState == CHECK_IN_2_SCREEN_C)
        {
            if(clock1.getElapsedTime().asSeconds() > 4)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_2_SCREEN_D;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN 2 SCREEN D:
        if(gameState == CHECK_IN_2_SCREEN_D)
        {
            if(clock1.getElapsedTime().asSeconds() > 4)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_2_SCREEN_D_W_BUTTON;

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // POEM SCREEN A:
        if(gameState == POEM_SCREEN_A)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_B;

                // Play sound
                Sounds::sounds[EIGHT_BIT_SHORT_BLIP].play();
            }
        }

        // POEM SCREEN B:
        if(gameState == POEM_SCREEN_B)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_C;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN C:
        if(gameState == POEM_SCREEN_C)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_D;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN D:
        if(gameState == POEM_SCREEN_D)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_E;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN E:
        if(gameState == POEM_SCREEN_E)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_F;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN F:
        if(gameState == POEM_SCREEN_F)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_G;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN G:
        if(gameState == POEM_SCREEN_G)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_H;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN H:
        if(gameState == POEM_SCREEN_H)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_I;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN I:
        if(gameState == POEM_SCREEN_I)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_J;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN J:
        if(gameState == POEM_SCREEN_J)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_K;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN K:
        if(gameState == POEM_SCREEN_K)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_L;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN L:
        if(gameState == POEM_SCREEN_L)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_M;

                // Play sound
                Sounds::sounds[EIGHT_BIT_NEXT_LINE].play();
            }
        }

        // POEM SCREEN M:
        if(gameState == POEM_SCREEN_M)
        {
            if(clock1.getElapsedTime().asSeconds() > 1.75)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = POEM_SCREEN_N;

                // Play sound
                Sounds::sounds[EIGHT_BIT_BUTTON_APPEARS].play();
            }
        }

        // CHECK IN SCREEN 3 BLANK:
        if(gameState == CHECK_IN_3_SCREEN_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_A;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN SCREEN 3 A:
        if(gameState == CHECK_IN_3_SCREEN_A)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_B;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN SCREEN 3 B:
        if(gameState == CHECK_IN_3_SCREEN_B)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_B_BLANK;

            }
        }

        // CHECK IN SCREEN 3 B BLANK:
        if(gameState == CHECK_IN_3_SCREEN_B_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_C;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN SCREEN 3 C:
        if(gameState == CHECK_IN_3_SCREEN_C)
        {
            if(clock1.getElapsedTime().asSeconds() > 3)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_D;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }


        // CHECK IN SCREEN 3 D:
        if(gameState == CHECK_IN_3_SCREEN_D)
        {
            if(clock1.getElapsedTime().asSeconds() > 3)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_D_BLANK;

            }
        }

        // CHECK IN SCREEN 3 D BLANK:
        if(gameState == CHECK_IN_3_SCREEN_D_BLANK)
        {
            if(clock1.getElapsedTime().asSeconds() > 1)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_E;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }


        // CHECK IN SCREEN 3 E:
        if(gameState == CHECK_IN_3_SCREEN_E)
        {
            if(clock1.getElapsedTime().asSeconds() > 2.5)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_F;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN SCREEN 3 F:
        if(gameState == CHECK_IN_3_SCREEN_F)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_G;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN SCREEN 3 G:
        if(gameState == CHECK_IN_3_SCREEN_G)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_H;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }

        // CHECK IN SCREEN 3 H:
        if(gameState == CHECK_IN_3_SCREEN_H)
        {
            if(clock1.getElapsedTime().asSeconds() > 2)
            {
                // restart the clock
                clock1.restart();

                // Change gameState to next screen
                gameState = CHECK_IN_3_SCREEN_H_W_BUTTON;

                // Play sound
                Sounds::sounds[EIGHT_BIT_COLLECT].play();
            }
        }




        // Update states for the current game state
        state[gameState].update();

        // Fill window with dusty rose color
        window.clear(sf::Color(172, 147, 147));

        // Draw current game screen
        window.draw(state[gameState]);

        // Draw rank/suit
        if(gameState == GAME_2_SCREEN_F || gameState == GAME_2_SCREEN_G)
        {
            window.draw(rank1);
            window.draw(suit1);
        }

        else if(gameState == GAME_2_SCREEN_H || gameState == GAME_2_SCREEN_I || gameState == GAME_2_SCREEN_J ||
        gameState == GAME_2_SCREEN_K || gameState == GAME_2_SCREEN_L || gameState == GAME_2_SCREEN_M ||
        gameState == GAME_2_SCREEN_N || gameState == GAME_2_SCREEN_O || gameState == GAME_2_SCREEN_P ||
        gameState == GAME_2_SCREEN_Q || gameState == GAME_2_SCREEN_R || gameState == GAME_2_SCREEN_S ||
        gameState == GAME_2_SCREEN_T || gameState == GAME_2_SCREEN_U || gameState == GAME_2_SCREEN_V ||
        gameState == GAME_2_SCREEN_W || gameState == GAME_2_SCREEN_M_W_BUTTON ||
        gameState == GAME_2_SCREEN_N_W_BUTTON || gameState == GAME_2_SCREEN_O_W_BUTTON || gameState == GAME_2_SCREEN_P_W_BUTTON ||
        gameState == GAME_2_SCREEN_Q_W_BUTTON || gameState == GAME_2_SCREEN_R_W_BUTTON || gameState == GAME_2_SCREEN_S_W_BUTTON ||
        gameState == GAME_2_SCREEN_T_W_BUTTON || gameState == GAME_2_SCREEN_U_W_BUTTON || gameState == GAME_2_SCREEN_V_W_BUTTON ||
        gameState == GAME_2_SCREEN_W_W_BUTTON || gameState == GAME_2_SCREEN_J_BLANK)
        {
            window.draw(rank1);
            window.draw(suit1);
            window.draw(rank2);
            window.draw(suit2);
        }

        // Display to screen
        window.display();
    }
}

void ShttyProjectOMatic::drawRank(Rank rankFirstCard, Suit suitFirstCard, Rank rankSecondCard, Suit suitSecondCard) {
    // Convert rank to short string
    std::string rank1String = rankFirstCard.toShortString();
    std::string rank2String = rankSecondCard.toShortString();

    // Set rank1
    rank1.setString(rank1String);
    rank1.setFont(Assets<sf::Font>::getAsset(DOS));
    rank1.setCharacterSize(64);
    rank1.setPosition(sf::Vector2f(gameWindowWidth * 0.43, gameWindowHeight * 0.29));

    // Set rank1 color = red for hearts/diamonds; black otherwise
    if(suitFirstCard == HEARTS || suitFirstCard == DIAMONDS)
        rank1.setFillColor(sf::Color(194, 25, 36));
    else
        rank1.setFillColor(sf::Color::Black);

    // Set rank2
    rank2.setString(rank2String);
    rank2.setFont(Assets<sf::Font>::getAsset(DOS));
    rank2.setCharacterSize(64);
    rank2.setPosition(sf::Vector2f(gameWindowWidth * 0.683, gameWindowHeight * 0.29));

    // Set rank2 color = red for hearts/diamonds; black otherwise
    if(suitSecondCard == HEARTS || suitSecondCard == DIAMONDS)
        rank2.setFillColor(sf::Color(194, 25, 36));
    else
        rank2.setFillColor(sf::Color::Black);

}

void ShttyProjectOMatic::drawSuit(Suit suitFirstCard, Suit suitSecondCard) {
    // Suit 1
    suit1.setTexture(Assets<sf::Texture>::getAsset(convertSuitToAssetName(suitFirstCard)));
    Assets<sf::Texture>::assets[convertSuitToAssetName(suitFirstCard)].setSmooth(true); // Smooth texture
    suit1.setPosition(gameWindowWidth * 0.449, gameWindowHeight * 0.41);

    // Suit 2
    suit2.setTexture(Assets<sf::Texture>::getAsset(convertSuitToAssetName(suitSecondCard)));
    Assets<sf::Texture>::assets[convertSuitToAssetName(suitSecondCard)].setSmooth(true); // Smooth texture
    suit2.setPosition(gameWindowWidth * 0.7075, gameWindowHeight * 0.41);

}

AssetName ShttyProjectOMatic::convertSuitToAssetName(Suit suit) {
    if(suit == HEARTS)
        return HEARTS_IMG;
    if(suit == DIAMONDS)
        return DIAMONDS_IMG;
    if(suit == CLUBS)
        return CLUBS_IMG;
    if(suit == SPADES)
        return SPADES_IMG;
}