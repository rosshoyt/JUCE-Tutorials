/*
  ==============================================================================

    TestComponent.cpp
    Created: 17 Nov 2017 9:39:39pm
    Author:  Agneya Kerure

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "TestComponent.h"

//==============================================================================
TestComponent::TestComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

TestComponent::~TestComponent()
{
}

void TestComponent::paint (Graphics& g)
{
    Rectangle <int> test(0, 0, 100, 100);
    
    g.setColour(Colours::limegreen);
    g.setOpacity(0.5);
    g.drawRect(test);
    //g.setColour(Colours::red);
    g.fillRect(test);
    
}

void TestComponent::resized()
{
    

}
