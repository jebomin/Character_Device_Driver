# Character_Device_Driver
## ⏰ 개발 기간
2023.04.23~2023.05.14

## 📂프로젝트 소개
스택 구조를 활용한 문자 디바이스 드라이버<br/>
주요 기능으로 커널 모듈(dummy_driver.c)을 이용한 데이터 읽기/쓰기 및 사용자 레벨 애플리케이션을 통한 데이터 검증이 포함된다.

## 💡구현 기능 소개
1. 스택 연산:<br/>
푸시(Instack): 데이터를 스택에 추가한다.<br/>
팝(Destock): 데이터를 스택에서 가져온다.<br/>
2. 디바이스 드라이버 기능:<br/>
dummy_read: 스택에서 데이터를 읽는다.<br/>
dummy_write: 스택에 데이터를 쓴다.<br/>
3. 사용자 애플리케이션:<br/>
데이터 쓰기 및 읽기 순서를 검증한다.<br/>

## ✅결과
1. 컴파일 결과
<img src="https://github.com/user-attachments/assets/815b2bbe-7584-43aa-85f1-bc1c7f389eab">
<br/>
2. mknod
<br/>
<img src="https://github.com/user-attachments/assets/941c2423-be94-49f6-bec6-c58edc52b478">
<br/>
3. insmod
<img src="https://github.com/user-attachments/assets/e6734ecc-d048-4821-b33e-e21c9af0b6fc">
<br/>
4. rmmod
<img src="https://github.com/user-attachments/assets/689b3b4d-de49-46f3-8531-6ad3a77835ee">
<br/>
5. application 실행 결과
<img src="https://github.com/user-attachments/assets/f1210202-f5a5-41a8-89b7-7ed5bd46b40f">

## 👨‍💻설치 및 빌드 방법
1. 저장소를 클론한다.
```bash
git clone <repository-link>
cd <repository-directory>
```
2. ROS2 환경을 설정한다.
```bash
source /opt/ros/<ros2-distro>/setup.bash
```
3. 패키지를 빌드한다.
```bash
colcon build
```
4. 빌드 파일을 정리하기 위해 다음 명령어를 실행한다.
```bash
colcon clean
```
## ⚙️TOOL
<img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"><img src="https://img.shields.io/badge/ROS2-22314E?style=for-the-badge&logo=ROS&logoColor=white"><img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=Linux&logoColor=white">
