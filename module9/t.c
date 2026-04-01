#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DEFAULT_WIFI_AP_SSID "Skillbox"

int main() {
    char current_ssid[32];

    strcpy(current_ssid, DEFAULT_WIFI_AP_SSID);

    char * ssid = malloc( sizeof(current_ssid));

    memcpy( ssid, current_ssid, sizeof(current_ssid) );

    printf("%s\n", ssid);
    
    free( ssid );
    return 0;
}
