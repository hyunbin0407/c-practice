# 1회차 — Hello World & 기본 구조

## 학습 날짜
2026-09-21

## 핵심 개념
- C 프로그램의 기본 구조: `#include`, `main` 함수, `return`
- `stdio.h`에 정의된 `printf`로 콘솔에 문자열/변수 값 출력하기
- `main` 함수의 반환값(0)은 프로그램이 정상 종료했음을 의미
- 변수 선언과 초기화 (`int` 타입), `%d` 포맷 지정자로 정수 출력
- 산술 연산자(`+`, `*`)를 이용한 변수 간 계산
- 함수 정의와 호출, 함수 매개변수로 문자열(`char[]`) 전달하기
- `%s` 포맷 지정자로 문자열 출력

## 코드 파일
- `hello.c` — 콘솔에 `Hello, World!!`를 출력하는 가장 기본적인 C 프로그램
- `age.c` — `int age` 변수를 선언하고 `printf`로 값을 출력
- `age1.c` — 변수 두 개(`a`, `b`)의 합을 계산해 출력
- `area.c` — 가로(`Width`)와 세로(`Height`) 변수로 직사각형 넓이(`Area`)를 계산해 출력
- `tutorial.c` — 문자열을 매개변수로 받는 함수 `a()`를 정의하고 여러 문자열로 반복 호출

## 컴파일 및 실행
```bash
clang 파일명.c -o 파일명
./파일명
```
예)
```bash
clang tutorial.c -o tutorial
./tutorial
```

## 실행 결과 (예: hello.c)
```
Hello, World!!
```

## 헷갈렸던 점
- `main` 함수의 반환 타입을 `void`로 써도(`void main()`) 컴파일은 되지만, 표준 형태는 `int main(void)`이며 정상 종료 시 `return 0;`을 반환하는 것이 관례.
