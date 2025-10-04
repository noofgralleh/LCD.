# LCD.
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// إنشاء كائن LCD مع العنوان I2C (عادة 0x27 أو 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  lcd.begin();          // بدء تشغيل الشاشة
  lcd.backlight();      // تشغيل الإضاءة الخلفية

  lcd.setCursor(0, 0);  // السطر الأول، العمود الأول
  lcd.print("مرحباً بك!");

  lcd.setCursor(0, 1);  // السطر الثاني
  lcd.print("في عالم أردوينو");
}

void loop() {
  // لا حاجة للكود داخل loop في هذا المثال
}
