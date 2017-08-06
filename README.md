# 汎用OLEDヘッド用表示プログラム
このプログラムはうぐいすが販売する「汎用ディスプレイ素体」にてロボ顔の表示に使用したものです。
汎用ディスプレイ素体の表示系改造のベースに使っていただけるように公開します。
また汎用ディスプレイ素体は表示部ハードウェアとしてATTiny85とSSD1306をコントローラにもつ128x64ピクセルOLED(I2C接続)を利用しているので、ATTiny85でOLEDを利用したい場合のサンプルとして参照していただいてもOKな感じです。
※ATTiny85で動作確認していますが、ATTinyCoreが対応しているATTinyマイコンなら動作可能と思います。

## 利用ライブラリ
このプログラムは次のライブラリを利用します。

SSD1306_minimal
https://github.com/kirknorthrop/SSD1306_minimal

adafruit/TinyWireM
https://github.com/adafruit/TinyWireM

## ATTiny85への書き込み方法
ATTiny85も含めたATTinyマイコンへプログラムを書きこむ場合、次のものが必要です。

* インターネットに接続されているパソコン（Windows、Mac、Linux）
* Arduino
* Arduinoとパソコン間配線材
  * USBケーブル
* ArduinoとATTiny間配線材
  * ブレッドボード
  * ジャンパケーブル

[書き込み可能な環境を構築するにはSETUP.mdを参照](./SETUP.md)

[書き込みを実行するにはWRITING.mdを参照](./WRITING.md)

## Author
[ume2uguisu](https://twitter.com/ume2uguisu)

## License
[MIT](http://b4b4r07.mit-license.org)




