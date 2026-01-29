#ifndef BME680_DRIVER_H
#define BME680_DRIVER_H

typedef struct {
    float temperature;
    float humidity;
    float pressure;
    float gas_resistance;
} bme680_data_t;

void bme680_init(void);
int  bme680_read(bme680_data_t *data);

#endif
