#ifndef SENSOR_H 
#define SENSOR_H
#include <stdint.h>
#include <stdbool.h>

#define BUFF_LEN 4

typedef struct {
    int latest_readings[BUFF_LEN];
    int id;
    unsigned int sensor_readings; //Change the data type to allow for more readings and prevent overflow to 0
    int length;
    int max;
    int min;
    bool new_reading;
}sensor;

sensor initialize(int sensor_id);

void print_arr(sensor* x);

void print_status(sensor x);

void add_reading (sensor *s, int new_value);

void publish_oldest_reading(sensor *s);

void publish_all(sensor *s);

#endif