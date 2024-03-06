#ifndef REFLECTANCE_SOFTWARE_H
#define REFLECTANCE_SOFTWARE_H

#include "PinAssignments.h"
#include <stdint.h>
#include "RoveComm.h"
#include "C12880MA.h"

C12880MA miniSpec(CLK, TRG, START, EOS, VIDEO, LED_WHITE);

EthernetServer TCPServer(RC_ROVECOMM_ETHERNET_TCP_PORT);
RoveCommEthernet RoveComm;

#endif /* REFLECTANCE_SOFTWARE_H */