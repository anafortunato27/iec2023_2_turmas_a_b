int SEGC = 13;
int PONTO = 12;
int SEGF = 11;
int SEGA = 10;
int SEGB = 9;
int SEGD = 8;
int SEGE = 7;
int SEGG = 6;
int BUZZER = 5;
int RELE = 4;
int temp = 1000;

//.... Prototipo das funções ....//
void escreve_0(void);
void escreve_1(void);
void escreve_2(void);
void escreve_3(void);
void escreve_4(void);
void escreve_5(void);
void escreve_6(void);
void escreve_7(void);
void escreve_8(void);
void escreve_9(void);

void setup()
{
  pinMode(SEGA, OUTPUT);
  pinMode(SEGB, OUTPUT);
  pinMode(SEGC, OUTPUT);
  pinMode(SEGD, OUTPUT);
  pinMode(SEGE, OUTPUT);
  pinMode(SEGF, OUTPUT);
  pinMode(SEGG, OUTPUT);
  pinMode(PONTO, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(RELE, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  escreve_0();
  escreve_1();
  escreve_2();
  escreve_3();
  escreve_4();
  escreve_5();
  escreve_6();
  escreve_7();
  escreve_8();
  escreve_9();
}

void escreve_0()
{
  //....... Escreve número 0 .......//
  digitalWrite(SEGA, HIGH);
  digitalWrite(SEGB, HIGH);
  digitalWrite(SEGC, HIGH);
  digitalWrite(SEGD, HIGH);
  digitalWrite(SEGE, HIGH);
  digitalWrite(SEGF, HIGH);
  digitalWrite(SEGG, LOW);
  digitalWrite(PONTO, HIGH);
  digitalWrite(BUZZER, LOW);
  digitalWrite(RELE, LOW);
  Serial.println("NÚMERO ESCRITO: 0");
  delay(temp);
}

void escreve_1()
{
  //....... Escreve número 1 .......//  
  digitalWrite(SEGA, LOW);
  digitalWrite(SEGB, HIGH);
  digitalWrite(SEGC, HIGH);
  digitalWrite(SEGD, LOW);
  digitalWrite(SEGE, LOW);
  digitalWrite(SEGF, LOW);
  digitalWrite(SEGG, LOW);
  digitalWrite(PONTO, HIGH);
  Serial.println("NÚMERO ESCRITO: 1");
  delay(temp);
}

void escreve_2()
{
  //....... Escreve número 2 .......//
  digitalWrite(SEGA, HIGH);
  digitalWrite(SEGB, HIGH);
  digitalWrite(SEGC, LOW);
  digitalWrite(SEGD, HIGH);
  digitalWrite(SEGE, HIGH);
  digitalWrite(SEGF, LOW);
  digitalWrite(SEGG, HIGH);
  digitalWrite(PONTO, HIGH);
  Serial.println("NÚMERO ESCRITO: 2");
  delay(temp);
}

void escreve_3()
{
  //....... Escreve número 3 .......//
  digitalWrite(SEGA, HIGH);
  digitalWrite(SEGB, HIGH);
  digitalWrite(SEGC, HIGH);
  digitalWrite(SEGD, HIGH);
  digitalWrite(SEGE, LOW);
  digitalWrite(SEGF, LOW);
  digitalWrite(SEGG, HIGH);
  digitalWrite(PONTO, HIGH);
  Serial.println("NÚMERO ESCRITO: 3");
  delay(temp);
}

void escreve_4()
{
  //....... Escreve número 4 .......//
  digitalWrite(SEGA, LOW);
  digitalWrite(SEGB, HIGH);
  digitalWrite(SEGC, HIGH);
  digitalWrite(SEGD, LOW);
  digitalWrite(SEGE, LOW);
  digitalWrite(SEGF, HIGH);
  digitalWrite(SEGG, HIGH);
  digitalWrite(PONTO, HIGH);
  Serial.println("NÚMERO ESCRITO: 4");
  delay(temp);
}

void escreve_5()
{
  //....... Escreve número 5 .......//
  digitalWrite(SEGA, HIGH);
  digitalWrite(SEGB, LOW);
  digitalWrite(SEGC, HIGH);
  digitalWrite(SEGD, HIGH);
  digitalWrite(SEGE, LOW);
  digitalWrite(SEGF, HIGH);
  digitalWrite(SEGG, HIGH);
  digitalWrite(PONTO, HIGH);
  Serial.println("NÚMERO ESCRITO: 5");
  delay(temp);
}

void escreve_6()
{
  //....... Escreve número 6 .......//
  digitalWrite(SEGA, HIGH);
  digitalWrite(SEGB, LOW);
  digitalWrite(SEGC, HIGH);
  digitalWrite(SEGD, HIGH);
  digitalWrite(SEGE, HIGH);
  digitalWrite(SEGF, HIGH);
  digitalWrite(SEGG, HIGH);
  digitalWrite(PONTO, HIGH);
  Serial.println("NÚMERO ESCRITO: 6");
  delay(temp);
}

void escreve_7()
{
  //....... Escreve número 7 .......//
  digitalWrite(SEGA, HIGH);
  digitalWrite(SEGB, HIGH);
  digitalWrite(SEGC, HIGH);
  digitalWrite(SEGD, LOW);
  digitalWrite(SEGE, LOW);
  digitalWrite(SEGF, LOW);
  digitalWrite(SEGG, LOW);
  digitalWrite(PONTO, HIGH);
  digitalWrite(RELE, HIGH);
  Serial.println("NÚMERO ESCRITO: 7");
  Serial.println("LUZ ACESA");
  delay(temp);
}

void escreve_8()
{
  //....... Escreve número 8 .......//
  digitalWrite(SEGA, HIGH);
  digitalWrite(SEGB, HIGH);
  digitalWrite(SEGC, HIGH);
  digitalWrite(SEGD, HIGH);
  digitalWrite(SEGE, HIGH);
  digitalWrite(SEGF, HIGH);
  digitalWrite(SEGG, HIGH);
  digitalWrite(PONTO, HIGH);
  Serial.println("NÚMERO ESCRITO: 8");
  Serial.println("LUZ ACESA");
  delay(temp);
}

void escreve_9()
{
  //....... Escreve número 9 .......//
  digitalWrite(SEGA, HIGH);
  digitalWrite(SEGB, HIGH);
  digitalWrite(SEGC, HIGH);
  digitalWrite(SEGD, HIGH);
  digitalWrite(SEGE, LOW);
  digitalWrite(SEGF, HIGH);
  digitalWrite(SEGG, HIGH);
  digitalWrite(PONTO, HIGH);
  digitalWrite(BUZZER, HIGH);
  digitalWrite(RELE, LOW);
  Serial.println("NÚMERO ESCRITO: 9");
  Serial.println("ALARME LIGADO");
  delay(temp);
}