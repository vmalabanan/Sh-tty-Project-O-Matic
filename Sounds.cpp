//
// Created by vanes on 1/11/2022.
//

#include "Sounds.h"

void Sounds::bindSounds() {
    sounds[BUTTON_ROLLOVER].setBuffer(Assets<sf::SoundBuffer>::getAsset(BUTTON_ROLLOVER));
    sounds[CLICK_CARD].setBuffer(Assets<sf::SoundBuffer>::getAsset(CLICK_CARD));
    sounds[RED_ALERT].setBuffer(Assets<sf::SoundBuffer>::getAsset(RED_ALERT));
    sounds[TEXT_MESSAGE].setBuffer(Assets<sf::SoundBuffer>::getAsset(TEXT_MESSAGE));
    sounds[EIGHT_BIT_WARNING].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_WARNING));
    sounds[EIGHT_BIT_1_UP].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_1_UP));
    sounds[SHUFFLE].setBuffer(Assets<sf::SoundBuffer>::getAsset(SHUFFLE));
    sounds[EIGHT_BIT_COLLECT].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_COLLECT));
    sounds[EIGHT_BIT_END].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_END));
    sounds[EIGHT_BIT_SHORT_BLIP].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_SHORT_BLIP));
    sounds[EIGHT_BIT_FAIL].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_FAIL));
    sounds[EIGHT_BIT_INCORRECT].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_INCORRECT));
    sounds[EIGHT_BIT_POSITIVE].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_POSITIVE));
    sounds[EIGHT_BIT_BUTTON_APPEARS].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_BUTTON_APPEARS));
    sounds[EIGHT_BIT_NEXT_LINE].setBuffer(Assets<sf::SoundBuffer>::getAsset(EIGHT_BIT_NEXT_LINE));
}

std::map<AssetName, sf::Sound> Sounds::sounds {

};