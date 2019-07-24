#ifndef ABCLED_HPP
#define ABCLED_HPP

//#include "hwlib.hpp"
#include "PCA9685.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________


/// @file

/// \brief
/// Braille Alphabet with leds
/// \details
/// This class contains every letter of the alphabet in braille and requires the PCA9685 library.
/// In the PCA9685 library you can find the code for the pwm pins, this class simply tells you which leds have to go on for each letter.
/// NOTE: this is only done for PWM0, 1, 2, 3, 4 and 5. If you would want to use another PWM pin, you would have to assign it first.

class abcLed: public PCA9685{
private:
    uint8_t i2c_address;
public:
    abcLed(hwlib::i2c_bus & bus, uint8_t i2c_address):
      PCA9685( bus, i2c_address ){}
      
/// \brief
/// This is the allOff function
/// \details
/// This will turn off every led, by calling the pwm-zero functions. (setting the register values to 0)
/// Without this function, there's a chance that not all leds are off, which makes it much harder to see which led actually should be on.
/// Only PWM 0,1,2,3,4 and 5 are done at the moment, since I only need those for my project.
    void allOff();

/// \brief
/// The A-Z led functions.
/// \details
/// These are the braille alphabet functions that will show each corresponding letter in braille with leds. 
/// The leds will be on for 200 ms and then off again for 200 ms.
/// For example, Aled turns on pwm(led)0, then waits 200 ms before turning it off again.
/// The "write( 0x00, 0b00000001);" changes a setting in MODE1 of the chip, which will allow you to write to every register.
/// This is added in the assignLetterToLed file to avoid having the same line of cover over and over again for each letter here.
/// To manually use one of the A-Zled functions WITHOUT the assignLetterToLed file, simply add the write line within that function.
/// The assignLetterToLed file also starts with the allOff function, to avoid any errors with leds that might still be on. 
/// WITHOUT that file, it is recommended to call the allOff function manually, before using one (or more) of the A-Zleds below.
    void Aled();
    void Bled();
    void Cled();
    void Dled();
    void Eled();
    void Fled();
    void Gled();
    void Hled();
    void Iled();
    void Jled();
    void Kled();
    void Lled();
    void Mled();
    void Nled();
    void Oled();
    void Pled();
    void Qled();
    void Rled();
    void Sled();
    void Tled();
    void Uled();
    void Vled();
    void Wled();
    void Xled();
    void Yled();
    void Zled();
};

#endif //ABCLED_HPP