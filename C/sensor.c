#include <stdbool.h>
#include <limits.h>
#include "sensor.h"
#include <stdio.h>

//initialize a new sensor, pass in the sensor id (add restriction to avoid previous numbers)
sensor initialize(int sensor_id){
    sensor new_sensor = {{0,0,0,0}, sensor_id, 0,0, INT_MIN, INT_MAX, false};
    return new_sensor;
}

void print_arr(sensor* x){
//print the starting brackets 
    if (x -> length <= 0){
        printf("[]\n");
        return;

    } else if (x->length == 1){
        printf("[%d]\n", x->latest_readings[0]);

    } else {

    printf("[");

    for (int i = 0; i < (x->length - 1); i++){
        printf("%d," ,x->latest_readings[i]);
    }
//print the last int and the ending brackets 
    printf("%d]\n", x->latest_readings[(x->length - 1)]);
    }
}

//print the details of a sensor to the screen
void print_status(sensor x){
    if (x.sensor_readings == 0){
        printf("Sensor Id: %d, No readings available yet\n",x.id);
    } else {
        printf("Sensor Id: %d, # of readings: %u, length: %d max value: %d, min value: %d, new reading: %s, latest readings:",
        x.id,
        x.sensor_readings,
        x.length,
        x.max,
        x.min,
        x.new_reading ? "true" : "false");
        print_arr(&x);
    }
}

//Add a new sensor reading 
void add_reading (sensor *s, int new_value){
    //update no of sensor_readings 
    if (s->length == BUFF_LEN){
        printf("Buffer is full, please publish readings!\n");
        print_status(*s);                                                                                           

    } else {
        s->latest_readings[(s->length)] = new_value; //add_latest measurement to buffer length
        s->sensor_readings += 1;
        s->new_reading = true;

        s->length += 1; //increases buffer length

        //update max 
        if (s-> max < new_value){
            s->max = new_value;
        }

        //update min 
        if (s->min > new_value){
            s->min = new_value;
        }

    }
    print_status(*s);
    //update new_reading
}


//publish one reading on the buffer
void publish_oldest_reading(sensor *s){
    if (s -> length == 0){
        printf("Buffer Empty!");
        return;
    }
    printf("Published: %d\n",s->latest_readings[0]);

    for (int i = 0; i < (s->length - 1); i++){
        s->latest_readings[i] = s->latest_readings[i+1];
    }

    s->latest_readings[(BUFF_LEN - 1)] = 0;
    s->length -= 1;

    //check if there are new readings yet to be published, return false if not  
    if (s -> length == 0){
        s->new_reading = false;
    }
    print_status(*s);

}

void publish_all(sensor *s){
    for (int i = 0; i < BUFF_LEN; i++){
        publish_oldest_reading(s);
    }
}