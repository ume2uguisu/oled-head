# 環境構築

ArduinoIDEインストール
Arduino動作確認
ATTiny用ライブラリ類インストール

1.File -> Preferences, enter the above URL in "Additional Board Manager URLs"
2.Tools -> Boards -> Board Manager... *If using 1.6.6, close board manager and re-open it (see below)
3.Select ATtinyCore (Universal) and click "Install".


http://drazzy.com/package_drazzy.com_index.json
https://github.com/SpenceKonde/ATTinyCore

ArduinoISP

Arduinoと



次のURLからパソコンにArduinoIDEをインストールします。

ArduinoIDE
https://www.arduino.cc/en/Main/Software

※Download the Arduino IDE 
Windows版が複数ありますが、特にこだわりが無ければ“Windows Installer”でOKと思います。

 


ATTiny85に画像を表示する為には、次のことが出来る必要があります。

・手持ちのパソコンでArduino開発が出来る
・ArduinoとATTiny85を結線する事が出来る

ArduinoIDE
https://www.arduino.cc/en/Main/Software


Arduino
https://www.arduino.cc/

OLED
https://learn.adafruit.com/monochrome-oled-breakouts/downloads


画像の作成方法
0.96インチOLEDディスプレイは

横128縦64ビットの2値化したビットマップを用意する。
