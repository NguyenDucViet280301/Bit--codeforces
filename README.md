Ngôn ngữ lập trình cổ điển của Bitland là Bit++. Ngôn ngữ này rất kỳ lạ và phức tạp.

Ngôn ngữ này đặc biệt vì nó chỉ có đúng một biến, được gọi là x. Ngoài ra, nó có hai phép toán:

Phép toán ++ tăng giá trị của biến x lên 1.
Phép toán -- giảm giá trị của biến x xuống 1.
Một câu lệnh trong ngôn ngữ Bit++ là một chuỗi ký tự, bao gồm chính xác một phép toán và một biến x. Câu lệnh được viết liền mà không có khoảng trắng, tức là nó chỉ chứa các ký tự "+", "-", "X". Thực hiện một câu lệnh có nghĩa là áp dụng phép toán mà nó chứa.

Một chương trình trong Bit++ là một dãy các câu lệnh, mỗi câu lệnh cần được thực thi. Thực hiện một chương trình có nghĩa là thực hiện tất cả các câu lệnh mà nó chứa.

Đầu vào:

Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 150) — số lượng câu lệnh trong chương trình.

Tiếp theo, có n dòng, mỗi dòng chứa một câu lệnh. Mỗi câu lệnh chứa chính xác một phép toán (++ hoặc --) và một biến x (được ký hiệu là chữ «X»). Do đó, không có câu lệnh nào trống. Phép toán và biến có thể được viết theo bất kỳ thứ tự nào.

Đầu ra:

In ra một số nguyên duy nhất — giá trị cuối cùng của x sau khi chương trình này được thực hiện.

Giải pháp:

* Hiểu bài toán:

Bạn được yêu cầu thực hiện một số thao tác trên một biến duy nhất có tên là x, bắt đầu với giá trị ban đầu là 0.

Các thao tác có thể là tăng (++) hoặc giảm (--) giá trị của x.

Mỗi thao tác được biểu diễn dưới dạng một câu lệnh có ký hiệu ++X, X++, --X, hoặc X--, trong đó X là tên biến duy nhất.

* Khởi tạo:

Đầu tiên, khởi tạo biến x với giá trị ban đầu là 0, vì đây là giá trị khởi điểm của biến theo đề bài.

Tiếp theo, đọc số lượng câu lệnh n từ đầu vào.

* Xử lý từng câu lệnh:

Với mỗi câu lệnh, ta cần xác định xem câu lệnh đó là lệnh tăng (++) hay lệnh giảm (--).

Điều này có thể thực hiện bằng cách kiểm tra ký tự thứ hai của câu lệnh (bởi vì câu lệnh có thể là ++X, X++, --X, hoặc X--, và ký tự thứ hai sẽ luôn là + hoặc -).

* Thực thi thao tác:

Nếu ký tự thứ hai là dấu +, ta tăng giá trị của x lên 1.

Nếu ký tự thứ hai là dấu -, ta giảm giá trị của x đi 1.

Ta lặp lại quá trình này cho tất cả các câu lệnh đã cho.

* Kết quả cuối cùng:

Sau khi đã xử lý hết tất cả các câu lệnh, giá trị cuối cùng của x chính là kết quả cần tìm.
