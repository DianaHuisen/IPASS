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
    auto testSensor = colorSensor(S0,S1,S2,S3, sensorOut);
    std::array<char,4> RedObject = {'C','A','R','D'};
    std::array<char,4> GreenObject = {'F','R','O','G'};
    std::array<char,6> BlueObject = {'E','R','A','S','E','R'};

    

    std::array<char,26> testLeds = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    std::array<char,26> testMotors = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


//    wait for the terminal emulator to start up
       hwlib::wait_ms( 1'000 );


//////////////////LED TESTS//////////////////

    abcLedtest.ledSequence();
    hwlib::wait_ms( 1'000 );
    abcLedtest.AZledTest();
    hwlib::wait_ms( 1'000 );
       
    for ( unsigned int i = 0; i< testLeds.size(); i++){
        abcLedtest.allOff();
        hwlib::cout<<"letter: "<<testAZ[i]<<"\n";
        assignTest.letter(testAZ[i]);
    }
    hwlib::cout<<"testLeds done\n";

    hwlib::wait_ms( 1'000 );
    
    
/////////////////MOTORS TEST////////////////////
    abcMotortest.AZmotorTest();
    hwlib::wait_ms( 1'000 );
    
    for ( unsigned int i = 0; i< testMotors.size(); i++){
        abcMotortest.allOff();
        hwlib::cout<<"letter: "<<testAZ[i]<<"\n";
        assignMotorTest.letter(testAZ[i]);
    }
    hwlib::cout<<"testMotors done\n";
    
//////////////////COLOR SENSOR TEST//////////////
//this is a while loop, so you cant test the code below if you don't comment this part.
while(1){
    char attempt=testing.scanning();
    if (attempt == 'R'){
        for ( unsigned int i = 0; i< RedObject.size(); i++){
            hwlib::cout<<"letter: "<<RedObject[i]<<"\n";
        }
    }
    else if (attempt == 'G'){ 
        for ( unsigned int i = 0; i< GreenObject.size(); i++){
            hwlib::cout<<"letter: "<<GreenObject[i]<<"\n";
        }
    }
    else if (attempt == 'B'){
        for ( unsigned int i = 0; i< BlueObject.size(); i++){
            hwlib::cout<<"letter: "<<BlueObject[i]<<"\n";
        }
    }
    else{
        hwlib::cout<<"attempt = "<<attempt<<"\n";
    }
    hwlib::wait_ms(1200);
    attempt = 'x';
    }

///////////////COLOR SENSOR TEST WITH LEDS//////////////
//this is a while loop, so you cant test the code below if you don't comment this part.
while(1){
    char attempt=testing.scanning();
    if (attempt == 'R'){
        for ( unsigned int i = 0; i< RedObject.size(); i++){
            abcLedtest.allOff();
            hwlib::cout<<"letter: "<<RedObject[i]<<"\n";
            assignLedTest.letter(RedObject[i]);
        }
    }
    else if (attempt == 'G'){ 
        for ( unsigned int i = 0; i< GreenObject.size(); i++){
            abcLedtest.allOff();
            hwlib::cout<<"letter: "<<GreenObject[i]<<"\n";
            assignLedTest.letter(GreenObject[i]);
        }
    }
    else if (attempt == 'B'){
        for ( unsigned int i = 0; i< BlueObject.size(); i++){
            abcLedtest.allOff();
            hwlib::cout<<"letter: "<<BlueObject[i]<<"\n";
            assignLedTest.letter(BlueObject[i]);
        }
    }
    else{
        hwlib::cout<<"attempt = "<<attempt<<"\n";
    }
    hwlib::wait_ms(1200);
    attempt = 'x';
    }
    
////////////////COLOR SENSOR TEST WITH MOTORS/////////////    
//this is a while loop, it wont stop untill you press the esc key.
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