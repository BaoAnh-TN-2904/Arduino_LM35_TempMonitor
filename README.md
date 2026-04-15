Arduino LM35 Temperature Monitor

Mô tả
Dự án xây dựng hệ thống đo nhiệt độ sử dụng cảm biến LM35 kết nối với Arduino. Hệ thống có khả năng đọc dữ liệu từ một hoặc hai kênh cảm biến và gửi dữ liệu về máy tính dưới dạng CSV để phục vụ việc theo dõi và phân tích.

---

Tính năng
- Đọc dữ liệu từ cảm biến LM35
- Hỗ trợ 1 hoặc 2 kênh (A0, A1)
- Xuất dữ liệu dạng CSV (dễ xử lý)
- Hiển thị dữ liệu qua Serial Monitor
- Có thể mở rộng cho hệ thống IoT

---

Phần cứng sử dụng

| Thiết bị        | Số lượng | Mô tả                    |
|----------------|--------|--------------------------|
| Arduino Uno    | 1      | Board điều khiển chính   |
| Cảm biến LM35  | 1-2    | Đo nhiệt độ              |
| Dây nối        | vài    | Kết nối phần cứng        |
| Máy tính       | 1      | Hiển thị dữ liệu         |

---

Hướng dẫn sử dụng
1. Kết nối phần cứng
- LM35 số 1 → chân A0  
- LM35 số 2 → chân A1  

2. Upload code
- Mở Arduino IDE  
- Chọn board và cổng COM  
- Upload file `.ino`
 
---

## 📁 Cấu trúc thư mục
 Arduino_LM35_TempMonitor/
│── firmware/
│ └── LM35_TempReader/
│ └── LM35_TempReader.ino
│── docs/
│── libs/
│── pc_app/
│── simulation/
│── README.md

---

## 👨‍💻 Thành viên nhóm
-Tran Nguyen Bao Anh

---

## 📌 Ghi chú
- Dữ liệu CSV giúp dễ dàng import vào Excel hoặc Python để phân tích  
- Có thể mở rộng thêm cảm biến hoặc kết nối IoT trong tương lai  

---
