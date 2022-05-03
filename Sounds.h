//
// Created by vanes on 1/11/2022.
//

#ifndef MAIN_CPP_SOUNDS_H
#define MAIN_CPP_SOUNDS_H

#include "Assets.h"


class Sounds {
    // A static class that binds sf::Sound objects to their respective sf::SoundBuffers
public:
    static void bindSounds();

    static std::map<AssetName, sf::Sound> sounds;

};


#endif //MAIN_CPP_SOUNDS_H
