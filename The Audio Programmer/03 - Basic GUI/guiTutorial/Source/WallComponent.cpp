/*
  ==============================================================================

    WallComponent.cpp
    Created: 11 Nov 2017 10:33:23pm
    Author:  Agneya Kerure

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "WallComponent.h"

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (Graphics& g)
{
    Rectangle <int> wall(200, 200, 200, 180);
    g.fillCheckerBoard(wall, 20, 10, Colours::sandybrown, Colours::blue);
    g.drawRect(wall);
}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
