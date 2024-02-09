#include "DHT.h"
#include "LiquidCrystal_I2C.h" 

#define DHTPIN 2     
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16,2);  
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print(F("Temperature: "));
  Serial.print(temperature);
  Serial.print(("°C || Humidity: "));
  Serial.print(humidity);
  Serial.println(" ");

  lcd.init();
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print(F("TEMPERATURE"));
  lcd.setCursor(2,1);
  lcd.print(temperature);
  lcd.setCursor(6,1);
  if (temperature >= 0)
  {
    lcd.print("-HIGH");
  }
  else
  {
    lcd.print("-LOW");
  }  
  delay(2000);
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print(F("HUMIDITY"));
  lcd.setCursor(3,1);
  lcd.print(humidity);
  if (humidity > 50)
  {
    lcd.print("-HIGH");
  }
  else
  {
    lcd.print("-LOW");
  }  
  delay(2000);
  lcd.clear();
}