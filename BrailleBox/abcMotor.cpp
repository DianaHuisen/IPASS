//#include "hwlib.hpp"
//#include "PCA9685.hpp"
#include "abcMotor.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________


void abcMotor::allOff(){
    pwm0zero();
    pwm1zero();
    pwm2zero();
    pwm3zero();
    pwm4zero();
    pwm5zero();
    hwlib::wait_ms(200);
}

void abcMotor::Amotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        hwlib::wait_ms(1);
        pwm0zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
    
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        hwlib::wait_ms(2);
        pwm0zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Bmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm2up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm2zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm2on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm2zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Cmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Dmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        pwm3up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        pwm3zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
    
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        pwm3on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        pwm3zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Emotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm3up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm3zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
    
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm3on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm3zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}    
void abcMotor::Fmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        pwm2up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        pwm2zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
    
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        pwm2on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        pwm2zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Gmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        pwm2up();
        pwm3up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        pwm2zero();
        pwm3zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        pwm2on();
        pwm3on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        pwm2zero();
        pwm3zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Hmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm2up();
        pwm3up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm2zero();
        pwm3zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm2on();
        pwm3on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm2zero();
        pwm3zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Imotor(){
    for (unsigned i=0; i<7; i++) {
        pwm1up();
        pwm2up();
        hwlib::wait_ms(1);
        pwm1zero();
        pwm2zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm1on();
        pwm2on();
        hwlib::wait_ms(2);
        pwm1zero();
        pwm2zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Jmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm1up();
        pwm2up();
        pwm3up();
        hwlib::wait_ms(1);
        pwm1zero();
        pwm2zero();
        pwm3zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm1on();
        pwm2on();
        pwm3on();
        hwlib::wait_ms(2);
        pwm1zero();
        pwm2zero();
        pwm3zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Kmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Lmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm2up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm2zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
    
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm2on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm2zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Mmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
    
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Nmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        pwm3up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        pwm3on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Omotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm3up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm3on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Pmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        pwm2up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        pwm2zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        pwm2on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        pwm2zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Qmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        pwm2up();
        pwm3up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        pwm2zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        pwm2on();
        pwm3on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        pwm2zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Rmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm2up();
        pwm3up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm2zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm2on();
        pwm3on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm2zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Smotor(){
    for (unsigned i=0; i<7; i++) {
        pwm1up();
        pwm2up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm1zero();
        pwm2zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
    
    for (unsigned i=0; i<6; i++) {
        pwm1on();
        pwm2on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm1zero();
        pwm2zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Tmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm1up();
        pwm2up();
        pwm3up();
        pwm4up();
        hwlib::wait_ms(1);
        pwm1zero();
        pwm2zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm1on();
        pwm2on();
        pwm3on();
        pwm4on();
        hwlib::wait_ms(2);
        pwm1zero();
        pwm2zero();
        pwm3zero();
        pwm4zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}   
void abcMotor::Umotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm4up();
        pwm5up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm4on();
        pwm5on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Vmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm2up();
        pwm4up();
        pwm5up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm2zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm2on();
        pwm4on();
        pwm5on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm2zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Wmotor(){
        for (unsigned i=0; i<7; i++) {
        pwm1up();
        pwm2up();
        pwm3up();
        pwm5up();
        hwlib::wait_ms(1);
        pwm1zero();
        pwm2zero();
        pwm3zero();
        pwm5zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm1on();
        pwm2on();
        pwm3on();
        pwm5on();
        hwlib::wait_ms(2);
        pwm1zero();
        pwm2zero();
        pwm3zero();
        pwm5zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Xmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        pwm4up();
        pwm5up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        pwm4on();
        pwm5on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Ymotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm1up();
        pwm3up();
        pwm4up();
        pwm5up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm1zero();
        pwm3zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
        
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm1on();
        pwm3on();
        pwm4on();
        pwm5on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm1zero();
        pwm3zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}
void abcMotor::Zmotor(){
    for (unsigned i=0; i<7; i++) {
        pwm0up();
        pwm3up();
        pwm4up();
        pwm5up();
        hwlib::wait_ms(1);
        pwm0zero();
        pwm3zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(19);
    }
    hwlib::wait_ms(1400);
    
    for (unsigned i=0; i<6; i++) {
        pwm0on();
        pwm3on();
        pwm4on();
        pwm5on();
        hwlib::wait_ms(2);
        pwm0zero();
        pwm3zero();
        pwm4zero();
        pwm5zero();
        hwlib::wait_ms(18);
    }
    hwlib::wait_ms(1000);
}