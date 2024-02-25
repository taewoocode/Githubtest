//
//  main.cpp
//  Githubtest
//
//  Created by 박태우 on 2/25/24.
//

#include <iostream>
using namespace std;

// Circle 클래스 선언
class Circle {
public:
    int radius; // 반지름 변수

    // 생성자 선언
    Circle();
    Circle(int r);

    // 소멸자 선언
    ~Circle();

    // 면적을 계산하는 함수 선언
    double getArea();
};

// 전역 변수로 Circle 객체 생성 및 초기화
Circle globalDonut(1000);
Circle globalPizza(2000);

// 생성자 정의 (기본 생성자)
Circle::Circle() {
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

// 생성자 정의 (매개변수를 받는 생성자)
Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

// 소멸자 정의
Circle::~Circle() {
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

// 원의 면적을 계산하는 함수 정의
double Circle::getArea() {
    return 3.14 * radius * radius;
}

// 함수 f 정의
void f() {
    // 지역 변수로 Circle 객체 생성
    Circle fDonut(100);
    Circle fPizza(200);
}

// main 함수 정의
int main() {
    // 지역 변수로 Circle 객체 생성
    Circle mainDonut;
    Circle mainPizza(30);

    // 함수 f 호출
    f();

    return 0;
}


