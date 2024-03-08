#include "LEDArrayVisualizer.h"

LEDArrayVisualizer visualizer = {
    .dataPin = 11,
    .clkPin = 13,
    .csPin = 10,
    .numDevices = 1
};

int myArray[8][8] = {
    {1, 0, 0, 1, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {1, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}
};

void setup() {
    visualizer.begin();
}

void loop() {
    visualizer.displayArray(myArray);
    delay(1000);
    visualizer.clear();
    delay(1000);
}