# Mạch thời gian thực MKE-M09 RTC DS1307 real time clock module

![](/image/MKE_M09_1.jpg)

## Giới thiệu

Mạch thời gian thực MKE-M09 RTC DS1307 real time clock module được sử dụng để lấy dữ liệu về thời gian thực: giờ, phút, giây, thứ, ngày, tháng, năm trong các ứng dụng cần điều khiển và đồng bộ với thời gian thực tế, mạch sử dụng giao tiếp I2C nên dễ dàng kết nối và sử dụng với chỉ 2 chân giao tiếp I2C là SDA (data) và SCL (clock).

Mạch thời gian thực MKE-M09 RTC DS1307 real time clock module thuộc hệ sinh thái phần cứng Robotics MakerEdu nên có thể sử dụng trực tiếp an toàn với các mạch điều khiển trung tâm ở cả hai mức điện áp 3.3VDC và 5VDC như: Arduino, Raspberry Pi, Jetson Nano, Micro:bit,....với chuẩn kết nối Connector XH2.54 thông dụng.

## Thông số kỹ thuật

- Điện áp hoạt động: 5VDC
- Chuẩn giao tiếp: Digital I2C
- Các chân giao tiếp: SDA (Serial Data) / SCL (Serial Clock)
- Điện áp giao tiếp: TTL 3.3/5VDC
- IC thời gian thực: DS1307, datasheet.
- Tích hợp pin CR1220 lưu giữ thời gian khi không cấp nguồn.
- Sử dụng trực tiếp an toàn với các board mạch giao tiếp ở cả hai mức điện áp 3.3VDC và 5VDC như: Arduino, Raspberry Pi, Jetson Nano, Micro:bit,....
- Bổ sung thêm các thiết kế ổn định, chống nhiễu.
- Chuẩn kết nối: Conector XH2.54 4Pins
Thuộc hệ sinh thái phần cứng Robotics MakerEdu, tương thích tốt nhất khi sử dụng với các mạch điều khiển trung tâm của MakerEdu và MakerEdu Shield.

## Kích thước

![](/image/MKE_M09_2.jpg)

## Các chân tín hiệu

![](/image/MKE_M09_3.jpg)
<table><thead>
  <tr>
    <th>MKE-M09</th>
    <th>Ghi chú</th>
  </tr></thead>
<tbody>
  <tr>
    <td>GND</td>
    <td>Chân cấp nguồn âm 0VDC</td>
  </tr>
  <tr>
    <td>5V</td>
    <td>Chân cấp nguồn dương 5VDC</td>
  </tr>
  <tr>
    <td>SDA</td>
    <td>Chân tín hiệu Digital Data</td>
  </tr>
  <tr>
    <td>SCL</td>
    <td>Chân tín hiệu Digital Clock</td>
  </tr>
</tbody>
</table>

## Hướng dẫn sử dụng

### Các thiết bị sử dụng trong bài hướng dẫn

#### Arduino

