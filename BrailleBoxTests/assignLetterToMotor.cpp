//#include "hwlib.hpp"
//#include "PCA9685.hpp"
//#include "abcMotor.hpp"
#include "assignLetterToMotor.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________

void assignLetterToMotor::letter(char ch){
//    hwlib::cout<<"letterchar: "<<ch;
    write( 0x00, 0b00000001);
    allOff();
    if (ch == 'A'){
        Amotor();
    }
    else if (ch == 'B'){
        Bmotor();
    }
    else if (ch == 'C'){
        Cmotor();
    }
    else if (ch == 'D'){
        Dmotor();
    }
    else if (ch == 'E'){
        Emotor();
    }
    else if (ch == 'F'){
        Fmotor();
    }
    else if (ch == 'G'){
        Gmotor();
    }
    else if (ch == 'H'){
        Hmotor();
    }
    else if (ch == 'I'){
        Imotor();
    } 
    else if (ch == 'J'){
        Jmotor();
    }
        else if (ch == 'K'){
    Kmotor();
        }
    else if (ch == 'L'){
        Lmotor();
    }
    else if (ch == 'M'){
        Mmotor();
    }
    else if (ch == 'N'){
        Nmotor();
    }
    else if (ch == 'O'){
        Omotor();
    }
    else if (ch == 'P'){
        Pmotor();
    }
    else if (ch == 'Q'){
        Qmotor();
    }
    else if (ch == 'R'){
        Rmotor();
    }
    else if (ch == 'S'){
        Smotor();
    }
    else if (ch == 'T'){
        Tmotor();
    }
    else if (ch == 'U'){
        Umotor();
    }
    else if (ch == 'V'){
        Vmotor();
    }
    else if (ch == 'W'){
        Wmotor();
    }
    else if (ch == 'X'){
        Xmotor();
    }
    else if (ch == 'Y'){
        Ymotor();
    }
    else if (ch == 'Z'){
        Zmotor();
    }
    else{
        hwlib::cout<<"Deze input wordt niet herkent: "<<ch <<"\n";
    }
}    
