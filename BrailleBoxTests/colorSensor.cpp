#include "hwlib.hpp"
#include "colorSensor.hpp"

//____________________________________________________________________________________
//          Copyright Diana Huisen 2019. 
// Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//          https://www.boost.org/LICENSE_1_0.txt)
// NOTE: THIS FILE ALSO USES A PART OF A CODE FROM MAAIKE HOVENKAMP AND FROM INTERNET!
//     (see the Start, Red, Green, Blue and None functions for more information)
//____________________________________________________________________________________


char colorSensor::scanning(){
    hwlib::cout<<"clear = "<<abs(No-None())<<"\n";
//    while(abs(No-None())<5){
    while((abs(No-None()))<10){
        Red();
        Green();
        Blue();
        None();
        hwlib::cout<<"Rbase = "<<Rb<<"RED = "<<Red()<<"\n";
        hwlib::cout<<"Gbase = "<<Gb<<"GREEN = "<<Green()<<"\n";
        hwlib::cout<<"Bbase = "<<Bb<<"BLUE = "<<Blue()<<"\n";
        hwlib::cout<<"None = "<<No<<"NONE = "<<None()<<"\n";
    }
    hwlib::cout<<"clear = "<<abs(No-None())<<"\n";
    if (abs(No-None())<=10){
        scanning();
    }
    else{
        if (((Rb-Red())>(Gb-Green())) && ((Rb-Red())>(Bb-Blue()))){
            hwlib::cout<<"RED\n";
            return 'R';
        }
        else if (((Gb-Green())>(Rb-Red())) && ((Gb-Green())>(Bb-Blue()))){
            hwlib::cout<<"GREEN\n";
            return 'G';
        }
        else if (((Bb-Blue())>(Rb-Red())) && ((Bb-Blue())>(Gb-Green()))){
            hwlib::cout<<"BLUE\n";
            return 'B';
        }
        else{
            scanning();
        }
    }
    return 'X';
}
std::array<int,4> colorSensor::Base(){
    int Rbase;
    int Gbase;
    int Bbase;
    int Nbase;
    for(unsigned int counter = 0; counter<2; counter++){
        Start();
    }
    Nbase = None();
    Rbase = Red();
    Gbase = Green();
    Bbase = Blue();
    hwlib::cout<<"Ready to scan\n";
    return {Rbase,Gbase,Bbase,Nbase};
}
void colorSensor::Start() {
    S0.write(1);
    S1.write(0);
    int start=0;
    int end=0;
    int difference=0;
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    start=hwlib::now_us();
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    end=hwlib::now_us();
    difference=end-start;
}    
int colorSensor::Red(){   
    S2.write(0);
    S3.write(0);
    int Rstart=0;
    int Rend=0;
    int Rdiff=0;
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    Rstart=hwlib::now_us();
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    Rend=hwlib::now_us();
    Rdiff=Rend-Rstart;
    hwlib::wait_ms(100);
    return Rdiff;
}
int colorSensor::Green(){
    S2.write(1);
    S3.write(1);
    int Gstart=0;
    int Gend=0;
    int Gdiff=0;
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    Gstart=hwlib::now_us();
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    Gend=hwlib::now_us();
    Gdiff=Gend-Gstart;
    hwlib::wait_ms(100);
    return Gdiff;
}
int colorSensor::Blue(){
    S2.write(0);
    S3.write(1);
    int Bstart=0;
    int Bend=0;
    int Bdiff=0;
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    Bstart=hwlib::now_us();
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    Bend=hwlib::now_us();
    Bdiff=Bend-Bstart;
    hwlib::wait_ms(100);
    return Bdiff;
}

int colorSensor::None(){    
    S2.write(1);
    S3.write(0);
    int Nstart=0;
    int Nend=0;
    int Ndiff=0;
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    Nstart=hwlib::now_us();
    while(sensorOut.read()==1);
    while(sensorOut.read()==0);
    Nend=hwlib::now_us();
    Ndiff=Nend-Nstart;
    hwlib::wait_ms(100);
    return Ndiff;
}

