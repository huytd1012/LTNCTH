/*Sinh viên thực hiện các yêu cầu sau:

Định nghĩa cấu trúc thời gian Time gồm có:
Giờ, phút, giây tương ứng là h, m, s kiểu số nguyên (luôn dương).
Hàm khởi tạo mặc định (gán giờ, phút, giây bằng 0), và hàm khởi tạo nhận vào ba số giờ, phút, giây.
Hàm tính số giây int second() tương ứng với thời gian.
Hàm void print() in ra thời gian theo định dạng hh:mm:ss (ví dụ 08:20:10). In thêm dấu xuống dòng ở cuối.
Định nghĩa hàm Time normalize(int h, int m, int s) chuẩn hoá thời gian:
Nhận vào 3 biến nguyên.
Chuẩn hoá nếu m, s lớn hơn 59 (ví dụ 02:59:60 chuẩn hoá thành 03:00:00).
Trả về biến thời gian đã chuẩn hoá.
Lưu ý: Sinh viên chỉ thực hiện yêu cầu trên mà không viết hàm main().*/
struct Time {
    int h,m,s;
    Time( int h_ = 0, int m_ = 0, int s_ = 0)
    {
        h = h_;
        m = m_;
        s = s_;
    }

    int second() {
        return h * 3600 + m * 60 + s;
    }
    void print() {
        if( s > 59 ){
             s -= 60;
             m += 1;
        }
        if( m > 59 ){
            m -= 60;
            h += 1;
        }
        if( h < 10 ) cout << "0" << h;
        else cout << h;
        cout << ":";
        if( m < 10 ) cout << "0" << m;
        else cout << m;
        cout << ":";
        if( s < 10 ) cout << "0" << s;
        else cout << s;
        cout << '\n';
    }
};

Time normalize(int h, int m, int s) {
    if( s > 59 ){
         s -= 60;
         m += 1;
    }
    if( m > 59 ){
        m -= 60;
        h += 1;
    }
}
