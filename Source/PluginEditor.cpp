/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MyTest2282022AudioProcessorEditor::MyTest2282022AudioProcessorEditor (MyTest2282022AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    setSize (400, 300);

    addAndMakeVisible(frequency_knob);
    frequency_knob.setSliderStyle(Slider::Rotary);
    frequency_knob.setRange(0.0, 20'000.0, 1.0);
    frequency_knob.setTextBoxStyle(Slider::NoTextBox, true, 100, 20);
    frequency_knob.setValue(20'000.0);

    addAndMakeVisible(cutoff_knob);
    cutoff_knob.setSliderStyle(Slider::Rotary);
    cutoff_knob.setRange(0.0, 10.0, 0.01);
    cutoff_knob.setTextBoxStyle(Slider::NoTextBox, true, 100, 20);
    cutoff_knob.setValue(0.0);

    getLookAndFeel().setColour(Slider::thumbColourId, Colours::indianred);
    getLookAndFeel().setColour(Slider::rotarySliderFillColourId, Colours::antiquewhite);
}

MyTest2282022AudioProcessorEditor::~MyTest2282022AudioProcessorEditor()
{
}

//==============================================================================
void MyTest2282022AudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(Colours::transparentBlack);
}

void MyTest2282022AudioProcessorEditor::resized()
{
    int border = 40;
    int knobWidth = getWidth() / 2 - border;
    int knobHeight = getHeight() - 40;
    frequency_knob.setBounds(border, border, knobWidth, knobHeight);
    cutoff_knob.setBounds(getWidth() / 2, border, knobWidth, knobHeight);
}
