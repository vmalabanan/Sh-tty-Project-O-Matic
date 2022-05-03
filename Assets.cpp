//
// Created by vanes on 1/11/2022.
//

#ifndef MAIN_CPP_ASSETS_CPP
#define MAIN_CPP_ASSETS_CPP

#include "Assets.h"

template<class T>
// Returns a sf::Texture, sf::Font, sf::Music, or sf::SoundBuffer object
T& Assets<T>::getAsset(AssetName asset) {
    loadAsset(asset);
    return assets[asset];
}

template<class T>
std::string Assets<T>::getAssetPath(AssetName asset){
    switch(asset)
    {
        // FONTS
        case DOS: return "Assets/Fonts/Perfect DOS VGA 437.ttf";

        // IMAGES
        case TITLE: return "Assets/Images/title.png";
        case ROUNDED_RECT: return "Assets/Images/rounded rectangle bg.png";
        case BSOD: return "Assets/Images/BSOD.png";
        case FIRST_GAME: return "Assets/Images/first game.png";
        case FIRST_GAME_2A: return "Assets/Images/first game 2a.png";
        case FIRST_GAME_2B: return "Assets/Images/first game 2b.png";
        case FIRST_GAME_2C: return "Assets/Images/first game 2c.png";
        case FIRST_GAME_2D: return "Assets/Images/first game 2d.png";
        case FIRST_GAME_2E: return "Assets/Images/first game 2e.png";
        case FIRST_GAME_2F: return "Assets/Images/first game 2f.png";
        case INTRO_BLANK: return "Assets/Images/intro screen blank.png";
        case INTRO_A: return "Assets/Images/intro screen a.png";
        case INTRO_B: return "Assets/Images/intro screen b.png";
        case INTRO_C: return "Assets/Images/intro screen c.png";
        case CHECK_IN_A: return "Assets/Images/check in screen a.png";
        case CHECK_IN_B: return "Assets/Images/check in screen b.png";
        case CHECK_IN_YES: return "Assets/Images/player answers yes.png";
        case CHECK_IN_NO_A: return "Assets/Images/player answers no a.png";
        case CHECK_IN_NO_B: return "Assets/Images/player answers no b.png";
        case NEXT_GAME_INTRO_A: return "Assets/Images/i worked really hard a.png";
        case NEXT_GAME_INTRO_B: return "Assets/Images/i worked really hard b.png";

        case GAME_2_A: return "Assets/Images/second game a.png";
        case GAME_2_B: return "Assets/Images/second game b.png";
        case GAME_2_C: return "Assets/Images/second game c.png";
        case GAME_2_D: return "Assets/Images/second game d.png";
        case GAME_2_E: return "Assets/Images/second game e.png";
        case GAME_2_F: return "Assets/Images/second game f.png";
        case GAME_2_G: return "Assets/Images/second game g.png";
        case GAME_2_H: return "Assets/Images/second game h.png";
        case GAME_2_I: return "Assets/Images/second game i.png";
        case GAME_2_J: return "Assets/Images/second game j.png";
        case GAME_2_K: return "Assets/Images/second game k.png";
        case GAME_2_L: return "Assets/Images/second game l.png";
        case GAME_2_M: return "Assets/Images/second game m.png";
        case GAME_2_N: return "Assets/Images/second game n.png";
        case GAME_2_O: return "Assets/Images/second game o.png";
        case GAME_2_P: return "Assets/Images/second game p.png";
        case GAME_2_Q: return "Assets/Images/second game q.png";
        case GAME_2_R: return "Assets/Images/second game r.png";
        case GAME_2_S: return "Assets/Images/second game s.png";
        case GAME_2_T: return "Assets/Images/second game t.png";
        case GAME_2_U: return "Assets/Images/second game u.png";
        case GAME_2_V: return "Assets/Images/second game v.png";
        case GAME_2_W: return "Assets/Images/second game w.png";

        case CHECK_IN_2_A: return "Assets/Images/check in screen 2 a.png";
        case CHECK_IN_2_B: return "Assets/Images/check in screen 2 b.png";
        case CHECK_IN_2_C: return "Assets/Images/check in screen 2 c.png";
        case CHECK_IN_2_D: return "Assets/Images/check in screen 2 d.png";

        case POEM_A: return "Assets/Images/poem a.png";
        case POEM_B: return "Assets/Images/poem b.png";
        case POEM_C: return "Assets/Images/poem c.png";
        case POEM_D: return "Assets/Images/poem d.png";
        case POEM_E: return "Assets/Images/poem e.png";
        case POEM_F: return "Assets/Images/poem f.png";
        case POEM_G: return "Assets/Images/poem g.png";
        case POEM_H: return "Assets/Images/poem h.png";
        case POEM_I: return "Assets/Images/poem i.png";
        case POEM_J: return "Assets/Images/poem j.png";
        case POEM_K: return "Assets/Images/poem k.png";
        case POEM_L: return "Assets/Images/poem l.png";
        case POEM_M: return "Assets/Images/poem m.png";
        case POEM_N: return "Assets/Images/poem n.png";

        case CHECK_IN_3_A: return "Assets/Images/check-in screen 3 a.png";
        case CHECK_IN_3_B: return "Assets/Images/check-in screen 3 b.png";
        case CHECK_IN_3_C: return "Assets/Images/check-in screen 3 c.png";
        case CHECK_IN_3_D: return "Assets/Images/check-in screen 3 d.png";
        case CHECK_IN_3_E: return "Assets/Images/check-in screen 3 e.png";
        case CHECK_IN_3_F: return "Assets/Images/check-in screen 3 f.png";
        case CHECK_IN_3_G: return "Assets/Images/check-in screen 3 g.png";
        case CHECK_IN_3_H: return "Assets/Images/check-in screen 3 h.png";

        case CLUBS_IMG: return "Assets/Images/Card Suits/suit-clubs.png";
        case DIAMONDS_IMG: return "Assets/Images/Card Suits/suit-diamonds.png";
        case HEARTS_IMG: return "Assets/Images/Card Suits/suit-hearts.png";
        case SPADES_IMG: return "Assets/Images/Card Suits/suit-spades.png";

        // SOUNDS
        case BUTTON_ROLLOVER: return "Assets/Sounds/button-rollover.wav";
        case CLICK_CARD: return "Assets/Sounds/play_card.flac";
        case RED_ALERT: return "Assets/Sounds/red-alert-klaxon.wav";
        case TEXT_MESSAGE: return "Assets/Sounds/text-message.ogg";
        case EIGHT_BIT_WARNING: return "Assets/Sounds/8-bit-warning.wav";
        case EIGHT_BIT_1_UP: return "Assets/Sounds/8-bit-sound-1-up.wav";
        case SHUFFLE: return "Assets/Sounds/card shuffle 2.wav";
        case EIGHT_BIT_COLLECT: return "Assets/Sounds/8-bit-collect-item.wav";
        case EIGHT_BIT_END: return "Assets/Sounds/8-bit-end.wav";
        case EIGHT_BIT_SHORT_BLIP: return "Assets/Sounds/8-bit-short-blip.wav";
        case EIGHT_BIT_FAIL: return "Assets/Sounds/8-bit-fail.wav";
        case EIGHT_BIT_INCORRECT: return "Assets/Sounds/8-bit-incorrect.wav";
        case EIGHT_BIT_POSITIVE: return "Assets/Sounds/8-bit-positive.wav";
        case EIGHT_BIT_BUTTON_APPEARS: return "Assets/Sounds/8-bit-button-appears.wav";
        case EIGHT_BIT_NEXT_LINE: return "Assets/Sounds/8-bit-next-line.wav";

    }
}

template<class T>
void Assets<T>::loadAsset(AssetName asset) {
    assets[asset].loadFromFile(getAssetPath(asset));
}

template<class T>
std::map<AssetName, T> Assets<T>::assets {

};

#endif