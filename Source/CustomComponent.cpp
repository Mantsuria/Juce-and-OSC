/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "CustomComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
CustomComponent::CustomComponent ()
{
    addAndMakeVisible (floatLabel = new Label ("floatLabel",
                                               String::empty));
    floatLabel->setFont (Font (15.00f, Font::plain));
    floatLabel->setJustificationType (Justification::centredLeft);
    floatLabel->setEditable (false, false, false);
    floatLabel->setColour (TextEditor::textColourId, Colours::black);
    floatLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (slider = new Slider ("slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::LinearHorizontal);
    slider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider->addListener (this);


    //[UserPreSize]
	// setFloatTextField(900);
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

CustomComponent::~CustomComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    floatLabel = nullptr;
    slider = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void CustomComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void CustomComponent::resized()
{
    floatLabel->setBounds (proportionOfWidth (0.5000f) - ((150) / 2), proportionOfHeight (0.5000f) - ((24) / 2), 150, 24);
    slider->setBounds (proportionOfWidth (0.5000f) - ((150) / 2), proportionOfHeight (0.2000f) - ((24) / 2), 150, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void CustomComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
		setFloatTextField(slider->getValue());
        //[/UserSliderCode_slider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void CustomComponent::setFloatTextField(const float& OSCUpdate)
{
	floatLabel->setText(String (OSCUpdate), dontSendNotification);
	DBG("Int Text Through DBG " << floatLabel->getText());
	floatLabel->repaint();
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="CustomComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <LABEL name="floatLabel" id="6da4e42215a42f2a" memberName="floatLabel"
         virtualName="" explicitFocusOrder="0" pos="50%c 50%c 150 24"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="slider" id="7fd9d280268b107e" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="50%c 20%c 150 24" min="0" max="10"
          int="0" style="LinearHorizontal" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