- [Mạch Vietduino Uno (Arduino Uno Compatible)](https://www.makerlab.vn/vuno)
- [Mạch MakerEdu Shield for Vietduino](https://www.makerlab.vn/vietduinosd)
- [Mạch màn hình MKE-M07 LCD1602 I2C Display Module](https://www.makerlab.vn/mkem07)

#### mBlock

- [Mạch MakerEdu Creator (Arduino Uno Compatible)](https://www.makerlab.vn/creator)
- [Mạch màn hình MKE-M07 LCD1602 I2C Display Module](https://www.makerlab.vn/mkem07)

#### Micro:bit:

- [Mạch Micro:bit V2](https://hshop.vn/products/kit-hoc-lap-trinh-stem-cho-tre-em-micro-bit-v2) hoặc các phiên bản tương thích.
- [Mạch MakerEdu Shield for Micro:bit](https://www.makerlab.vn/microbitsd)
- [Mạch màn hình MKE-M07 LCD1602 I2C Display Module](https://www.makerlab.vn/mkem07)

### Hướng dẫn sử dụng với Arduino (Code C)

[Hướng dẫn cài đặt phần mềm, nạp chương trình, cài đặt bộ thư viện Arduino cơ bản.](https://github.com/makerlabvn/Arduino-Vietduino)

- Tải và cài đặt [phần mềm Arduino tại đây.](https://www.arduino.cc/en/software)
- Trong Tools / Library Manager, tìm và cài đặt bộ thư viện tổng hợp "MAKERLABVN" by MakerLab.vn
- Mở chương trình mẫu "MKE_M09_RTC_LCD_Serial.ino" tại File / Examples / MAKERLABVN / Module / MKE_M09_RTC_LCD_Serial hoặc [tải chương trình mẫu tại đây](/arduino)
- Chọn board là Arduino Uno (mạch Vietduino Uno tương thích với Arduino Uno), chọn đúng cổng COM Port của mạch và tiến hành nạp chương trình.
- Kết nối mạch Vietduino Uno với MakerEdu Shield, kết nối module MKE-M09 vào cổng [I2C] và màn hình LCD vào cổng [I2C] trên MakerEdu Shield, cấp nguồn qua cổng USB của Vietduino Uno để thấy chương trình hoạt động.

### Hướng dẫn lập trình với mBlock (kéo thả khối)

[Hướng dẫn cài đặt phần mềm, nạp chương trình, cài đặt Extension mBlock cơ bản.](https://github.com/makerlabvn/mBlock-MakerEdu-Creator)

- Tải và cài đặt phần mềm mBlock 5 ([Windows](https://www.mediafire.com/file/ma55iajd7glwmbo/%255BMakerLab.vn%255D_mBlock_V5.4.3_for_Windows.zip/file) / [Mac Intel](https://www.mediafire.com/file/pjfngy6d7ktb55f/%255BMakerLab.vn%255D_mBlock_V5.4.3_for_Mac_Intel.zip/file) / [Mac M1M2](https://www.mediafire.com/file/mfdkgpgnpa7uv2s/%255BMakerLab.vn%255D_mBlock_V5.4.3_for_Mac_M1M2.zip/file))
- Thêm Device "MakerEdu Creator" by MakerEduVN
- Thêm Extension "Upload Mode Broadcast" by mBlock Official
- Thêm Extension "MakerEdu Hardware" by MakerEduVN
- Mở [chương trình mẫu tại đây](/mBlock5), kết nối MakerEdu Creator với máy tính và nạp chương trình.
- kết nối module MKE-M09 vào cổng [I2C] và màn hình LCD vào cổng [I2C] trên MakerEdu Creator, cấp nguồn qua cổng USB của MakerEdu Creator để thấy chương trình hoạt động.

### Hướng dẫn lập trình với Micro:bit (kéo thả khối)

[Hướng dẫn nạp chương trình, cài đặt Extension Micro:bit cơ bản.](https://github.com/makerlabvn/MakeCode-microbit)

- Khởi động phần mềm MakeCode tại: [https://makecode.microbit.org/](https://makecode.microbit.org/)
- Chọn My Projects / Import / Import URL theo đường link của chương trình mẫu: [https://github.com/devmakerlabvn/makecode-mke-s01-ultrasonic-distance-sensor](https://github.com/devmakerlabvn/makecode-mke-s01-ultrasonic-distance-sensor)
- Kết nối Micro:bit với máy tính và nạp chương trình.
- Kết nối mạch Micro:bit với MakerEdu Shield, kết nối cảm biến tại cổng [P0+P1] và màn hình LCD vào cổng [I2C] trên MakerEdu Shield, **cấp nguồn qua cổng USB của MakerEdu Shield** để thấy chương trình hoạt động.

## Hỗ trợ và liên hệ

- Website: [https://www.makerlab.vn/](https://www.makerlab.vn/)
- Facebook: [https://www.facebook.com/makerlabvn](https://www.facebook.com/makerlabvn)

## Nhà phân phối

- Các bạn có thể mua sản phẩm của MakerLab tại các [Nhà Phân Phối.](https://www.makerlab.vn/distributor/)
