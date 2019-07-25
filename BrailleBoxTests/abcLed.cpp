//#include "hwlib.hpp"
//#include "PCA9685.hpp"
#include "abcLed.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________


void abcLed::allOff(){
    pwm0zero();
    pwm1zero();
    pwm2zero();
    pwm3zero();
    pwm4zero();
    pwm5zero();
    hwlib::wait_ms(200);
}
void abcLed::ledSequence(){
    write( 0x00, 0b00000001);
    allOff();
    hwlib::wait_ms(200);
    pwm0on();
    hwlib::wait_ms(200);
    pwm0zero();
    hwlib::wait_ms(200);
    pwm1on();
    hwlib::wait_ms(200);
    pwm1zero();
    hwlib::wait_ms(200);
    pwm2on();
    hwlib::wait_ms(200);
    pwm2zero();
    hwlib::wait_ms(200);
    pwm3on();
    hwlib::wait_ms(200);
    pwm3zero();
    hwlib::wait_ms(200);
    pwm4on();
    hwlib::wait_ms(200);
    pwm4zero();
    hwlib::wait_ms(200);
    pwm5on();
    hwlib::wait_ms(200);
    pwm5zero();
    hwlib::wait_ms(200);
    pwm0on();
    pwm1on();
    pwm2on();
    pwm3on();
    pwm4on();
    pwm5on();
    hwlib::wait_ms(200);
    allOff();
    hwlib::wait_ms(200);
}
void abcLed::Aled(){
    pwm0on();
    hwlib::wait_ms(200);
    pwm0zero();
    hwlib::wait_ms(200);
}
void abcLed::Bled(){
    pwm0on();
    pwm2on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm2zero();
    hwlib::wait_ms(200);
}
void abcLed::Cled(){
    pwm0on();
    pwm1on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    hwlib::wait_ms(200);
}
void abcLed::Dled(){
    pwm0on();
    pwm1on();
    pwm3on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    pwm3zero();
    hwlib::wait_ms(200);
}
void abcLed::Eled(){
    pwm0on();
    pwm3on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm3zero();
    hwlib::wait_ms(200);
}
void abcLed::Fled(){
    pwm0on();
    pwm1on();
    pwm2on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    pwm2zero();
    hwlib::wait_ms(200);
}
void abcLed::Gled(){
    pwm0on();
    pwm1on();
    pwm2on();
    pwm3on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    pwm2zero();
    pwm3zero();
    hwlib::wait_ms(200);
}
void abcLed::Hled(){
    pwm0on();
    pwm2on();
    pwm3on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm2zero();
    pwm3zero();
    hwlib::wait_ms(200);
}
void abcLed::Iled(){
    pwm1on();
    pwm2on();
    hwlib::wait_ms(200);
    pwm1zero();
    pwm2zero();
    hwlib::wait_ms(200);
}
void abcLed::Jled(){
    pwm1on();
    pwm2on();
    pwm3on();
    hwlib::wait_ms(200);
    pwm1zero();
    pwm2zero();
    pwm3zero();
    hwlib::wait_ms(200);
}
void abcLed::Kled(){
    pwm0on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Lled(){
    pwm0on();
    pwm2on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm2zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Mled(){
    pwm0on();
    pwm1on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Nled(){
    pwm0on();
    pwm1on();
    pwm3on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    pwm3zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Oled(){
    pwm0on();
    pwm3on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm3zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Pled(){
    pwm0on();
    pwm1on();
    pwm2on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    pwm2zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Qled(){
    pwm0on();
    pwm1on();
    pwm2on();
    pwm3on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    pwm2zero();
    pwm3zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Rled(){
    pwm0on();
    pwm2on();
    pwm3on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm2zero();
    pwm3zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Sled(){
    pwm1on();
    pwm2on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm1zero();
    pwm2zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Tled(){
    pwm1on();
    pwm2on();
    pwm3on();
    pwm4on();
    hwlib::wait_ms(200);
    pwm1zero();
    pwm2zero();
    pwm3zero();
    pwm4zero();
    hwlib::wait_ms(200);
}
void abcLed::Uled(){
    pwm0on();
    pwm4on();
    pwm5on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm4zero();
    pwm5zero();
    hwlib::wait_ms(200);
}
void abcLed::Vled(){
    pwm0on();
    pwm2on();
    pwm4on();
    pwm5on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm2zero();
    pwm4zero();
    pwm5zero();
    hwlib::wait_ms(200);
}
void abcLed::Wled(){
    pwm1on();
    pwm2on();
    pwm3on();
    pwm5on();
    hwlib::wait_ms(200);
    pwm1zero();
    pwm2zero();
    pwm3zero();
    pwm5zero();
    hwlib::wait_ms(200);
}
void abcLed::Xled(){
    pwm0on();
    pwm1on();
    pwm4on();
    pwm5on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    pwm4zero();
    pwm5zero();
    hwlib::wait_ms(200);
}
void abcLed::Yled(){
    pwm0on();
    pwm1on();
    pwm3on();
    pwm4on();
    pwm5on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm1zero();
    pwm3zero();
    pwm4zero();
    pwm5zero();
    hwlib::wait_ms(200);
}
void abcLed::Zled(){
    pwm0on();
    pwm3on();
    pwm4on();
    pwm5on();
    hwlib::wait_ms(200);
    pwm0zero();
    pwm3zero();
    pwm4zero();
    pwm5zero();
    hwlib::wait_ms(200);
}
void abcLed::AZledTest(){
    while(1){
        write( 0x00, 0b00000001);
        allOff();
        Aled();
        Bled();
        Cled();
        Dled();
        Eled();
        Fled();
        Gled();
        Hled();
        Iled();
        Jled();
        Kled();
        Lled();
        Mled();
        Nled();
        Oled();
        Pled();
        Qled();
        Rled();
        Sled();
        Tled();
        Uled();
        Vled();
        Wled();
        Xled();
        Yled();
        Zled();
        hwlib::wait_ms(400);
    }
}
