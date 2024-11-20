// Thêm bộ thư viện.
// Add the library.
#include <MKL_LiquidCrystal_I2C.h>
#include <MKL_HCSR04.h>

// Khởi tạo LCD
//LCD config
MKL_LiquidCrystal_I2C lcd(0x27, 16, 2);

// Khởi tạo cảm biến
// Sensor config
#define ECHO_PIN 12
#define TRIG_PIN 13
MKL_HCSR04 ultra(TRIG_PIN, ECHO_PIN);

// Tạo biến số nguyên lưu giá trị cảm biến
// value read from the sensor
int sensorValue = 0;  

void setup()
{
  // Khởi động LCD
  // LCD start
  lcd.init();
  lcd.backlight();

  // Khởi động kết nối Serial UART ở tốc độ 115200 để truyền dữ liệu lên máy tính.
  // Start the Serial UART connection at 115200 to transfer data to the computer.
  Serial.begin(115200);
}

void loop()
{
  // Đọc giá trị cảm biến
  // read the sensor value:
  sensorValue = ultra.dist();

  //Gửi giá trị cảm biến lên LCD
  //Show the sensor value on LCD
  lcd.setCursor(1,0);
  lcd.print("Distance");
  lcd.setCursor(1,1);
  lcd.print(sensorValue);
  lcd.print("cm   ");

  // Truyền giá trị lên máy tính qua Serial Monitor
  // Show the sensor value on Arduno Serial Monitor
  Serial.print("Distance in cm: ");
  Serial.println(sensorValue);
  
  // Chờ 500ms
  // Wait 500ms
  delay(500);
}