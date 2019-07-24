#ifndef ASSIGNLETTERTOMOTOR_HPP
#define ASSIGNLETTERTOMOTOR_HPP

//#include "hwlib.hpp"
//#include "PCA9685.hpp"
#include "abcMotor.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________


/// @file

/// \brief
/// Assigns Alphabet letter to the correct abcMotor function.
/// \details
/// This class assigns the correct alphabet letter to the corresponding abcMotor function.

class assignLetterToMotor: public abcMotor{
private:
    uint8_t i2c_address;
public:
    assignLetterToMotor(hwlib::i2c_bus & bus, uint8_t i2c_address):
      abcMotor( bus, i2c_address ){}
      
/// \brief
/// Checks and assigns Alphabet letter to the correct abcMotor function.
/// \details
/// This function checks for each character if it is a match, to see which (capital) letter it is.
/// Then it calls the corresponding abcMotor function for it.
/// If the input is invalid, a message will show up on your screen, this code only checks for A-Z. 
    void letter(char ch);
};
#endif //ASSIGNLETTERTOMOTOR