/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    dial1.setSliderStyle(Slider::SliderStyle::Rotary);
    dial1.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
    dial2.setSliderStyle(Slider::SliderStyle::Rotary);
    dial2.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
    setSize (600, 400);
    addAndMakeVisible(test);
    addAndMakeVisible(dial1);
    addAndMakeVisible(dial2);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll(Colours::limegreen);
    
    
}

void MainContentComponent::resized()
{
    test.setBounds(getLocalBounds());
    
    Rectangle<int> area = getLocalBounds(); //for the dial - rects are used to position objects on screen
    Rectangle<int> dialArea = area.removeFromTop(area.getHeight() / 2);
    dial1.setBounds(dialArea.removeFromLeft(area.getWidth() / 2));
    
    dial2.setBounds(dialArea.removeFromRight(area.getWidth() / 2));
    
}
