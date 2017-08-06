# 環境構築
ここではATTiny85への書き込みをするための、Arduino開発環境の準備を説明します。

## ArduinoIDEインストール
次のURLからパソコンにArduinoIDEをインストールします。

ArduinoIDE

https://www.arduino.cc/en/Main/Software

※Download the Arduino IDE 
Windows版が複数ありますが、特にこだわりが無ければ“Windows Installer”でOKと思います。

## ATTiny用ライブラリ類インストール
Arduinoが使用可能であることを確認できたら、ATTiny85を利用するための3つのライブラリ類をインストールします。

* ATTinyCore(ATTinyマイコンをArduinoIDEで開発するためのハードウェア定義とライブラリ)
* TinyWireM(ATTinyマイコン用I2C通信ライブラリ)
* SSD1306_minimal(ATTinyマイコン用SSD1306ディスプレイドライバー)

### ATTinyCore
1. ArduinoIDEの環境設定⇒追加のボードマネージャーのURLに下記URLを記述し、OKを押す。
http://drazzy.com/package_drazzy.com_index.json

2. ArduinoIDEのツール⇒ボード⇒ボードマネージャを選択

3. ボードマネージャの検索フィルタに「ATTinyCore」と入力し、「ATTinyCore by Spence Konde」をインストールする。

### TinyWireM
1. ArduinoIDEのスケッチ⇒ライブラリをインクルード⇒ライブラリを管理を選択

2. ライブラリマネージャの検索フィルタに「TinyWireM」と入力し、「TinyWireM by Adafruit」をインストールする。

### SSD1306_minimal
1. 下記Webサイトにアクセスし、「Clone or download」をクリックし「Download ZIP」をクリックする。
https://github.com/kirknorthrop/SSD1306_minimal

2. ArduinoIDEのスケッチ⇒ライブラリをインクルード⇒.ZIP形式のライブラリをインストールを選択

3. 1.でダウンロードしたZIP形式のファイルを選択


 
