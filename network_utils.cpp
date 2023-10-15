#include "network_utils.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

/*The above function convert uint32_t ip_addr into A.B.C.D format. 
If the caller fn passes ptr to output_buffer ( 2nd arg),
then function return result in this output buffer. 
If the caller fn passes NULL as 2nd arg, then fn return result in local static buffer of 16B.*/
char* network_convert_ip_n_to_p(uint32_t ip_addr,char *output_buffer){
    static char input_buffer[16];
    char* result_buffer;

    uint8_t a = (uint8_t)((ip_addr >> 24) & 0xFF);
    uint8_t b = (uint8_t)((ip_addr >> 16) & 0xFF);
    uint8_t c = (uint8_t)((ip_addr >> 8) & 0xFF);
    uint8_t d = (uint8_t)(ip_addr & 0xFF);

    if(output_buffer != NULL){
        result_buffer = output_buffer;
    }else{
        result_buffer = input_buffer;
    }

    snprintf(result_buffer,16,"%u.%u.%u.%u",a,b,c,d);

    return result_buffer;
}

/*The above function is exactly opposite to Ist fn. It converts IP Address in A.B.C.D format in uint32_t format.*/
uint32_t network_convert_ip_p_to_n(const char *ip_addr){
    uint32_t ip32Addr = 0;
    uint8_t ipArray[4] = {0};
    int idx = 0;
    const char* tok = ".";

    if (ip_addr == NULL) {
        fprintf(stderr, "Input string is NULL\n");
        return 0;
    }

    char* modifiable_addr = strdup(ip_addr);
    if (modifiable_addr == NULL) {
        perror("Unable to allocate memory");
        return 0;
    }

    char* p = strtok(modifiable_addr,tok);

    while(p != NULL && idx < 4){
        ipArray[idx++] = (uint8_t)atoi(p);
        p=strtok(NULL,tok);
    }
    
    //free the memory here
    free(modifiable_addr);

    //check boarder
    if (idx != 4) {
        fprintf(stderr, "Malformed IP address\n");
        return 0;
    }

    //Assign the value
    for(int i = 3; i >= 0; --i){
        ip32Addr <<= 8;
        ip32Addr |= ipArray[i];
    }
    
    return ip32Addr;
}