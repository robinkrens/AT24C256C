/* (CC-BY-NC-SA) ROBIN KRENS - ROBIN @ ROBINKRENS.NL
 * 
 * $LOG$
 * 2019/8/12 - ROBIN KRENS	
 * Initial version 
 * 
 * $DESCRIPTION$
 * Example usage for the AT24C256C EEPROM Chip
 *
 * */

#include <stdint.h>
#include <lib/tinyprintf.h>
#include <drivers/at24c256.h> 

int main() {

	/* Write data starting at 0x1000 */
	char * gd = "Testing the EEPROM chip AT24C256 write and read function";
	eeprom_write(0x1000, gd, strlen(gd));
 
        /* Display data starting at 0x1000 
	 * Output see example.png */
	uint16_t curr_addr = 0x1000;
 	for (int i = 0; i < 4; i++) {
 
                 if(eeprom_read(curr_addr, 16, eeprombuf) == -1) {
                         printf("Can't (continue) dump");
                         return -1;
                 }
                 printf("%#x: ", curr_addr);
                 for (int i = 0; i < strlen(eeprombuf); i++) {
                         printf("%x ", eeprombuf[i]);
                 }
                 printf("\n");
                 curr_addr += 0x10; // next 16 bytes
         }
}
