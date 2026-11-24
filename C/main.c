#include "sensor.h"
#include <stdio.h>

int main(void){
    sensor sensor1 =  initialize(1);
    sensor sensor2 = initialize(2);
    print_status(sensor1);
    add_reading(&sensor1, 1);
    add_reading(&sensor1, -4);
    add_reading(&sensor1, 18);
    add_reading(&sensor1, 20);
    publish_oldest_reading(&sensor1);
    add_reading(&sensor1, 25);
    add_reading(&sensor1, 24);
    publish_all(&sensor1);
    print_status(sensor1);
    add_reading(&sensor1, 25);
    publish_oldest_reading(&sensor1);
}
