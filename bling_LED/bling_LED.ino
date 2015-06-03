void setup() {
  // put your setup code here, to run once:
  pinMode(17,OUTPUT);//回数
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(11000);// 11秒待つ
  digitalWrite(13,HIGH);
  delay(1000); //光る時間
  digitalWrite(13,LOW);
  delay(1000);
  delay(200000):
}
