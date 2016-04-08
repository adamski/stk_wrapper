/*
  ==============================================================================

  The Synthesis ToolKit in C++ (STK) is a set of open source audio
  signal processing and algorithmic synthesis classes written in the
  C++ programming language. STK was designed to facilitate rapid
  development of music synthesis and audio processing software, with
  an emphasis on cross-platform functionality, realtime control,
  ease of use, and educational example code.  STK currently runs
  with realtime support (audio and MIDI) on Linux, Macintosh OS X,
  and Windows computer platforms. Generic, non-realtime support has
  been tested under NeXTStep, Sun, and other platforms and should
  work with any standard C++ compiler.

  STK WWW site: http://ccrma.stanford.edu/software/stk/include/

  The Synthesis ToolKit in C++ (STK)
  Copyright (c) 1995-2011 Perry R. Cook and Gary P. Scavone

  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this software and associated documentation files
  (the "Software"), to deal in the Software without restriction,
  including without limitation the rights to use, copy, modify, merge,
  publish, distribute, sublicense, and/or sell copies of the Software,
  and to permit persons to whom the Software is furnished to do so,
  subject to the following conditions:

  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Software.

  Any person wishing to distribute modifications to the Software is
  asked to send the modifications to the original developer so that
  they can be incorporated into the canonical version.  This is,
  however, not a binding provision of this license.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR
  ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
  CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

  ==============================================================================
*/

#if defined (__STK_STKHEADER__) && ! JUCE_AMALGAMATED_INCLUDE
 /* When you add this cpp file to your project, you mustn't include it in a file where you've
    already included any other headers - just put it inside a file on its own, possibly with your config
    flags preceding it, but don't include anything else. That also includes avoiding any automatic prefix
    header files that the compiler may be using.
 */
 #error "Incorrect use of JUCE cpp file"
#endif

// Your project must contain an AppConfig.h file with your project-specific settings in it,
// and your header search path must make it accessible to the module's files.
#include "AppConfig.h"

#include "stk.h"

// stops a warning with clang
#ifdef __clang__
 #pragma clang diagnostic ignored "-Wtautological-compare"
#endif

#if JUCE_MSVC
 #pragma warning (push)
 #pragma warning (disable: 4127 4702 4244 4305 4100 4996 4309)
#endif

#include "stk/include/ADSR.cpp"
#include "stk/include/Asymp.cpp"
#include "stk/include/BandedWG.cpp"
#include "stk/include/BeeThree.cpp"
#include "stk/include/BiQuad.cpp"
#include "stk/include/Blit.cpp"
#include "stk/include/BlitSaw.cpp"
#include "stk/include/BlitSquare.cpp"
#include "stk/include/BlowBotl.cpp"
#include "stk/include/BlowHole.cpp"
#include "stk/include/Bowed.cpp"
#include "stk/include/Brass.cpp"
#include "stk/include/Chorus.cpp"
#include "stk/include/Clarinet.cpp"
#include "stk/include/Delay.cpp"
#include "stk/include/DelayA.cpp"
#include "stk/include/DelayL.cpp"
#include "stk/include/Drummer.cpp"
#include "stk/include/Echo.cpp"
#include "stk/include/Envelope.cpp"
#include "stk/include/FileLoop.cpp"
#include "stk/include/FileRead.cpp"
#include "stk/include/FileWrite.cpp"
#include "stk/include/FileWvIn.cpp"
#include "stk/include/FileWvOut.cpp"
#include "stk/include/Fir.cpp"
#include "stk/include/Flute.cpp"
#include "stk/include/FM.cpp"
#include "stk/include/FMVoices.cpp"
#include "stk/include/FormSwep.cpp"
#include "stk/include/Granulate.cpp"
#include "stk/include/HevyMetl.cpp"
#include "stk/include/Iir.cpp"
#include "stk/include/JCRev.cpp"
#include "stk/include/LentPitShift.cpp"
#include "stk/include/Mandolin.cpp"
#include "stk/include/Mesh2D.cpp"
#include "stk/include/MidiFileIn.cpp"
#include "stk/include/Modal.cpp"
#include "stk/include/ModalBar.cpp"
#include "stk/include/Modulate.cpp"
#include "stk/include/Moog.cpp"
#include "stk/include/Noise.cpp"
#include "stk/include/NRev.cpp"
#include "stk/include/OnePole.cpp"
#include "stk/include/OneZero.cpp"
#include "stk/include/PercFlut.cpp"
#include "stk/include/Phonemes.cpp"
#include "stk/include/PitShift.cpp"
#include "stk/include/Plucked.cpp"
#include "stk/include/PoleZero.cpp"
#include "stk/include/PRCRev.cpp"
#include "stk/include/Resonate.cpp"
#include "stk/include/Rhodey.cpp"
#include "stk/include/Sampler.cpp"
#include "stk/include/Saxofony.cpp"
#include "stk/include/Shakers.cpp"
#include "stk/include/Simple.cpp"
#include "stk/include/SineWave.cpp"
#include "stk/include/SingWave.cpp"
#include "stk/include/Sitar.cpp"
#include "stk/include/Skini.cpp"
#include "stk/include/Sphere.cpp"
#include "stk/include/StifKarp.cpp"
#include "stk/include/Stk.cpp"
#include "stk/include/TapDelay.cpp"
#include "stk/include/TubeBell.cpp"
#include "stk/include/Twang.cpp"
#include "stk/include/TwoPole.cpp"
#include "stk/include/TwoZero.cpp"
#include "stk/include/Voicer.cpp"
#include "stk/include/VoicForm.cpp"
#include "stk/include/Whistle.cpp"
#include "stk/include/Wurley.cpp"

#if JUCE_MSVC
 #pragma warning (pop)
 #pragma warning (disable: 4127 4702 4244 4305 4100 4996 4309)
#endif

#ifdef __clang__
 #pragma pop // -Wtautological-compare
#endif
