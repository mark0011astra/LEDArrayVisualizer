#ifndef LED_ARRAY_VISUALIZER_H
#define LED_ARRAY_VISUALIZER_H

#include <MD_MAX72xx.h>

class LEDArrayVisualizer {
public:
    LEDArrayVisualizer(uint8_t dataPin, uint8_t clkPin, uint8_t csPin, uint8_t numDevices);
    void begin();
    void displayArray(int arr[8][8]);
    void clear();

private:
    MD_MAX72XX mx;
};

LEDArrayVisualizer::LEDArrayVisualizer(uint8_t dataPin, uint8_t clkPin, uint8_t csPin, uint8_t numDevices)
    : mx(MD_MAX72XX::FC16_HW, dataPin, clkPin, csPin, numDevices) {}

void LEDArrayVisualizer::begin() {
    mx.begin();
}

void LEDArrayVisualizer::displayArray(int arr[8][8]) {
    clear();
    for (uint8_t row = 0; row < 8; row++) {
        for (uint8_t col = 0; col < 8; col++) {
        mx.setPoint(row, col, arr[row][col] != 0);
        }
    }
    mx.update();
}

void LEDArrayVisualizer::clear() {
    mx.clear();
    mx.update();
}

#endif