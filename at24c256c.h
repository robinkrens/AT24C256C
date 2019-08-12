#ifndef __AT24C256C_H
#define __AT24C256C_H

/* HELPER SUBROUTINES DECLARATIONS */
static void start_condition();
static void stop_condition();
static int ack_recv();
static int buf_empty();
static int data_recv();
static int late_recv();
static int delay();

/* PLEASE CHECK .C FILE FOR FUNCTION DESCRIPTIONS  */
extern void eeprom_at24c_init();
extern int eeprom_write(uint16_t addr, char * data, size_t size);
extern int eeprom_erase();
extern int eeprom_read(uint16_t addr, int num, char * rvalues); /* pass buffer in rvalues*/
extern int eeprom_dump();

#endif
