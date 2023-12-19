# GitHub
## GitHub là gì?
Là một hệ thống quản lý dự án và phiên bản code, hoạt động giống như một mạng xã hội cho lập trình viên. Các lập trình viên có thể clone lại mã nguồn từ một repository và Github chính là một dịch vụ máy chủ repository công cộng, mỗi người có thể tạo tài khoản trên đó để tạo ra các kho chứa của riêng mình để có thể làm việc.
## Cách sử dụng GitHub
### Tạo tài khoản GitHub
Tạo tài khoản GitHub theo đường [link](https://github.com)
![image](https://github.com/NguyenSyHung2k3/Project1/blob/master/image/Screenshot%202023-12-19%20170129.png)
### Cài đặt Git
Cài đặt Git bằng các đường link sau:
* [Win](https://git-scm.com/download/win)
* [MacOs](https://git-scm.com/download/mac)
* [Linux](https://git-scm.com/download/linux)
## Một vài khái niệm của Git bạn cần nắm
* git: là prefix của các lệnh được sử dụng dưới CLI
* branch: được hiểu như là nhánh, thể hiện sự phân chia các version khi 2 version đó có sự sai khác nhất định và 2 version đều có sự khác nhau.
* commit: là một điểm trên cây công việc (Work Tree ) hay gọi là cây phát triển công việc
* clone: được gọi là nhân bản, hay thực hiện nhân bản. Sử dụng để clone các project, repository trên các hệ thống chạy trên cơ sở là git, ví dụ như: bitbucket, github, gitlab, cor(1 sản phẩm mã nguồn mở cho phép người dùng tự tạo git server cho riêng mình trên vps, server),… Việc clone này sẽ sao chép repository tại commit mình mong muốn, dùng để tiếp tục phát triển. Thao tác này sẽ tải toàn bộ mã nguồn, dữ liệu về máy tính của bạn.
* repository: Kho quản lý dữ liệu, là nơi lưu trữ các dữ liệu, mã nguồn của project.
* remote: sử dụng để điều khiển các nhánh từ một repository trên git server, đối xử với các nhánh trên remote tương tự như đối xử với các nhánh trên local
## Các câu lệnh cơ bản trong Git
* Git init: Lệnh này được dùng khi bạn muốn tạo một phiên bản git mới cho một dự án.
```xml
git init
```
* Git status:
```xml
git status
```
* Git clone: Clone dự án có sẵn trên GitHub.
```xml
git clone <url>
```
*Git add: Add những thay đổi (bạn đã tạo mới hoặc chỉnh sửa) để thực hiện commit.
```xml
git add .
```
* Git commit -m"commit": Ghi lại các thay đổi vào kho lưu trữ. (Cần thêm các thông điệp rõ ràng vào mỗi mục commit)
```xml
git commit-m"your commit"
```
* Git push: Push (đẩy) tất cả mọi thay đổi (đã commit) lên remote repository.
```xml
git push origin master
```
