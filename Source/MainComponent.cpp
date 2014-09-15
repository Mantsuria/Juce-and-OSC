/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/
#include "MainComponent.h"
//==============================================================================
MainContentComponent::MainContentComponent()
: fireUpOSC ("Fire Up OSC")
{
	fireUpOSC.addListener (this);
	addAndMakeVisible(&fireUpOSC);
	addAndMakeVisible(&custom);
   
	setSize (600, 400);
	custom.setBoundsRelative (0.05, 0.35, 0.90, 0.25);
}

void MainContentComponent::resized()
{
  fireUpOSC.setBoundsRelative (0.05, 0.05, 0.90, 0.25);
}

void MainContentComponent::buttonClicked (Button* button)
{
  if (&fireUpOSC == button)
  {
	  // start osc thread
	  receiveOSC.startThread();
  }
}
