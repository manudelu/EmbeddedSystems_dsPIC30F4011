/*
 * File:   headers.h
 * Authors: Delucchi Manuel S4803977, Matteo Cappellini S4822622
 */

#ifndef HEADERS_H
#define	HEADERS_H

#include "xc.h"

// Definition of timers and buffer size.
#define TIMER1 1 
#define TIMER2 2
#define TIMER3 3
#define BUFFER_SIZE 16

// Define the CircularBuffer structure
typedef struct {
    char buffer[BUFFER_SIZE];
    int head;
    int tail;
    int count;
    int to_read;
} CircularBuffer;

// Definition of Timer related functions
void algorithm();
void tmr_setup_period(int timer, int ms); 
void tmr_wait_period(int timer);
void tmr_wait_ms(int timer, int ms);

// Definition of SPI related functions
void spi_setup();
void lcd_move_cursor(short position);
void lcd_write(short start, char str);
void lcd_clear(short start, short n); 

// Definition of UART related functions
void uart_setup();
void uart_write(int count);

// Definition for Circular Buffer related functions
void cb_push(volatile CircularBuffer *cb, char data);
int cb_pop(volatile CircularBuffer *cb, char *data);

#endif
