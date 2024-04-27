# CTDL-GT

Trên thực tế, \n lại nhanh hơn endl ở hầu hết các trường hợp
Nên xài endl khi
    - Ghi dữ liệu vào file yêu cầu realtime
        (p/s: với data thay đổi liên tục khiến flush buffer liên tục, giảm hiệu năng chương trình
            ở đây, outline buffer sẽ bị xóa mỗi khi bạn dùng endl
        )
    - Update thanh tiến trình cho user nhìn thấy sự thay đổi (giống như thanh máu của actor trong game á)
