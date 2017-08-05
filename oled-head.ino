// 汎用ディスプレイ素体用ロボ顔表示プログラム

// OLEDディスプレイを使用するためのライブラリ読み込み
#include "SSD1306_minimal.h"

// データをFlashメモリに配置するライブラリの読み込み
#include <avr/pgmspace.h>

// 画像データファイルの読み込み
#include "oled-head.h"

SSD1306_Mini oled;

// 起動後一回だけ実行される部分
void setup() {
  
  // OLEDディスプレイの設定
  // ()内に指定しているのはI2Cスレーブアドレス
  oled.init(0x3c);

  // OLEDディスプレイクリンナップ
  oled.clear();

  // 初期画像表示
  oled.drawImage( frame_1, 0, 0, 128, 8 );
  
  // 5秒(5000ミリ秒)待つ
  delay(5000);
}

// setup()実行後に繰り返し実行される部分
void loop() {

  // ロボ顔①表示
  oled.drawImage( frame_2, 0, 0, 128, 8 );

  // 60秒(60000ミリ秒)待つ
  delay(60000);

  // ロボ顔②表示
  oled.drawImage( frame_3, 0, 0, 128, 8 );
  
  // 10秒(10000ミリ秒)待つ
  delay(10000);
}


