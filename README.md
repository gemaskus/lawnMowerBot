# lawnMowerBot

This is the beginning of a robotic Lawn Mower, the plan so far is to use a Raspberry pi 5 as the base for the system. 
Will probably switch to a lighter weight OS than the base raspbian. 

-The plan starts with reading in RS232 NMEA1983 messages to log the current location
-Next is to map an outer boundary based on the recorded position data
-Once the proof concept for recording a boundary for the "lawn" we will move to motor control
Might try to use an arduino as a remote motor driver module, where the pi is 
sending commands to the arduino, and then the control loop is contained in the 
arduino, all talking over serial. if I can manage that.
-The motor control loop and algortihms will be developed and modeled in MATlab
Simulink
