# Arduino DHT22 & LCD Sensör Interface (Wokwi Simülasyonu)

Bu proje, Arduino tabanlı bir sıcaklık ve nem izleme sisteminin simülasyon prototipidir. DHT22 sensöründen alınan analog verileri işleyerek, I2C protokolü üzerinden 16x2 LCD ekranda görselleştirir.

Proje, Wokwi platformu üzerinde sanal donanım ortamında geliştirilmiştir ve temel sensör-veri akışını simüle eder.

## Devre Şeması ve Bağlantılar

| Bileşen | Pin | Açıklama |
|---|---|---|
| **DHT22** | Pin 2 | Veri Sinyali |
| **LCD (I2C)** | SDA | A4 (Uno) |
| **LCD (I2C)** | SCL | A5 (Uno) |
| **LCD** | VCC/GND | 5V / GND |

## Kullanılan Teknolojiler ve Kütüphaneler

* **C++ (Arduino Framework)**
* `DHT.h`: Sıcaklık ve nem sensörü yönetimi için.
* `LiquidCrystal_I2C.h`: LCD ekranın seri haberleşme (I2C) ile kontrolü için.

## Algoritma Mantığı

Sistem sonsuz bir döngüde çalışır:
1.  Sensörden sıcaklık ve nem verisini okur.
2.  Veriyi Serial Monitor'a (Debug için) yazar.
3.  Eşik değerlerine göre (Örn: Nem > %50) durumsal analiz yapar.
4.  Sonuçları LCD ekrana, kullanıcı dostu etiketlerle ("HIGH"/"LOW") yansıtır.

## Kurulum

1.  Arduino IDE'yi açın.
2.  Gerekli kütüphaneleri (`DHT sensor library`, `LiquidCrystal I2C`) Library Manager üzerinden yükleyin.
3.  Kodu yükleyin ve bağlantıları şemaya göre yapın.

---
**Not:** Bu proje eğitim amaçlı bir prototiptir ve temel I/O operasyonlarını gösterir.
