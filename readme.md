# LEDArrayVisualizer Library

LEDArrayVisualizer is an Arduino library that simplifies the process of visualizing 2D integer arrays on an 8x8 LED matrix using the FC-16 driver. This library is built on top of the MD_MAX72XX library and provides an easy-to-use interface for displaying data on the LED matrix.

## Features

- Display 8x8 integer arrays on an LED matrix
- Clear the LED matrix display
- Compatible with FC-16 driver
- Easy-to-use interface
- Utilizes the MD_MAX72XX library for low-level control

## Installation

1. Download the LEDArrayVisualizer library from the [GitHub repository](https://github.com/your-username/LEDArrayVisualizer).
2. Extract the downloaded ZIP file.
3. Move the extracted `LEDArrayVisualizer` folder to your Arduino libraries directory (usually located at `C:\Users\<username>\Documents\Arduino\libraries`).
4. Open the Arduino IDE.
5. Make sure the MD_MAX72XX library is also installed. You can download it from the [MD_MAX72XX GitHub repository](https://github.com/MajicDesigns/MD_MAX72XX).

## Usage

1. Include the LEDArrayVisualizer library in your Arduino sketch:

```cpp
#include <LEDArrayVisualizer.h>
```

2. Create an instance of the LEDArrayVisualizer class, specifying the data pin, clock pin, chip select pin, and the number of devices:

```cpp
LEDArrayVisualizer visualizer = {
  .dataPin = 11,
  .clkPin = 13,
  .csPin = 10,
  .numDevices = 1
};
```

3. In the `setup()` function, initialize the visualizer:

```cpp
void setup() {
  visualizer.begin();
}
```

4. In the `loop()` function, create an 8x8 integer array and display it using the `displayArray()` function:

```cpp
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

void loop() {
  visualizer.displayArray(myArray);
  delay(1000);
  visualizer.clear();
  delay(1000);
}
```

5. Upload the sketch to your Arduino board, and you should see the array displayed on the LED matrix.

## API Reference

### `LEDArrayVisualizer(uint8_t dataPin, uint8_t clkPin, uint8_t csPin, uint8_t numDevices)`

Constructor for the LEDArrayVisualizer class.

- `dataPin`: The data pin connected to the LED matrix.
- `clkPin`: The clock pin connected to the LED matrix.
- `csPin`: The chip select pin connected to the LED matrix.
- `numDevices`: The number of LED matrix devices connected in series.

### `void begin()`

Initializes the LEDArrayVisualizer library and the underlying MD_MAX72XX library.

### `void displayArray(int arr[8][8])`

Displays an 8x8 integer array on the LED matrix.

- `arr`: The 8x8 integer array to be displayed. A value of 0 represents an OFF pixel, while any non-zero value represents an ON pixel.

### `void clear()`

Clears the LED matrix display, turning off all pixels.

## Examples

Check the `examples` folder in the library directory for sample sketches demonstrating the usage of the LEDArrayVisualizer library.

## Dependencies

- MD_MAX72XX library: https://github.com/MajicDesigns/MD_MAX72XX

## License

This library is released under the [MIT License](https://opensource.org/licenses/MIT).

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request on the [GitHub repository](https://github.com/your-username/LEDArrayVisualizer).


## Acknowledgments

- MD_MAX72XX library by Marco Colli
- FC-16 LED Matrix Module

# LEDArrayVisualizer ライブラリ

LEDArrayVisualizerは、FC-16ドライバを使用して8x8 LEDマトリクス上に2次元の整数配列を視覚化するプロセスを簡単にするArduinoライブラリです。このライブラリは、MD_MAX72XXライブラリの上に構築されており、LEDマトリクスにデータを表示するための使いやすいインターフェースを提供します。

## 特徴

- 8x8の整数配列をLEDマトリクスに表示
- LEDマトリクスのディスプレイをクリア
- FC-16ドライバと互換性があります
- 使いやすいインターフェース
- 低レベルの制御にMD_MAX72XXライブラリを利用

## インストール方法

1. [GitHubリポジトリ](https://github.com/your-username/LEDArrayVisualizer)からLEDArrayVisualizerライブラリをダウンロードします。
2. ダウンロードしたZIPファイルを解凍します。
3. 解凍した `LEDArrayVisualizer` フォルダを、Arduinoライブラリディレクトリ（通常は `C:\Users\<username>\Documents\Arduino\libraries` にあります）に移動します。
4. Arduino IDEを開きます。
5. MD_MAX72XXライブラリもインストールされていることを確認してください。[MD_MAX72XX GitHubリポジトリ](https://github.com/MajicDesigns/MD_MAX72XX)からダウンロードできます。

## 使用方法

1. ArduinoスケッチでLEDArrayVisualizerライブラリをインクルードします：

```cpp
#include <LEDArrayVisualizer.h>
```

2. データピン、クロックピン、チップセレクトピン、デバイス数を指定して、LEDArrayVisualizerクラスのインスタンスを作成します：

```cpp
LEDArrayVisualizer visualizer = {
  .dataPin = 11,
  .clkPin = 13,
  .csPin = 10,
  .numDevices = 1
};
```

3. `setup()` 関数で、ビジュアライザを初期化します：

```cpp
void setup() {
  visualizer.begin();
}
```

4. `loop()` 関数で、8x8の整数配列を作成し、`displayArray()` 関数を使用して表示します：

```cpp
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

void loop() {
  visualizer.displayArray(myArray);
  delay(1000);
  visualizer.clear();
  delay(1000);
}
```

5. スケッチをArduinoボードにアップロードすると、配列がLEDマトリクスに表示されます。

## APIリファレンス

### `LEDArrayVisualizer(uint8_t dataPin, uint8_t clkPin, uint8_t csPin, uint8_t numDevices)`

LEDArrayVisualizerクラスのコンストラクタ。

- `dataPin`: LEDマトリクスに接続されているデータピン。
- `clkPin`: LEDマトリクスに接続されているクロックピン。
- `csPin`: LEDマトリクスに接続されているチップセレクトピン。
- `numDevices`: 直列に接続されているLEDマトリクスデバイスの数。

### `void begin()`

LEDArrayVisualizerライブラリと、基盤となるMD_MAX72XXライブラリを初期化します。

### `void displayArray(int arr[8][8])`

8x8の整数配列をLEDマトリクスに表示します。

- `arr`: 表示する8x8の整数配列。0はOFFピクセルを表し、非ゼロ値はONピクセルを表します。

### `void clear()`

LEDマトリクスのディスプレイをクリアし、すべてのピクセルをオフにします。

## サンプル

LEDArrayVisualizerライブラリの使用方法を示すサンプルスケッチは、ライブラリのディレクトリにある `examples` フォルダをご覧ください。

## 依存関係

- MD_MAX72XXライブラリ: https://github.com/MajicDesigns/MD_MAX72XX

## ライセンス

このライブラリは、[MITライセンス](https://opensource.org/licenses/MIT)の下でリリースされています。

## 貢献

貢問題を見つけたり、改善のための提案がある場合は、[GitHubリポジトリ](https://github.com/your-username/LEDArrayVisualizer)でissueかプルリクエストを送信してください。



## 謝辞

- MD_MAX72XXライブラリ by Marco Colli
- FC-16 LEDマトリクスモジュール