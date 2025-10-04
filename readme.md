# LCD

## 🖥️ وصف المشروع

مشروع **LCD** يشرح كيفية توصيل شاشة **LCD 16x2** من نوع **HD44780** مع لوحة **Arduino** واستخدامها لعرض النصوص والبيانات.  
يمكن استخدام هذا المشروع لعرض معلومات مثل القراءات من الحساسات أو الرسائل المخصصة.

## 🧰 المتطلبات

- لوحة تطوير (مثل Arduino Uno)
- شاشة LCD 16x2 (واجهة I2C أو توصيل مباشر)
- مقاومة 10 كيلوأوم (لتعديل التباين في حالة التوصيل المباشر)
- أسلاك توصيل
- مكتبة `LiquidCrystal` أو `LiquidCrystal_I2C` (حسب نوع الشاشة)
- برنامج Arduino IDE

## 🔌 التوصيل

### 1️⃣ في حالة **LCD مع واجهة I2C**:

| LCD I2C Pin | Arduino Pin |
|-------------|-------------|
| VCC         | 5V          |
| GND         | GND         |
| SDA         | A4 (Uno)    |
| SCL         | A5 (Uno)    |

### 2️⃣ في حالة **التوصيل المباشر بدون I2C**:

| LCD Pin | Arduino Pin |
|---------|-------------|
| VSS     | GND         |
| VDD     | 5V          |
| VO      | مقاومة لضبط التباين |
| RS      | D12         |
| RW      | GND         |
| E       | D11         |
| D4      | D5          |
| D5      | D4          |
| D6      | D3          |
| D7      | D2          |

## 💻 كود Arduino (لـ I2C)

```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // العنوان I2C قد يختلف (0x3F أو 0x27)

void setup() {
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("مرحباً بالعالم");
  lcd.setCursor(0, 1);
  lcd.print("LCD + Arduino");
}

void loop() {
  // لا شيء في اللوب
}
