#ifndef EEPROM_H_
#define EEPROM_H_

void readGlobalSet();
bool readEEPROM();
void update_constants();
void writeGlobalSet(uint8_t b);
void writeParams(uint8_t b);
void LoadDefaults();
void readPLog(void);
void writePLog(void);

#if defined(GPS)
//EEPROM functions for storing and restoring waypoints 

void storeWP(void);    
bool recallWP(uint8_t);
                        
uint8_t getMaxWPNumber(void);  

void loadGPSdefaults(void);
void writeGPSconf(void) ;
bool recallGPSconf(void);
#endif

#endif /* EEPROM_H_ */
