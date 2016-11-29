#ifndef DEFINES_H
#define DEFINES_H

#define EEPROM_ADDRESS                      0x54    
#define MIN_ADDRESS                         0
#define MAX_ADDRESS                         32767
#define DELAY_TIME                          4

#define FILE_NAME_SIZE						          10
#define FOLDER_NAME_SIZE				          	10  //must be greater than 4

#define FOLDER_PARTITION_LOWER_BOUND        1
#define FOLDER_PARTITION_UPPER_BOUND        1000
#define FILE_PARTITION_LOWER_BOUND          1001
#define FILE_PARTITION_UPPER_BOUND          28768
#define FILE_HEADER_PARTITION_LOWER_BOUND   28769
#define FILE_HEADER_PARTITION_UPPER_BOUND   32767


#endif
