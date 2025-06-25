# DeadMansSwitch
USB Kill Switch for laptops


A Simple Dead Mans Switch for USB devices
Based on an ESP32 / PR2040 and a USB magnetic breakaway cable
ESP32 / PR2040 simoly reflects the message written to serial port

Windows locks PC if:
* The app is closed after it is armed (no way to disarm)
* It doesnt get a reply within 100ms of sending a message
* A write or read event fails

Parts about $10~$15
* 2pcs RP2040-Zero [$2.5] - https://www.aliexpress.com/item/1005007393402333.html
* 2pcs USB-C Magnetic Connector [$6] - https://www.aliexpress.com/item/1005007377094512.html
* 5pcs Magnetic USB C Female [$2.5] - https://www.aliexpress.com/item/1005007551406455.html
* 10pcs Carabiner Clips [$3] - https://www.aliexpress.com/item/1005007462779944.html
* 50pcs Lanyard Strap [$2.5] - https://www.aliexpress.com/item/1005005064543945.html

I became aware of https://www.buskill.in/ after starting this project
