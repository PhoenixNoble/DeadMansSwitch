# DeadMansSwitch
USB Kill Switch for laptops


A Simple Dead Mans Switch for USB devices
Based on an ESP32 and a USB magnetic breakaway cable (thinking about switching to ATTinyXX)
ESP32 simoly reflects the message written to serial port

Windows locks PC if:
* The app is closed after it is armed (no way to disarm)
* It doesnt get a reply within 100ms of sending a message
* A write or read event fails

Parts about $10~$15
USB Cable and Header - https://www.aliexpress.com/item/1005003258136990.html
ESP32 S3 WROOM - https://www.mouser.se/ProductDetail/356-ESP32-S3WROOM1N8


I became aware of https://www.buskill.in/ after starting this project
