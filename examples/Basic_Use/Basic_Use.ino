/*
该显示模块接线比较简单
1. 连接电源和地。
2. 连接LCD  使用的是serial
*/
#include <SparkFun_Serial_LCD.h>

// Initialize the LCD library
SparkFun_Serial_LCD lcd = SparkFun_Serial_LCD();

void setup()
{
    //清屏
    lcd.clear();
}

void loop()
{
    int someNumber = random(10000);

    // 首先清屏
    lcd.clear();

    // 往LCD显示屏发送数据
    Serial.print(someNumber);

    // 延时500ms
    delay(500);
}
