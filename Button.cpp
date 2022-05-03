//
// Created by vanes on 1/11/2022.
//

#include "Button.h"
Button::Button() {

}

// Call States() default constructor to add all states to map and set to false
Button::Button(std::string text, unsigned int textSize, sf::Color textColor, sf::Vector2f textPos, sf::Vector2f bgSize, sf::Color bgColor, sf::Vector2f bgPos) : States() {
    // Button text
    this->text.setString(text);
    this->text.setFont(Assets<sf::Font>::getAsset(DOS));
    this->text.setCharacterSize(textSize);
    this->text.setFillColor(textColor);
    this->text.setPosition(textPos);

    // Button background
    background.setSize(bgSize);
    background.setFillColor(bgColor);
    background.setPosition(bgPos);

    // Save variables to use in eventHandler and to reset button to original specs after rollover
    this->textSize = textSize;
    this->bgSize = bgSize;
    this->bgPos = bgPos;
    this->textPos = textPos;

}

void Button::eventHandler(sf::RenderWindow& window, sf::Event event) {
    // Track mouse position relative to game window
    sf::Vector2f mousePos = static_cast<sf::Vector2f>(sf::Mouse::getPosition(window));

    // Create dummy button
    Button dummyButton;
    dummyButton.background.setSize(bgSize);
    dummyButton.background.setPosition(bgPos);

    // If mouse position is within the bounds of dummy button background (aka background of button in original state, BEFORE rollover)
    if(dummyButton.background.getGlobalBounds().contains(mousePos))
        stateOn(ROLLOVER);

    else
        stateOff(ROLLOVER);
}


void Button::update() {
    // On button rollover, make changes to the button
    if(isOn(ROLLOVER))
    {
        if(!isOn(ROLLEDOVER_ONCE))
        {
            // Create dummy button
            Button dummyButton;
            dummyButton.text.setString(text.getString());
            dummyButton.text.setFont(Assets<sf::Font>::getAsset(DOS));
            dummyButton.text.setCharacterSize(textSize);
            dummyButton.text.setPosition(textPos);

            dummyButton.background.setSize(bgSize);
            dummyButton.background.setPosition(bgPos);

            // Shift button text to the right and downward
            if(textSize >= 32)
                text.setPosition(dummyButton.text.getGlobalBounds().left * 1.015, dummyButton.text.getGlobalBounds().top * 1.00001);
            else if(textSize >= 24)
                text.setPosition(dummyButton.text.getGlobalBounds().left * 1.015, dummyButton.text.getGlobalBounds().top * 1.005);
            else if(textSize >= 21)
                text.setPosition(dummyButton.text.getGlobalBounds().left * 1.012, dummyButton.text.getGlobalBounds().top * 1.000052);
            else if(textSize >= 20)
                text.setPosition(dummyButton.text.getGlobalBounds().left * 1.00975, dummyButton.text.getGlobalBounds().top * 1.000052);
            else if(textSize >=18)
                text.setPosition(dummyButton.text.getGlobalBounds().left * 1.0079, dummyButton.text.getGlobalBounds().top * 0.995);
            else
                text.setPosition(dummyButton.text.getGlobalBounds().left * 1.0065, dummyButton.text.getGlobalBounds().top * 0.9993);


            // Shift button bg to the right and downward
            if(bgSize.x >= 120)
                background.setPosition(dummyButton.background.getGlobalBounds().left * 1.015, dummyButton.background.getGlobalBounds().top * 1.015);
            else if(bgSize.x >= 100)
                background.setPosition(dummyButton.background.getGlobalBounds().left * 1.011, dummyButton.background.getGlobalBounds().top * 1.012);
            else if(bgSize.x >= 90)
                background.setPosition(dummyButton.background.getGlobalBounds().left * 1.007, dummyButton.background.getGlobalBounds().top * 1.015);
            else
                background.setPosition(dummyButton.background.getGlobalBounds().left * 1.0055, dummyButton.background.getGlobalBounds().top * 1.00625);

            // Play sound
            Sounds::sounds[BUTTON_ROLLOVER].play();

            // Turn on ROLLEDOVER_ONCE
            stateOn(ROLLEDOVER_ONCE);
        }
    }

    else
    {
        // Revert button to original specs
        text.setPosition(textPos);
        background.setPosition(bgPos);

        // Reset ROLLEDOVER_ONCE
        stateOff(ROLLEDOVER_ONCE);
    }
}


void Button::draw(sf::RenderTarget& window, sf::RenderStates states) const {
    window.draw(background);
    window.draw(text);
}