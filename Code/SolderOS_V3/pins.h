#ifndef PINS_H
#define PINS_H

//RGB LED on PCB//

#define LED_B 11 //PWM
#define LED_G 9  //PWM
#define LED_R 10 //PWM

//Buttons extern//

#define ButtonR    7 //no PWM
#define ButtonL    4 //no PWM

//IC2//

#define SDA A4
#define SCL A5

//Buzzer addable//

#define Buzzer 5 //PWM

//Voltage gauge//

#define VoltageGauge A2

//VibrSensor sensor//

#define VibrSensor A1

//Iron temp//

#define IronTemp A0

//MOSFED for soldering iron// 

#define MOSFED 3 //PWM

#endif
