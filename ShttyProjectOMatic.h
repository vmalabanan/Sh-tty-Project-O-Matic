//
// Created by vanes on 1/11/2022.
//

#ifndef MAIN_CPP_SHTTYPROJECTOMATIC_H
#define MAIN_CPP_SHTTYPROJECTOMATIC_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "GameScreen.h"
#include "Sounds.h"
#include "Deck.h"
#include "DoublyLinkedList.h"

class ShttyProjectOMatic {
public:
    ShttyProjectOMatic();

private:
    GameScreenName gameState;
    sf::Clock clock1;
    sf::Text rank1;
    sf::Text rank2;
    sf::Sprite suit1;
    sf::Sprite suit2;
    void drawRank(Rank rankFirstCard, Suit suitFirstCard, Rank rankSecondCard, Suit suitSecondCard);
    void drawSuit(Suit suitFirstCard, Suit suitSecondCard);
    AssetName convertSuitToAssetName(Suit suit);

};


#endif //MAIN_CPP_SHTTYPROJECTOMATIC_H
