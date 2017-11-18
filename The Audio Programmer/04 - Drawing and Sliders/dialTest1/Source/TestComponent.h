/*
  ==============================================================================

    TestComponent.h
    Created: 17 Nov 2017 9:39:39pm
    Author:  Agneya Kerure

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class TestComponent    : public Component
{
public:
    TestComponent();
    ~TestComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TestComponent)
};
