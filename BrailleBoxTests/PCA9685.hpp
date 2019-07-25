#ifndef PCA9685_HPP
#define PCA9685_HPP

#include "hwlib.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________


/// @file

/// \brief
/// PCA9685 I2C LED/SERVO CONTROLLER
/// \details
/// This chip uses PWM and I2C, in this library, the code is focused on PWM pins 0,1,2,3,4 and 5
/// The library works for both leds and motors. The code uses the hwlib library for the i2c part.
/// There are 3 states that this library uses, "on", "zero" and "up". "on" and "zero" are needed for the leds.
/// All 3 states are needed for the motors.
///

class PCA9685 {
private:
   hwlib::i2c_bus & bus;
   uint8_t i2c_address;
public:
/// \brief
/// PCA9685 constructor
/// \details
/// This is the constructor, it uses the i2c_bus_bit_banged_scl_sda from hwlib, and the i2c adress.
/// This chip uses 0x40 as default adress, but this will be assigned in the main.cpp file, since it might be different for some people.
   PCA9685( hwlib::i2c_bus & bus, uint8_t i2c_address ):
      bus( bus ), i2c_address( i2c_address )
   {}      
   
/// \brief 
/// The write function
/// \details
/// The write function allows the user to write data to the chip, by using a register and a value.
/// These are variables, 255 is the highest value possible for "value".
    void write( uint8_t reg, uint8_t value);

/// \brief 
/// The read function
/// \details
/// The read function allows the user to read data from a register.
/// This part is not required for the code to work, but it allows you to check if your data is being send and received properly.    
    uint8_t read8( uint8_t reg );
   
/// \brief 
/// The pwm0on function
/// \details
/// The pwm0on function sends the value 100 to the OFF_H register of the pwm0 pin. 
/// This function will allow leds to turn on, and motors will rotate (about 90 degrees) to the right.
/// Unlike the other pwm-on functions, the pwm0on function also sends the value 0x04 to the OFF_L register of the pwm0 pin.
/// This value is NOT required for the motors, but it IS for the leds. Without the value 0x04, the led shines very dimly.
/// This value does NOT seem to affect the motors, therefore it is not required for the motors, but leaving it in the code doesn't do any harm either.    
    void pwm0on();
    
/// \brief 
/// The pwm0zero function
/// \details
/// The pwm0zero function sends the value 0 to EVERY register belonging to the pwm0 pin. 
/// This is the register for ON_L, ON_H, OFF_L and OFF_H.
/// This function will allow leds to turn off, and is some sort of "wait" state for the motors.
    void pwm0zero();
    
/// \brief 
/// The pwm0up function
/// \details
/// The pwm0up function sends the value 100 to the ON_L register of the pwm0 pin. 
/// This function will allow motors to rotate (about 90 degrees) to the left.
/// Unlike the other pwm-up functions, the pwm0up function DOES NOT send the value 0x04 to the ON_H register of the pwm pin.
/// Without the value 0x04 on the OTHER pwm pin registers, the motor either DOES NOT rotate at all, or rotates a bit to the right.
/// This value does NOT seem to be needed for the pmw0 pin, and I have NOT tested it WITH this pin, only WITHOUT.    
    void pwm0up();
 
/// \brief 
/// The pwm1 on, zero and up functions
/// \details
/// See the pwm0 functions.   
    void pwm1on();
    void pwm1zero();
    void pwm1up();

/// \brief 
/// The pwm2 on, zero and up functions
/// \details
/// See the pwm0 functions.     
    void pwm2on();
    void pwm2zero();
    void pwm2up();
    
/// \brief 
/// The pwm3 on, zero and up functions
/// \details
/// See the pwm0 functions. 
    void pwm3on();
    void pwm3zero();
    void pwm3up();
    
/// \brief 
/// The pwm4 on, zero and up functions
/// \details
/// See the pwm0 functions. 
    void pwm4on();
    void pwm4zero();
    void pwm4up();

/// \brief 
/// The pwm5 on, zero and up functions
/// \details
/// See the pwm0 functions. 
    void pwm5on();
    void pwm5zero();
    void pwm5up();
};

#endif //PCA9685_HPP