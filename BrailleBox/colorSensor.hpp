#include "hwlib.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
// NOTE: THIS FILE ALSO USES A PART OF A CODE FROM MAAIKE HOVENKAMP AND FROM INTERNET!
//     (see the Start, Red, Green, Blue and None functions for more information)
//____________________________________________________________________________________


/// @file
///\brief
/// This is the class for the TCS3200 color sensor.
///\details
/// This class only uses Red, Green and Blue as color options.
/// NOTE: THIS FILE ALSO USES A PART OF A CODE FROM MAAIKE HOVENKAMP AND FROM INTERNET!
//     (see the Start, Red, Green, Blue and None functions for more information)

class colorSensor{
private:
    hwlib::target::pin_out & S0;
    hwlib::target::pin_out & S1;
    hwlib::target::pin_out & S2;
    hwlib::target::pin_out & S3;
    hwlib::target::pin_in & sensorOut;
public:
   colorSensor( hwlib::target::pin_out & S0, hwlib::target::pin_out & S1, hwlib::target::pin_out & S2, hwlib::target::pin_out & S3, 
    hwlib::target::pin_in & sensorOut ): S0(S0), S1(S1), S2(S2), S3(S3), sensorOut(sensorOut){}    

///\brief
/// The scanning function
///\details
/// Checks if theres something in front of the sensor, if there is, it picks the color of the highest value (Red, Green or Blue).
/// Depending on how sensitive it reacts, you might want to switch between the "while(abs(No-None())<5){" and 
/// the "while((abs(No-None()))<10){" lines of code.
/// The <10 line of code is LESS sensitive than the <5 one.
char scanning();

///\brief
/// The BaseColor part
///\details
/// uses the Base function (see the one below this one), and sets the base for every color. 
/// Rb for Red base, Gb for Green base, Bb for Blue base and No for None (no object).
std::array<int,4>BaseColors = Base();
int Rb=BaseColors[0];
int Gb=BaseColors[1];
int Bb=BaseColors[2];
int No=BaseColors[3];

///\brief
/// The Base function
///\details
/// The first value usually is off, so this code uses the 2nd value of the Start function (see below).
/// After that it calls the other functions, and sets those values in an (int) array. 
std::array<int,4> Base();

///\brief
/// Start, Red, Green, Blue and none functions, COPYRIGHT: PART OF THIS CODE COMES FROM MAAIKE HOVENKAMP AND FROM INTERNET!
///\details
/// ____________________________________________________
/// COPYRIGHT:
///     THIS PART COMES FROM MAAIKE HOVENKAMP:
///"    while(sensorOut.read()==1);
///     while(sensorOut.read()==0);
///     start=hwlib::now_us();
///     while(sensorOut.read()==1);
///     while(sensorOut.read()==0);
///     end=hwlib::now_us(); " 
/// her github: https://github.com/MHovenkamp/Chonkie/tree/master/IPASS.
/// __________________________________________________________________
/// the Start, Red, Green and Blue filter parts are from 
/// https://howtomechatronics.com/tutorials/arduino/arduino-color-sensing-tutorial-tcs230-tcs3200-color-sensor/
/// but rewritten so it works with hwlib instead of Arduino library. 
/// __________________________________________________________________
///
/// Start will set the frequency-scaling to 20%.
/// Red is to set Red filtered photodiodes to be read.
/// Green is to set Green filtered photodiodes to be read.
/// Blue is to set Blue filtered photodiodes to be read.
/// None is to set no filter.
/// These functions set the filters and calculate the time of one pulse wave.

void Start();

int Red();
  // Setting Green filtered photodiodes to be read
int Green();
  // Setting Blue filtered photodiodes to be read
int Blue();

int None();
};
