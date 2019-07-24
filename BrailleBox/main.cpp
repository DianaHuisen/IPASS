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
    auto abcLedtest = abcLed( i2c_bus, 0x40 );
    auto assignTest = assignLetterToLed( i2c_bus, 0x40 );
    auto abcMotortest = abcMotor( i2c_bus, 0x40 );
    auto assignMotorTest = assignLetterToMotor( i2c_bus, 0x40 );
    auto S0 = hwlib::target::pin_out(hwlib::target::pins::d4);
    auto S1 = hwlib::target::pin_out(hwlib::target::pins::d5);
    auto S2 = hwlib::target::pin_out(hwlib::target::pins::d6);
    auto S3 = hwlib::target::pin_out(hwlib::target::pins::d7);
    auto sensorOut = hwlib::target::pin_in(hwlib::target::pins::d8);
    auto testing = colorSensor(S0,S1,S2,S3, sensorOut);
    std::array<char,4> RedObject = {'C','A','R','D'};
    std::array<char,4> GreenObject = {'F','R','O','G'};
    std::array<char,6> BlueObject = {'E','R','A','S','E','R'};

    

//    std::array<char,26> testAZ = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//    std::array<char,20> testAZ = {'A','B', 'C', 'D', 'E', 'F', 'G','H','I','J', 'K','L','M','N','O','P','Q','R','S','T'};
//    wait for the terminal emulator to start up
       hwlib::wait_ms( 1'000 );
//   for ( unsigned int i = 0; i< testAZ.size(); i++){
//        abcLedtest.allOff();
//        hwlib::cout<<"letter: "<<testAZ[i]<<"\n";
//        assignTest.letter(testAZ[i]);
//    }
//    hwlib::cout<<"AZ done\n";
//std::array<char,3> testAZ = {'A','I','A'};
//    hwlib::wait_ms( 1'000 );
//   for ( unsigned int i = 0; i< testAZ.size(); i++){
//        abcMotortest.allOff();
//        hwlib::cout<<"letter: "<<testAZ[i]<<"\n";
//        assignMotorTest.letter(testAZ[i]);
//    }
//    hwlib::cout<<"AZ done\n";
//    abcLedtest.ledSequence();
    

//    while(1){
//    char attempt=testing.scanning();
//    if (attempt == 'R'){
//        for ( unsigned int i = 0; i< RedObject.size(); i++){
//            abcLedtest.allOff();
//            hwlib::cout<<"letter: "<<RedObject[i]<<"\n";
//            assignTest.letter(RedObject[i]);
//        }
//    }
//    else if (attempt == 'G'){ 
//        for ( unsigned int i = 0; i< GreenObject.size(); i++){
//            abcLedtest.allOff();
//            hwlib::cout<<"letter: "<<GreenObject[i]<<"\n";
//            assignTest.letter(GreenObject[i]);
//        }
//    }
//    else if (attempt == 'B'){
//        for ( unsigned int i = 0; i< BlueObject.size(); i++){
//            abcLedtest.allOff();
//            hwlib::cout<<"letter: "<<BlueObject[i]<<"\n";
//            assignTest.letter(BlueObject[i]);
//        }
//    }
//    else{
//        hwlib::cout<<"attempt = "<<attempt<<"\n";
//    }
//    hwlib::wait_ms(1200);
//    attempt = 'x';
//    }
 while(1){
    char attempt=testing.scanning();
    if (attempt == 'R'){
        for ( unsigned int i = 0; i< RedObject.size(); i++){
            abcMotortest.allOff();
            hwlib::cout<<"letter: "<<RedObject[i]<<"\n";
            assignMotorTest.letter(RedObject[i]);
        }
    }
    else if (attempt == 'G'){ 
        for ( unsigned int i = 0; i< GreenObject.size(); i++){
            abcMotortest.allOff();
            hwlib::cout<<"letter: "<<GreenObject[i]<<"\n";
            assignMotorTest.letter(GreenObject[i]);
        }
    }
    else if (attempt == 'B'){
        for ( unsigned int i = 0; i< BlueObject.size(); i++){
            abcLedtest.allOff();
            hwlib::cout<<"letter: "<<BlueObject[i]<<"\n";
            assignMotorTest.letter(BlueObject[i]);
        }
    }
    else{
        hwlib::cout<<"attempt = "<<attempt<<"\n";
    }
    hwlib::wait_ms(1200);
    attempt = 'x';
    }
}  