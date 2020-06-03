///*
// * main.c
// *
// *  Created on: May 26, 2020
// *      Author: Connor
// */
//
//#include "bmp280.h"
//#include "adc.h"
//#include "msp.h"
//#include "delay.h"
//
//void main(void){
//    //uint32_t pressure_data, temperature_data, comp_pressure;
//    int32_t comp_temperature, value;
//
//    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;     // stop watchdog timer
//
//    set_DCO(FREQ_12_MHZ);
//
//    /* Initialize ADC */
//    ADC_init();
//
//    /* Initialize SPI */
//    //SPI_init();
//
//    /* Send initial configuration data to BMP */
//    //BMP_init();
//
//    while(1){
//        delay_us(200000);
//
//        if(ADC_get_flag()){
//            ADC_set_flag(0);
//
//            value = ADC_get_digital() & 0x3FF;
//
//            /* Start ADC conversion again */
//            ADC14 -> CTL0 |= ADC14_CTL0_SC;
//        }
//
//        /* BMP testing */
////        pressure_data = read_from_BMP(PRESSURE_READ);
////        temperature_data = read_from_BMP(TEMPERATURE_READ);
////
////        comp_temperature = compensate_temp(temperature_data);
////        comp_pressure = compensate_pressure(pressure_data);
//    }
//
//
//}

