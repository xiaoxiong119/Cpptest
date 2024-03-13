int ledPin = 9; // LED连接到数字口9
int sensorPin = A0; // 声音传感器连接到模拟口A0
int sensorValue = 0; // 存储传感器值

void setup() {
  pinMode(ledPin, OUTPUT); // 设置LED为输出模式
  pinMode(sensorPin, INPUT); // 设置传感器为输入模式
  Serial.begin(9600); // 开始串口通信
}

void loop() {
  sensorValue = analogRead(sensorPin); // 读取声音传感器的值
  Serial.println(sensorValue); // 在串口监视器中打印值
  int brightness = map(sensorValue, 0, 1023, 0, 255); // 将传感器值映射到LED亮度
  analogWrite(ledPin, brightness); // 设置LED亮度
  delay(10); // 稍作延迟
}