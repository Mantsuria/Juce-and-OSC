/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "ReceiveOSC.h"
#include "CustomComponent.h"


//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent: 
	public Component, 
	public Button::Listener
{
public:
    //==============================================================================
    MainContentComponent();

	 void buttonClicked (Button* button);
	 void resized();

private:
	TextButton fireUpOSC;
	ReceiveOSC receiveOSC;
	CustomComponent custom;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED
