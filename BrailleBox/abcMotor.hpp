#ifndef ABCMOTOR_HPP
#define ABCMOTOR_HPP

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
/// Braille Alphabet with motors
/// \details
/// This class contains every letter of the alphabet in braille and requires the PCA9685 library.
/// This has been tested with Micro Servo 9g, CFsunbird SG90 which is an 180 degrees motor.
/// Other motors, even different brands of the same SG90 types, could have a different effect on the code.
/// In the PCA9685 library you can find the code for the pwm pins, this class simply tells you which motors have to move each letter.
/// NOTE: this is only done for PWM0, 1, 2, 3, 4 and 5. If you would want to use another PWM pin, you would have to assign it first.

class abcMotor: public PCA9685{
private:
    uint8_t i2c_address;
public:
    abcMotor(hwlib::i2c_bus & bus, uint8_t i2c_address):
      PCA9685( bus, i2c_address ){}

/// \brief
/// This is the allOff function
/// \details
/// Unlike the name might suggest, this will NOT turn off the motors.
/// It simply calls the pwm-zero functions. (setting the register values to 0)
/// This function should be considered more as a "waiting" function than an "off" function, 
/// but since it has the same register usage as the leds, I decided to keep the function name the same.
/// Only PWM 0,1,2,3,4 and 5 are done at the moment, since I only need those for my project.
/// I am not entirely sure if this function is required, as I have only tested it WITH this function.
    void allOff();

/// \brief
/// The A-Z motor functions.
/// \details
/// These are the braille alphabet functions that will tell each motor to move up and down (left and right) for each corresponding letter.
/// The motor will first call the pmw-up functions (rotate to the left) then wait 1 second, then call the pwm-zero functions and then wait 19 seconds.
/// The servo motors require a signal of 20ms in total. In this case I put in a for loop, so it repeats itself 7 times.
/// Then there is a 1400 ms wait, so you have some time to be able to feel the motor, before they move back (rotate right) again.
/// The pwm-on functions will be called, followed by a 2ms wait. Then the pwm-zero functions are called again, followed by a 18ms wait.
/// After that theres a 1000ms wait. 
/// This will allow the motor to stay in the same position for a while, so users can tell it's supposed to be like this,
/// and that it is not some sort of glitch. 
/// (for more information about the "on", "zero" and "up" states, read the documentation of the corresponding functions in the PCA9685 class)

/// The "write( 0x00, 0b00000001);" changes a setting in MODE1 of the chip, which will allow you to write to every register.
/// This is added in the assignLetterToMotor file to avoid having the same line of cover over and over again for each letter here. 
/// To manually use one of the A-Zmotor functions WITHOUT the assignLetterToMotor file, simply add the write line within that function.
/// The assignLetterToMotor file also starts with the allOff function, and the A-Z motor functions have NOT been tested seperately without them. 
/// So WITHOUT that file, it is recommended to call the allOff function manually, before using one (or more) of the A-Zleds below.
    void Amotor();
    void Bmotor();
    void Cmotor();
    void Dmotor();
    void Emotor();
    void Fmotor();
    void Gmotor();
    void Hmotor();
    void Imotor();
    void Jmotor();
    void Kmotor();
    void Lmotor();
    void Mmotor();
    void Nmotor();
    void Omotor();
    void Pmotor();
    void Qmotor();
    void Rmotor();
    void Smotor();
    void Tmotor();
    void Umotor();
    void Vmotor();
    void Wmotor();
    void Xmotor();
    void Ymotor();
    void Zmotor();
};

#endif //ABCMOTOR_HPP