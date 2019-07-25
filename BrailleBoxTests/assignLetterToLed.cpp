//#include "hwlib.hpp"
//#include "PCA9685.hpp"
//#include "abcLed.hpp"
#include "assignLetterToLed.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
//____________________________________________________________________________________


void assignLetterToLed::letter(char ch){
//    hwlib::cout<<"letterchar: "<<ch;
    write( 0x00, 0b00000001);
    allOff();
    if (ch == 'A'){
        Aled();
    }
    else if (ch == 'B'){
        Bled();
    }
    else if (ch == 'C'){
        Cled();
    }
    else if (ch == 'D'){
        Dled();
    }
    else if (ch == 'E'){
        Eled();
    }
    else if (ch == 'F'){
        Fled();
    }
    else if (ch == 'G'){
        Gled();
    }
    else if (ch == 'H'){
        Hled();
    }
    else if (ch == 'I'){
        Iled();
    } 
    else if (ch == 'J'){
        Jled();
    }
    else if (ch == 'K'){
        Kled();
    }
    else if (ch == 'L'){
        Lled();
    }
    else if (ch == 'M'){
        Mled();
    }
    else if (ch == 'N'){
        Nled();
    }
    else if (ch == 'O'){
        Oled();
    }
    else if (ch == 'P'){
        Pled();
    }
    else if (ch == 'Q'){
        Qled();
    }
    else if (ch == 'R'){
        Rled();
    }
    else if (ch == 'S'){
        Sled();
    }
    else if (ch == 'T'){
        Tled();
    }
    else if (ch == 'U'){
        Uled();
    }
    else if (ch == 'V'){
        Vled();
    }
    else if (ch == 'W'){
        Wled();
    }
    else if (ch == 'X'){
        Xled();
    }
    else if (ch == 'Y'){
        Yled();
    }
    else if (ch == 'Z'){
        Zled();
    }
    else{
        hwlib::cout<<"This input is not recognised: "<<ch <<"\n";
    }
}