#include "hwlib.hpp"
#include "PCA9685.hpp"
#include "abcLed.hpp"
#include "assignLetterToLed.hpp"
#include "abcMotor.hpp"
#include "assignLetterToMotor.hpp"
#include "colorSensor.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________


int main( void ){
 
    auto scl      = hwlib::target::pin_oc{ hwlib::target::pins::scl };
    auto sda      = hwlib::target::pin_oc{ hwlib::target::pins::sda };
    auto i2c_bus  = hwlib::i2c_bus_bit_banged_scl_sda{ scl,sda };
    auto chip     = PCA9685( i2c_bus, 0x40 );
    auto abcLeds = abcLed( i2c_bus, 0x40 );
    auto assignToLed = assignLetterToLed( i2c_bus, 0x40 );
    auto abcMotors = abcMotor( i2c_bus, 0x40 );
    auto assignToMotor = assignLetterToMotor( i2c_bus, 0x40 );
    auto S0 = hwlib::target::pin_out(hwlib::target::pins::d4);
    auto S1 = hwlib::target::pin_out(hwlib::target::pins::d5);
    auto S2 = hwlib::target::pin_out(hwlib::target::pins::d6);
    auto S3 = hwlib::target::pin_out(hwlib::target::pins::d7);
    auto sensorOut = hwlib::target::pin_in(hwlib::target::pins::d8);
    auto sensor = colorSensor(S0,S1,S2,S3, sensorOut);
    std::array<char,4> RedObject = {'C','A','R','D'};
    std::array<char,4> GreenObject = {'F','R','O','G'};
    std::array<char,6> BlueObject = {'E','R','A','S','E','R'};

//    wait for the terminal emulator to start up
       hwlib::wait_ms( 1'000 );

 while(1){
    char color=sensor.scanning();
    if (color == 'R'){
        for ( unsigned int i = 0; i< RedObject.size(); i++){
            abcMotors.allOff();
            hwlib::cout<<"letter: "<<RedObject[i]<<"\n";
            assignToMotor.letter(RedObject[i]);
        }
    }
    else if (color == 'G'){ 
        for ( unsigned int i = 0; i< GreenObject.size(); i++){
            abcMotors.allOff();
            hwlib::cout<<"letter: "<<GreenObject[i]<<"\n";
            assignToMotor.letter(GreenObject[i]);
        }
    }
    else if (color == 'B'){
        for ( unsigned int i = 0; i< BlueObject.size(); i++){
            abcMotors.allOff();
            hwlib::cout<<"letter: "<<BlueObject[i]<<"\n";
            assignToMotor.letter(BlueObject[i]);
        }
    }
    else{
        hwlib::cout<<"color = "<<color<<"\n";
    }
    hwlib::wait_ms(1200);
    color = 'x';
    }
}  