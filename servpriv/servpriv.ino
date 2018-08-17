#include <AX12A.h> 

#define DirectionPin (10u) 
#define BaudRate (1000000ul) 
#define ID_1 (1u) 
#define ID_2 (2u) 
#define ID_3 (3u) 


void setup() 
{ 
ax12a.begin(BaudRate, DirectionPin, &Serial); 
ax12a.setEndless(ID_2, ON); 
ax12a.setEndless(ID_3, ON); 
ax12a.torqueStatus(ID_2,ON); 

} 

void loop() 
{ 
ax12a.torqueStatus(ID_2, ON);
ax12a.turn(ID_3, LEFT, 50); 
ax12a.turn(ID_1, RIGHT, 50); 
}
