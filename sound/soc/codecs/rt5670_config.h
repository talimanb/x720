/*
** config of rt5670
*/

#ifndef _RT5670_CONFIG_H_
#define _RT5670_CONFIG_H_

#include "config.h"

const struct config_control rt5670_speaker_normal_controls[] = {

    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
    {
    	.ctl_name = "SPK Power Switch",         
    	.int_val = {on},   
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
   {
        .ctl_name = "PDM1 L Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "PDM1 R Mux",
        .str_val = "Stereo DAC",
    },

    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
     
	{
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {off},
    },
};

const struct config_control rt5670_speaker_incall_controls[] = {

	    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
	{
        .ctl_name = "OUT Playback Switch",
        .int_val = {off, off},
    },
    {
    	.ctl_name = "SPK Power Switch",         
    	.int_val = {on},   
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
        
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
  
    //OPEN ROUTE 
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {1},
    },
    {
        .ctl_name = "Mono DMIC L Mux",
        .str_val = "DMIC1",
    },
    {
        .ctl_name = "Mono DMIC R Mux",
        .str_val = "DMIC1",
    },
    {
        .ctl_name = "Mono ADC L2 Mux",
        .str_val = "DMIC",
    },
    {
        .ctl_name = "Mono ADC R2 Mux",
        .str_val = "DMIC",
    },
    {
        .ctl_name = "Mono ADC MIXL ADC2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono ADC MIXR ADC2 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "DAC R2 Mux",
        .str_val = "TxDP ADC",
    },

    {
        .ctl_name = "Mono DAC MIXL DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono DAC MIXR DAC R2 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "OUT MIXL DAC L2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT MIXR DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX L Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX R Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT Playback Switch",
        .int_val = {on, on},
    },

   //downstream 
     {
        .ctl_name = "RECMIXR INR Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo1 ADC R1 Mux",
        .str_val = "ADC",
    },
    {
        .ctl_name = "Sto1 ADC MIXR ADC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },

    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "PDM1 L Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "PDM1 R Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {on, on},
    },
     //downstream referenc to dsp

    {
        .ctl_name = "DAC2 L source",
        .str_val = "STO1 ADC Mixer",
    },

    //dBscale-min=-17.625dB,step=0.375dB,min=0,max=127
    {
        .ctl_name = "ADC Capture Volume",                  
        .int_val = {100, 100},
    },
	
	   {
        .ctl_name = "Sto1 ADC MIXR ADC2 Switch",
        .int_val = {off},
    },

};

const struct config_control rt5670_speaker_ringtone_controls[] = {

	  {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
    {
    	.ctl_name = "SPK Power Switch",         
    	.int_val = {on},   
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
   {
        .ctl_name = "PDM1 L Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "PDM1 R Mux",
        .str_val = "Stereo DAC",
    },

    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {155, 155},
    },
     
   
	    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {off},
    },
};

const struct config_control rt5670_speaker_voip_controls[] = {

{
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
    {
    	.ctl_name = "SPK Power Switch",         
    	.int_val = {on},   
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
   {
        .ctl_name = "PDM1 L Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "PDM1 R Mux",
        .str_val = "Stereo DAC",
    },

    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
     
   
	    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {off},
    },
};

const struct config_control rt5670_earpiece_normal_controls[] = {

};

const struct config_control rt5670_earpiece_incall_controls[] = {
   	    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
	{
        .ctl_name = "OUT Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
        
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
  
    //OPEN ROUTE 
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {1},
    },
    {
        .ctl_name = "Mono DMIC L Mux",
        .str_val = "DMIC1",
    },
    {
        .ctl_name = "Mono DMIC R Mux",
        .str_val = "DMIC1",
    },
    {
        .ctl_name = "Mono ADC L2 Mux",
        .str_val = "DMIC",
    },
    {
        .ctl_name = "Mono ADC R2 Mux",
        .str_val = "DMIC",
    },
    {
        .ctl_name = "Mono ADC MIXL ADC2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono ADC MIXR ADC2 Switch",
        .int_val = {on},
    },
        {
        .ctl_name = "Mono DAC MIXL DAC R2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Mono DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
    
    {
        .ctl_name = "DAC R2 Mux",
        .str_val = "TxDP ADC",
    },

    {
        .ctl_name = "Mono DAC MIXL DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono DAC MIXR DAC R2 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "OUT MIXL DAC L2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT MIXR DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX L Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX R Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT Playback Switch",
        .int_val = {on, on},
    },

   //downstream 
     {
        .ctl_name = "RECMIXR INR Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo1 ADC R1 Mux",
        .str_val = "ADC",
    },
    {
        .ctl_name = "Sto1 ADC MIXR ADC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },

    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "PDM1 L Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "PDM1 R Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {on, on},
    },
     //downstream referenc to dsp

    {
        .ctl_name = "DAC2 L source",
        .str_val = "STO1 ADC Mixer",
    },

    //dBscale-min=-17.625dB,step=0.375dB,min=0,max=127
    {
        .ctl_name = "ADC Capture Volume",                  
        .int_val = {100, 100},
    },
	
	   {
        .ctl_name = "Sto1 ADC MIXR ADC2 Switch",
        .int_val = {off},
    },

};

const struct config_control rt5670_earpiece_ringtone_controls[] = {
  {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
   {
        .ctl_name = "PDM1 L Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "PDM1 R Mux",
        .str_val = "Stereo DAC",
    },

    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {155, 155},
    },
     
   
	    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {off},
    },
};
const struct config_control rt5670_earpiece_voip_controls[] = {
   {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
   {
        .ctl_name = "PDM1 L Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "PDM1 R Mux",
        .str_val = "Stereo DAC",
    },

    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {155, 155},
    },
     
   
	    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {off},
    },
};
const struct config_control rt5670_headphone_normal_controls[] = {
   {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
   {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
     {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
     {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
       {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
   
    {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },
     
   };

const struct config_control rt5670_headphone_incall_controls[] = {
    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
    {
        .ctl_name = "OUT Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
  
    //OPEN ROUTE 
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {1},
    },
    {
        .ctl_name = "Mono DMIC L Mux",
        .str_val = "DMIC1",
    },
    {
        .ctl_name = "Mono DMIC R Mux",
        .str_val = "DMIC1",
    },
    {
        .ctl_name = "Mono ADC L2 Mux",
        .str_val = "DMIC",
    },
    {
        .ctl_name = "Mono ADC R2 Mux",
        .str_val = "DMIC",
    },
    {
        .ctl_name = "Mono ADC MIXL ADC2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono ADC MIXR ADC2 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "DAC R2 Mux",
        .str_val = "TxDP ADC",
    },

    {
        .ctl_name = "Mono DAC MIXL DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono DAC MIXR DAC R2 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "OUT MIXL DAC L2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT MIXR DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX L Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX R Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT Playback Switch",
        .int_val = {on, on},
    },

   //downstream 
     {
        .ctl_name = "RECMIXR INR Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo1 ADC R1 Mux",
        .str_val = "ADC",
    },
    {
        .ctl_name = "Sto1 ADC MIXR ADC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },

    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {off},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },

    //dBscale-min=-17.625dB,step=0.375dB,min=0,max=127
    {
        .ctl_name = "ADC Capture Volume",                  
        .int_val = {55, 55},
    },
};

const struct config_control rt5670_headphone_ringtone_controls[] = {
       {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
   {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
     {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
     {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
       {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
   
    {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },
     
   };
const struct config_control rt5670_speaker_headphone_normal_controls[] = {

	    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },
     
  
    {
        .ctl_name = "PDM1 L Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "PDM1 R Mux",
        .str_val = "Stereo DAC",
    },
   {
        .ctl_name = "SPK Playback Switch",
        .int_val = {on, on},
    },
};

const struct config_control rt5670_speaker_headphone_ringtone_controls[] = {

	    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
        {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },
     
    
    {
        .ctl_name = "PDM1 L Mux",
        .str_val = "Stereo DAC",
    },
    {
        .ctl_name = "PDM1 R Mux",
        .str_val = "Stereo DAC",
    },
   {
        .ctl_name = "SPK Playback Switch",
        .int_val = {on, on},
    },
};

const struct config_control rt5670_headphone_voip_controls[] = {

	   {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
   {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
     {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
     {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
       {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
   
    {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },
     
   };

const struct config_control rt5670_headset_normal_controls[] = {

	    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
   {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
           {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },
     
  
};

const struct config_control rt5670_headset_incall_controls[] = {

	    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
    {
        .ctl_name = "OUT Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
  
    //OPEN ROUTE 
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {1},
    },
    {
        .ctl_name = "RECMIXL BST1 Switch",
        .int_val = {on},
    },
	{
        .ctl_name = "RECMIXR BST1 Switch",
        .int_val = {off},
    },
    
    {
        .ctl_name = "Mono ADC L1 Mux",
        .str_val = "ADC1",
    },
    {
        .ctl_name = "Mono ADC R1 Mux",
        .str_val = "ADC2",
    },
    {
        .ctl_name = "Mono ADC MIXL ADC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono ADC MIXR ADC1 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "DAC R2 Mux",
        .str_val = "TxDP ADC",
    },

    {
        .ctl_name = "Mono DAC MIXL DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono DAC MIXR DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono ADC MIXL ADC2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Mono ADC MIXR ADC2 Switch",
        .int_val = {off},
    },

    {
        .ctl_name = "OUT MIXL DAC L2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT MIXR DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX L Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX R Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT Playback Switch",
        .int_val = {on, on},
    },

   //downstream 
     {
        .ctl_name = "RECMIXR INR Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo1 ADC R1 Mux",
        .str_val = "ADC",
    },
    {
        .ctl_name = "Sto1 ADC MIXR ADC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {on},
    },

   {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },

    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {off},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },

    //dBscale-min=-17.625dB,step=0.375dB,min=0,max=127
    {
        .ctl_name = "ADC Capture Volume",                  
        .int_val = {55, 55},
    },
};

const struct config_control rt5670_headset_ringtone_controls[] = {

	 	    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
   {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
           {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },
     
  
};

const struct config_control rt5670_headset_voip_controls[] = {

	 	    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
   {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
    //OPEN ROUTE
    {
        .ctl_name = "DAC1 L Mux",
        .str_val = "IF1 DAC",
    },
    {
        .ctl_name = "DAC1 R Mux",
        .str_val = "IF1 DAC",
    },

    {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXR DAC1 Switch",
        .int_val = {on},
    },
    
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .int_val = {on},
    },
           {
        .ctl_name = "Stereo DAC MIXL DAC R1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC L1 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "Stereo DAC MIXR DAC R2 Switch",
        .int_val = {off},
    },
        {
        .ctl_name = "DAC1 MIXR Stereo ADC Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "HPOVOL MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPOVOL MIXR DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HPO MIX HPVOL Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {on, on},
    },
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
        //dBscale-min=-46.50dB,step=1.50dB,min=0,max=31
    {
        .ctl_name = "HP Playback Volume",
        .int_val = {31, 31},
    },
     
  
};
const struct config_control rt5670_bluetooth_normal_controls[] = {

};

const struct config_control rt5670_bluetooth_incall_controls[] = {
	{
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
   {
        .ctl_name = "OUT Playback Switch",
        .int_val = {off, off},
    },
    {
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    
    {
        .ctl_name = "HP Playback Switch",
        .int_val = {off, off},
    },

 
    //OPEN ROUTE UPstream
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {1},
    },

    {
        .ctl_name = "DAC R2 Mux",
        .str_val = "IF2 DAC",
    },
    {
        .ctl_name = "DAC L2 Mux",
        .str_val = "IF2 DAC",
    },

    {
        .ctl_name = "Mono DAC MIXL DAC L2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono DAC MIXL DAC R2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Mono DAC MIXR DAC R2 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "OUT MIXL DAC L2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT MIXR DAC R2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX L Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "LOUT MIX OUTMIX R Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "OUT Playback Switch",
        .int_val = {on, on},
    },

   //downstream 
     {
        .ctl_name = "RECMIXR INR Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Stereo1 ADC R1 Mux",
        .str_val = "ADC",
    },
    {
        .ctl_name = "Sto1 ADC MIXR ADC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "IF2 ADC Mux",
        .str_val = "IF_ADC1",
    },
		
    //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {175, 175},
    },
      
    //dBscale-min=-17.625dB,step=0.375dB,min=0,max=127
    {
        .ctl_name = "ADC Capture Volume",                  
        .int_val = {70, 70},
    },
{
        .ctl_name = "SPK Playback Switch",
        .int_val = {off, off},
    },
    {        
    	.ctl_name = "SPK Power Switch",         
    	.int_val = {off},   
    },
};

const struct config_control rt5670_bluetooth_voip_controls[] = {
	{
        .ctl_name = "Ext Spk Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Headphone Jack Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Mic Jack Switch",
        .int_val = {off},
    },
    
    // IF2 DAC L ->DAC L2 Volume ->DAC MIXL ->Stereo ADC L2 Mux ->Stereo ADC MIXL ->IF1_ADC_L 

    {
        .ctl_name = "DAC L2 Mux",
        .str_val = "IF2 DAC",
    },
    {
        .ctl_name = "DAC MIXL DAC L2 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "Stereo1 ADC L2 Mux",
        .str_val = "DAC MIX",
    },
    {
        .ctl_name = "Sto1 ADC MIXL ADC2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXL Stereo ADC Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "IF1 ADC1 IN1 Mux",
        .str_val = "IF_ADC1",
    },
    {
        .ctl_name = "IF1 ADC1 IN2 Mux",
        .str_val = "IF1_ADC1_IN1",
    },
    {
        .ctl_name = "ASRC Switch",
        .str_val = "Enable",
    },
        //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175  
    {
        .ctl_name = "Mono DAC Playback Volume",
        .int_val = {175, 175},
    },
    {
        .ctl_name = "ADC Capture Volume",                  
        .int_val = {95, 95},
    },
    //  IF1 DAC ->DAC MIX ->MONO DAC MIXL-> IF ADC2
     {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Mono DAC MIXL DAC R2 Switch",
        .int_val = {off},
    },
	{
        .ctl_name = "Mono ADC L1 Mux",
        .str_val = "Mono DAC MIXL",
    },
    
    {
        .ctl_name = "Mono ADC MIXL ADC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "IF2 ADC Mux",
        .str_val = "IF_ADC2",
    },
    {
        .ctl_name = "ADC IF2 Data Switch",
        .str_val = "left copy to right",
    },
            //dBscale-min=-65.625dB,step=0.375dB,min=0,max=175  
    {
        .ctl_name = "DAC1 Playback Volume",
        .int_val = {160, 160},
    },
       {            
    	.ctl_name = "SPK Power Switch",         
    	.int_val = {off},   
    },
	
};

const struct config_control rt5670_main_mic_capture_controls[] = {
 
    {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },
    {
        .ctl_name = "Modem Input Switch",
        .int_val = {off},
    },
   /* {
        .ctl_name = "Headset Jack Switch",
        .int_val = {off},
    },*/
    //OPEN ROUTE
     {
        .ctl_name = "Mic Jack Switch",
        .int_val = {on},
    },
        {
        .ctl_name = "Mono DMIC L Mux",
        .str_val = "DMIC1",
    },
    {
        .ctl_name = "Mono DMIC R Mux",
        .str_val = "DMIC1",
    },
    {
        .ctl_name = "Mono ADC L2 Mux",
        .str_val = "DMIC",
    },
    {
        .ctl_name = "Mono ADC R2 Mux",
        .str_val = "DMIC",
    },
    {
        .ctl_name = "Mono ADC MIXL ADC2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono ADC MIXR ADC2 Switch",
        .int_val = {on},
    },
    //selec TxDP_ADC
    {
        .ctl_name = "IF1 ADC1 IN2 Mux",
        .str_val = "IF1_ADC4",
    },
    //dBscale-min=-17.625dB,step=0.375dB,min=0,max=127  
    {
        .ctl_name = "Mono ADC Capture Volume",
        .int_val = {127, 127},
    },	
	    //dBscale-min=-17.625dB,step=0.375dB,min=0,max=127
    {
        .ctl_name = "ADC Capture Volume",                  
        .int_val = {100, 100},
    },
    {
        .ctl_name = "Mono ADC MIXL ADC1 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Mono ADC MIXR ADC1 Switch",
        .int_val = {off},
    },
    
};

const struct config_control rt5670_hands_free_mic_capture_controls[] = {

   {
        .ctl_name = "ASRC Switch",
        .str_val = "Disable",
    },

   {
        .ctl_name = "Modem Input Switch",
        .int_val = {0},
    },
  /* {
        .ctl_name = "Mic Jack Switch",
        .int_val = {off},
    },*/
    //OPEN ROUTE
    {
        .ctl_name = "Headset Jack Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "RECMIXL BST1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "RECMIXR BST1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono ADC L1 Mux",
        .str_val = "ADC1",
    },
    {
        .ctl_name = "Mono ADC R1 Mux",
        .str_val = "ADC2",
    },
    {
        .ctl_name = "Mono ADC MIXL ADC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono ADC MIXR ADC1 Switch",
        .int_val = {on},
    },


    {
        .ctl_name = "IF1 ADC1 IN2 Mux",
        .str_val = "IF1_ADC4",
    },
    //min=0,max=8, bypass=0=0db, 30db=3, 52db=8
    {
        .ctl_name = "IN1 Boost",
        .int_val = {3},
    },
    //dBscale-min=-17.625dB,step=0.375dB,min=0,max=127  
    {
        .ctl_name = "Mono ADC Capture Volume",
        .int_val = {80, 80},
    },
    {
        .ctl_name = "Mono ADC MIXL ADC2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Mono ADC MIXR ADC2 Switch",
        .int_val = {off},
    },
};

const struct config_control rt5670_bluetooth_sco_mic_capture_controls[] = {
	// IF2 DAC L ->DAC L2 Volume ->DAC MIXL ->Stereo ADC L2 Mux ->Stereo ADC MIXL ->IF1_ADC_L 

    {
        .ctl_name = "DAC L2 Mux",
        .str_val = "IF2 DAC",
    },
    {
        .ctl_name = "DAC MIXL DAC L2 Switch",
        .int_val = {on},
    },

    {
        .ctl_name = "Stereo1 ADC L2 Mux",
        .str_val = "DAC MIX",
    },
    {
        .ctl_name = "Sto1 ADC MIXL ADC2 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "DAC1 MIXL Stereo ADC Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "IF1 ADC1 IN1 Mux",
        .str_val = "IF_ADC1",
    },
    {
        .ctl_name = "IF1 ADC1 IN2 Mux",
        .str_val = "IF1_ADC1_IN1",
    },

    //  IF1 DAC ->DAC MIX ->MONO DAC MIXL-> IF ADC2
     {
        .ctl_name = "DAC1 MIXL DAC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono DAC MIXL DAC L1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "Mono DAC MIXL DAC L2 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "Mono DAC MIXL DAC R2 Switch",
        .int_val = {off},
    },
	{
        .ctl_name = "Mono ADC L1 Mux",
        .str_val = "Mono DAC MIXL",
    },
    {
        .ctl_name = "Mono ADC MIXL ADC1 Switch",
        .int_val = {on},
    },
    {
        .ctl_name = "IF2 ADC Mux",
        .str_val = "IF_ADC2",
    },
};

const struct config_control rt5670_playback_off_controls[] = {

};

const struct config_control rt5670_capture_off_controls[] = {
    /*{
        .ctl_name = "RECMIXR BST1 Switch",
        .int_val = {off},
    },
    {
        .ctl_name = "RECMIXR BST3 Switch",
        .int_val = {off},
    },*/
};

const struct config_control rt5670_incall_off_controls[] = {
  
};

const struct config_control rt5670_voip_off_controls[] = {

};

const struct config_route_table rt5670_config_table = {
    //speaker
    .speaker_normal = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_speaker_normal_controls,
        .controls_count = sizeof(rt5670_speaker_normal_controls) / sizeof(struct config_control),
    },
    .speaker_incall = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_speaker_incall_controls,
        .controls_count = sizeof(rt5670_speaker_incall_controls) / sizeof(struct config_control),
    },
    .speaker_ringtone = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_speaker_ringtone_controls,
        .controls_count = sizeof(rt5670_speaker_ringtone_controls) / sizeof(struct config_control),
    },
    .speaker_voip = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_speaker_voip_controls,
        .controls_count = sizeof(rt5670_speaker_voip_controls) / sizeof(struct config_control),
    },

    //earpiece
    .earpiece_normal = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_earpiece_normal_controls,
        .controls_count = sizeof(rt5670_earpiece_normal_controls) / sizeof(struct config_control),
    },
    .earpiece_incall = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_earpiece_incall_controls,
        .controls_count = sizeof(rt5670_earpiece_incall_controls) / sizeof(struct config_control),
    },
    .earpiece_ringtone = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_earpiece_ringtone_controls,
        .controls_count = sizeof(rt5670_earpiece_ringtone_controls) / sizeof(struct config_control),
    },
    .earpiece_voip = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_earpiece_voip_controls,
        .controls_count = sizeof(rt5670_earpiece_voip_controls) / sizeof(struct config_control),
    },

    //headphone
    .headphone_normal = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_headphone_normal_controls,
        .controls_count = sizeof(rt5670_headphone_normal_controls) / sizeof(struct config_control),
    },
    .headphone_incall = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_headphone_incall_controls,
        .controls_count = sizeof(rt5670_headphone_incall_controls) / sizeof(struct config_control),
    },
    .headphone_ringtone = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_headphone_ringtone_controls,
        .controls_count = sizeof(rt5670_headphone_ringtone_controls) / sizeof(struct config_control),
    },
    .speaker_headphone_normal = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_speaker_headphone_normal_controls,
        .controls_count = sizeof(rt5670_speaker_headphone_normal_controls) / sizeof(struct config_control),
    },
    .speaker_headphone_ringtone = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_speaker_headphone_ringtone_controls,
        .controls_count = sizeof(rt5670_speaker_headphone_ringtone_controls) / sizeof(struct config_control),
    },
    .headphone_voip = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_headphone_voip_controls,
        .controls_count = sizeof(rt5670_headphone_voip_controls) / sizeof(struct config_control),
    },

    //headset
    .headset_normal = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_headset_normal_controls,
        .controls_count = sizeof(rt5670_headset_normal_controls) / sizeof(struct config_control),
    },
    .headset_incall = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_headset_incall_controls,
        .controls_count = sizeof(rt5670_headset_incall_controls) / sizeof(struct config_control),
    },
    .headset_ringtone = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_headset_ringtone_controls,
        .controls_count = sizeof(rt5670_headset_ringtone_controls) / sizeof(struct config_control),
    },
    .headset_voip = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_headset_voip_controls,
        .controls_count = sizeof(rt5670_headset_voip_controls) / sizeof(struct config_control),
    },

    //bluetooth
    .bluetooth_normal = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_bluetooth_normal_controls,
        .controls_count = sizeof(rt5670_bluetooth_normal_controls) / sizeof(struct config_control),
    },
    .bluetooth_incall = {
        .sound_card = 0,
        .devices = DEVICES_0_1,
        .controls = rt5670_bluetooth_incall_controls,
        .controls_count = sizeof(rt5670_bluetooth_incall_controls) / sizeof(struct config_control),
    },
    .bluetooth_voip = {
        .sound_card = 0,
        .devices = DEVICES_0_1,
        .controls = rt5670_bluetooth_voip_controls,
        .controls_count = sizeof(rt5670_bluetooth_voip_controls) / sizeof(struct config_control),
    },

    //capture
    .main_mic_capture = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_main_mic_capture_controls,
        .controls_count = sizeof(rt5670_main_mic_capture_controls) / sizeof(struct config_control),
    },
    .hands_free_mic_capture = {
        .sound_card = 0,
        .devices = DEVICES_0,
        .controls = rt5670_hands_free_mic_capture_controls,
        .controls_count = sizeof(rt5670_hands_free_mic_capture_controls) / sizeof(struct config_control),
    },
    .bluetooth_sco_mic_capture = {
        .sound_card = 0,
        .devices = DEVICES_0_1,
        .controls = rt5670_bluetooth_sco_mic_capture_controls,
        .controls_count = sizeof(rt5670_bluetooth_sco_mic_capture_controls) / sizeof(struct config_control),
    },

    //off
    .playback_off = {
        .controls = rt5670_playback_off_controls,
        .controls_count = sizeof(rt5670_playback_off_controls) / sizeof(struct config_control),
    },
    .capture_off = {
        .controls = rt5670_capture_off_controls,
        .controls_count = sizeof(rt5670_capture_off_controls) / sizeof(struct config_control),
    },
    .incall_off = {
        .controls = rt5670_incall_off_controls,
        .controls_count = sizeof(rt5670_incall_off_controls) / sizeof(struct config_control),
    },
    .voip_off = {
        .controls = rt5670_voip_off_controls,
        .controls_count = sizeof(rt5670_voip_off_controls) / sizeof(struct config_control),
    },

    //hdmi
    .hdmi_normal = {
        .sound_card = 1,
        .devices = DEVICES_0,
        .controls_count = 0,
    },

    //usb audio
    .usb_normal = {
        .sound_card = 2,
        .devices = DEVICES_0,
        .controls_count = 0,
    },
    .usb_capture = {
        .sound_card = 2,
        .devices = DEVICES_0,
        .controls_count = 0,
    },
};


#endif //_rt5670_CONFIG_H_
