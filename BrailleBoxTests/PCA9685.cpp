#include "PCA9685.hpp"
#include "hwlib.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________


void PCA9685::write(uint8_t reg, uint8_t value){
    auto transaction = bus.write( i2c_address );
    transaction.write( reg );
    transaction.write( value );
}
void PCA9685::pwm0on(){
    write( 0x09, 0x4); //i=0 OFF_L     needed for led.
    write( 0x08, 100); //i=0 OFF_H
}
void PCA9685::pwm0zero(){
    write( 0x06, 0x0); //i=0 ON_L 
    write( 0x07, 0x0); //i=0 ON_H 
    write( 0x09, 0x0); //i=0 OFF_L 
    write( 0x08, 0x0); //i=0 OFF_H 
}
void PCA9685::pwm0up(){
    write( 0x06, 100); //i=0 ON_L 
}
void PCA9685::pwm1on(){
    write( 0x0D, 100); //i=1 OFF_H
}
void PCA9685::pwm1zero(){
    write( 0x0A, 0x0); //i=1 ON_L
    write( 0x0B, 0x0); //i=1 ON_H
    write( 0x0C, 0x0); //i=1 OFF_L 
    write( 0x0D, 0x0); //i=1 OFF_H
}
void PCA9685::pwm1up(){
    write( 0x0A, 255); //i=1 ON_L
    write( 0x0B, 0x4); //i=1 ON_H
}
void PCA9685::pwm2on(){
    write( 0x11, 100); //i=2 OFF_H 
}
void PCA9685::pwm2zero(){
    write( 0x0E, 0x0); //i=2 ON_L
    write( 0x0F, 0x0); //i=2 ON_H
    write( 0x10, 0x0); //i=2 OFF_L 
    write( 0x11, 0x0); //i=2 OFF_H
}
void PCA9685::pwm2up(){
    write( 0x0E, 255); //i=2 ON_L
    write( 0x0F, 0x4); //i=2 ON_H 
}
void PCA9685::pwm3on(){
    write( 0x15, 100); //i=3 OFF_H
}
void PCA9685::pwm3zero(){
    write( 0x12, 0x0); //i=3 ON_L
    write( 0x13, 0x0); //i=3 ON_H
    write( 0x14, 0x0); //i=3 OFF_L 
    write( 0x15, 0x0); //i=3 OFF_H 
}
void PCA9685::pwm3up(){
    write( 0x12, 255); //i=3 ON_L
    write( 0x13, 0x4); //i=3 ON_H 
}
void PCA9685::pwm4on(){
    write( 0x19, 100); //i=4 OFF_H
}
void PCA9685::pwm4zero(){
    write( 0x16, 0x0); //i=4 ON_L
    write( 0x17, 0x0); //i=4 ON_H
    write( 0x18, 0x0); //i=4 OFF_L 
    write( 0x19, 0x0); //i=4 OFF_H
}
void PCA9685::pwm4up(){
    write( 0x16, 255); //i=4 ON_L
    write( 0x17, 0x4); //i=4 ON_H 
}
void PCA9685::pwm5on(){
    write( 0x1D, 100); //i=5 OFF_H
}
void PCA9685::pwm5zero(){
    write( 0x1A, 0x0); //i=5 ON_L
    write( 0x1B, 0x0); //i=5 ON_H
    write( 0x1C, 0x0); //i=5 OFF_L
    write( 0x1D, 0x0); //i=5 OFF_H 
}
void PCA9685::pwm5up(){
    write( 0x1A, 255); //i=5 ON_L
    write( 0x1B, 0x4); //i=5 ON_H 
}
void PCA9685::pwm6on(){
    write( 0x21, 100); //i=6 OFF_H
}
void PCA9685::pwm6zero(){
    write( 0x1E, 0x0); //i=6 ON_L
    write( 0x1F, 0x0); //i=6 ON_H
    write( 0x20, 0x0); //i=6 OFF_L
    write( 0x21, 0x0); //i=6 OFF_H 
}
void PCA9685::pwm6up(){
    write( 0x1E, 255); //i=6 ON_L
    write( 0x1F, 0x4); //i=6 ON_H
}
void PCA9685::pwm7on(){
    write( 0x25, 100); //i=7 OFF_H 
}
void PCA9685::pwm7zero(){
    write( 0x22, 0x0); //i=7 ON_L
    write( 0x23, 0x0); //i=7 ON_H
    write( 0x24, 0x0); //i=7 OFF_L 
    write( 0x25, 0x0); //i=7 OFF_H
}
void PCA9685::pwm7up(){
    write( 0x22, 255); //i=7 ON_L
    write( 0x23, 0x4); //i=7 ON_H 
}
void PCA9685::pwm8on(){
    write( 0x29, 100); //i=8 OFF_H
}
void PCA9685::pwm8zero(){
    write( 0x26, 0x0); //i=8 ON_L
    write( 0x27, 0x0); //i=8 ON_H
    write( 0x28, 0x0); //i=8 OFF_L 
    write( 0x29, 0x0); //i=8 OFF_H 
}
void PCA9685::pwm8up(){
    write( 0x26, 255); //i=8 ON_L
    write( 0x27, 0x4); //i=8 ON_H 
}
void PCA9685::pwm9on(){
    write( 0x2D, 100); //i=9 OFF_H
}
void PCA9685::pwm9zero(){
    write( 0x2A, 0x0); //i=9 ON_L
    write( 0x2B, 0x0); //i=9 ON_H
    write( 0x2C, 0x0); //i=9 OFF_L 
    write( 0x2D, 0x0); //i=9 OFF_H
}
void PCA9685::pwm9up(){
    write( 0x2A, 255); //i=4 ON_L
    write( 0x2B, 0x4); //i=4 ON_H 
}
void PCA9685::pwm10on(){
    write( 0x31, 100); //i=10 OFF_H
}
void PCA9685::pwm10zero(){
    write( 0x2E, 0x0); //i=10 ON_L
    write( 0x2F, 0x0); //i=10 ON_H
    write( 0x30, 0x0); //i=10 OFF_L
    write( 0x31, 0x0); //i=10 OFF_H 
}
void PCA9685::pwm10up(){
    write( 0x2E, 255); //i=5 ON_L
    write( 0x2F, 0x4); //i=5 ON_H 
}
void PCA9685::pwm11on(){
    write( 0x35, 100); //i=11 OFF_H
}
void PCA9685::pwm11zero(){
    write( 0x32, 0x0); //i=11 ON_L
    write( 0x33, 0x0); //i=11 ON_H
    write( 0x34, 0x0); //i=11 OFF_L
    write( 0x35, 0x0); //i=11 OFF_H 
}
void PCA9685::pwm11up(){
    write( 0x32, 255); //i=11 ON_L
    write( 0x33, 0x4); //i=11 ON_H
}
void PCA9685::pwm12on(){
    write( 0x39, 100); //i=12 OFF_H 
}
void PCA9685::pwm12zero(){
    write( 0x36, 0x0); //i=12 ON_L
    write( 0x37, 0x0); //i=12 ON_H
    write( 0x38, 0x0); //i=12 OFF_L 
    write( 0x39, 0x0); //i=12 OFF_H
}
void PCA9685::pwm12up(){
    write( 0x36, 255); //i=12 ON_L
    write( 0x37, 0x4); //i=12 ON_H 
}
void PCA9685::pwm13on(){
    write( 0x3D, 100); //i=13 OFF_H
}
void PCA9685::pwm13zero(){
    write( 0x3A, 0x0); //i=13 ON_L
    write( 0x3B, 0x0); //i=13 ON_H
    write( 0x3C, 0x0); //i=13 OFF_L 
    write( 0x3D, 0x0); //i=13 OFF_H 
}
void PCA9685::pwm13up(){
    write( 0x3A, 255); //i=13 ON_L
    write( 0x3B, 0x4); //i=13 ON_H 
}
void PCA9685::pwm14on(){
    write( 0x41, 100); //i=14 OFF_H
}
void PCA9685::pwm14zero(){
    write( 0x3E, 0x0); //i=14 ON_L
    write( 0x3F, 0x0); //i=14 ON_H
    write( 0x40, 0x0); //i=14 OFF_L 
    write( 0x41, 0x0); //i=14 OFF_H
}
void PCA9685::pwm14up(){
    write( 0x3E, 255); //i=14 ON_L
    write( 0x3F, 0x4); //i=14 ON_H 
}
void PCA9685::pwm15on(){
    write( 0x45, 100); //i=15 OFF_H
}
void PCA9685::pwm15zero(){
    write( 0x42, 0x0); //i=15 ON_L
    write( 0x43, 0x0); //i=15 ON_H
    write( 0x44, 0x0); //i=15 OFF_L
    write( 0x45, 0x0); //i=15 OFF_H 
}
void PCA9685::pwm15up(){
    write( 0x42, 255); //i=15 ON_L
    write( 0x43, 0x4); //i=15 ON_H 
}
