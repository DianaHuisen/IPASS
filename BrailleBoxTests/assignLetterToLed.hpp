#ifndef ASSIGNLETTERTOLED_HPP
#define ASSIGNLETTERTOLED_HPP

//#include "hwlib.hpp"
//#include "PCA9685.hpp"
#include "abcLed.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________


/// @file

/// \brief
/// Assigns Alphabet letter to the correct abcLed function.
/// \details
/// This class assigns the correct alphabet letter to the corresponding abcLed function.

class assignLetterToLed: public abcLed{
private:
    uint8_t i2c_address;
public:
    assignLetterToLed(hwlib::i2c_bus & bus, uint8_t i2c_address):
      abcLed( bus, i2c_address ){}

/// \brief
/// Checks and assigns Alphabet letter to the correct abcLed function.
/// \details
/// This function checks for each character if it is a match, to see which (capital) letter it is.
/// Then it calls the corresponding abcLed function for it.
/// If the input is invalid, a message will show up on your screen, this code only checks for A-Z. 
    void letter(char ch);
};


#endif //ASSIGNLETTERTOLED