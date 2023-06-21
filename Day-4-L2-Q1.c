#include <stdio.h>
#include <stdlib.h>

struct SensorInfo {
  char sensor_id[20];
  float temperature;
  int humidity;
  int light_intensity;
};

void parse_data(char *data, struct SensorInfo *sensor_info) {
  char *token;

  // Get the sensor ID
  token = strtok(data, "-");
  strcpy(sensor_info->sensor_id, token);

  // Get the temperature
  token = strtok(NULL, "-");
  sensor_info->temperature = atof(token);

  // Get the humidity
  token = strtok(NULL, "-");
  sensor_info->humidity = atoi(token);

  // Get the light intensity
  token = strtok(NULL, "-");
  sensor_info->light_intensity = atoi(token);
}

void print_sensor_info(struct SensorInfo *sensor_info) {
  printf("Sensor Info:\n");
  printf("---------------------\n");
  printf("Sensor ID: %s\n", sensor_info->sensor_id);
  printf("Temperature: %.2f C\n", sensor_info->temperature);
  printf("Humidity: %d\n", sensor_info->humidity);
  printf("Light Intensity: %d%%\n", sensor_info->light_intensity);
}

int main() {
  char data[100];
  struct SensorInfo sensor_info;

  // Get the data from the data logger
  printf("Enter the data from the data logger: ");
  scanf("%s", data);

  // Parse the data
  parse_data(data, &sensor_info);

  // Print the sensor info
  print_sensor_info(&sensor_info);

  return 0;
}
