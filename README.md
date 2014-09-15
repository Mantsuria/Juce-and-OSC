Juce-and-OSC
============


The aim of this project is to combine JUCE (www.juce.com) and oscpack library (www.audiomulch.com/~rossb/code/oscpack/). Currently the program does receive values via osc and prints them to debugger console.

Currenly this repository contains source files. Some prerequisities before compiling:

- create a solution for building the oscpack.lib
- create JUCE GUI application via Introjucer and add the source files
- Include oscpack library files to project via properties>C/C++>Additional Include Directories

(Note: this should be defied through Introjucer by adding the path via Header search Path fields (both in Debug and Release versions)

- On the Linker tab add the folder location of the libs via Properties>Linker>Additional Library Directories

(Note: this should be defied through Introjucer by adding the path via Extra Library Search Path fields (both in Debug and Release versions)

- Add name of the libs via Properties>Linker>Input>Additional Dependencies.(oscpack.lib and possibly ws2_32.lib (seems to work without))

(Note: this should be defied through Introjucer by adding the path via Extrnal Libraries Libraries to Link fields (Visual Studio Solution)

- Change Run time library to Multi-threaded Debug DLL (/MDd) via (Properties>C/C++>Code Generation

(Note: Introjucer restores Run Time Library settings when saved. Therefore, make sure to build all external libraries with same Run Time options. Currently Juce uses Multi-Threaded Debug -option.

TODO:

- add printing values to label

