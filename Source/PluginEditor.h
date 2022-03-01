/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class MyTest2282022AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    MyTest2282022AudioProcessorEditor (MyTest2282022AudioProcessor&);
    ~MyTest2282022AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    MyTest2282022AudioProcessor& audioProcessor;
    Slider frequency_knob;
    Slider cutoff_knob;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MyTest2282022AudioProcessorEditor)
};
