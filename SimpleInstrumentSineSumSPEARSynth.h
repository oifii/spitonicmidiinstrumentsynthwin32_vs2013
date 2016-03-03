/*
 * Copyright (c) 2015-2016 Stephane Poirier
 *
 * stephane.poirier@oifii.org
 *
 * Stephane Poirier
 * 3532 rue Ste-Famille, #3
 * Montreal, QC, H2X 2L1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef SimpleInstrumentSineSumSPEARSynth_h
#define SimpleInstrumentSineSumSPEARSynth_h

#include "Tonic.h"

#include "speartextpartialsreader.h"

using namespace Tonic;

class SimpleInstrumentSineSumSPEARSynth : public Synth{

public:
	SimpleInstrumentSineSumSPEARSynth(){

		//#if TONIC_HAS_CPP_11
#if 1
		/*
		Generators and ControlGenerators both output a steady stream of data.
		Generators output at the sample rate (in this case, 44100 hertz.
		ControlGenerators output at the control rate, which is much lower than the sample rate.
		*/
		/*
		//0) loadin SPEAR partials text file
		SpearTextPartialsReader mySpearTextPartialsReader("a1_tum_ot_l29(partials).txt");
		//A1 is 55 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 55.f;
		//std::cout << (*it) << "\n";
		}
		*/

		/*
		SpearTextPartialsReader mySpearTextPartialsReader("PersianNey B3 Vel_2(partials).txt");
		//B3 is 246.9 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 246.9;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("VC-8_mV_sus-sh_mf_B3(partials).txt");
		//B3 is 246.9 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 246.9;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("HA_ES_flag_p_B3(partials)(edited).txt");
		//B3 is 246.9 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 246.9;
		//std::cout << (*it) << "\n";
		}
		*/
		
		SpearTextPartialsReader mySpearTextPartialsReader("LHkora B3 Vel_1(partials).txt");
		//B3 is 246.9 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 246.9;
		//std::cout << (*it) << "\n";
		}
		
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("CRM-Tone03-B3(partials).txt");
		//B3 is 246.9 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 246.9;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("ARP2600_2osc_Saw_C4(partials).txt");
		//C4 is 261.6 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 261.6;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("ARP2600_50-50_Pulse_C4(partials).txt"); //good
		//C4 is 261.6 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 261.6;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("ATC 132_ms0_072_c4(partials).txt");
		//C4 is 261.6 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 261.6;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("Analog Strings 2_ms0_072_c4(partials).txt"); //good
		//C4 is 261.6 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
			(*it) = (*it) / 261.6;
			//std::cout << (*it) << "\n";  
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("kick 1(partials).txt");
		//unknown fondammental
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 100.0;
		//std::cout << (*it) << "\n";
		}
		*/	
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("snare 1(partials).txt");
		//unknown fondammental
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 200.0;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("Boes-R(C2)-V(190)-dB(2294)-T(MF)-M(120)-P(1027-04-02)(partials).txt");
		//C2 is 65.41 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 65.41;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("Gong C 04(partials).txt");
		//C4 is 261.6 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 261.6;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("HPchanter C4 Vel_1(partials).txt"); //close to ni
		//C4 is 261.6 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 261.6;
		//std::cout << (*it) << "\n";
		}
		*/
		/*
		SpearTextPartialsReader mySpearTextPartialsReader("KB-6_sforz_fp_B1(partials).txt");
		//B1 is 61.74 Hz
		for (vector<float>::iterator it = mySpearTextPartialsReader.partialfrequencies.begin(), end = mySpearTextPartialsReader.partialfrequencies.end(); it != end; ++it)
		{
		(*it) = (*it) / 61.74;
		//std::cout << (*it) << "\n";
		}
		*/
		//1) sum all partials
		ControlParameter pitch = addParameter("pitch", 0);
		Adder outputAdder;
		for (int ii = 0; ii<mySpearTextPartialsReader.partialfrequencies.size(); ii++)
		{
			ControlGenerator pitchGen = pitch + mySpearTextPartialsReader.partialfrequencies[ii];
			//outputAdder.input(mySpearTextPartialsReader.partialamplitudes[ii] * SineWave().freq(pitchGen.smoothed()));
			outputAdder.input(mySpearTextPartialsReader.partialamplitudes[ii] * SineWave().freq(pitchGen));
		}
		Generator osc = outputAdder * 1.0f; //spi

		//2) define a midi note control generator
		// create a named parameter on the synth which we can set at runtime
		ControlGenerator midiNote = addParameter("midiNote");
		ControlGenerator midiNoteVelocity = addParameter("midiNoteVelocity");

		//3) define a note frequency control generator
		// convert a midi note to a frequency (plugging that parameter into another object)
		ControlGenerator noteFreq = ControlMidiToFreq().input(midiNote);

		//4) define a envelop trigger control generator
		ControlGenerator envelopeTrigger = addParameter("trigger");

		//osc = BPF24().input(osc).Q(0.1).cutoff(noteFreq);
		//tone = BPF24().input(tone).Q(0.1).cutoff((noteFreq)+SineWave().freq(127 - midiNoteVelocity) * 0.5 * noteFreq);

		// It's just a steady tone until we modulate the amplitude with an envelope
		//Generator oscWithEnvelope = osc * ADSR().attack(0.01).decay(1.5).sustain(0).release(0).trigger(envelopeTrigger).legato(true); //good
		//Generator oscWithEnvelope = osc * ADSR().attack(0.01).decay(0.1).sustain(0).release(0).trigger(envelopeTrigger).legato(false); //good
		//Generator oscWithEnvelope = osc * ADSR().attack(0.01).decay(1.5).sustain(0).release(0).trigger(envelopeTrigger).legato(false); //good
		Generator oscWithEnvelope = osc * ADSR().attack(0.01).decay(0.1).sustain(0.0).release(0.0).trigger(envelopeTrigger); //good
		//Generator oscWithEnvelope = osc * ADSR().attack(0.01).decay(5).sustain(0.0).release(0.0).trigger(envelopeTrigger); //good
		//Generator oscWithEnvelope = osc * ADSR().attack(0.001).decay(0.5).sustain(0.1).release(0.5).trigger(envelopeTrigger).doesSustain(0.0); //good

		// let's send the tone through some delay
		//Generator oscWithDelay = StereoDelay(1.5, 1).input(oscWithEnvelope).wetLevel(0.8).feedback(0.7); //spi
		//Generator oscWithDelay = StereoDelay(1.5, 1).input(oscWithEnvelope).wetLevel(0.2).feedback(0.7); //spi
		Generator oscWithDelay = StereoDelay(1.5, 1).input(oscWithEnvelope).wetLevel(0.5).feedback(0.7); //spi

		//setOutputGen(oscWithDelay);
		setOutputGen(oscWithEnvelope);

#else

#pragma message("C++11 Support not available - SimpleInstrumentSineSumSPEARSynth disabled")

#endif
	}
};

TONIC_REGISTER_SYNTH(SimpleInstrumentSineSumSPEARSynth)

#endif
