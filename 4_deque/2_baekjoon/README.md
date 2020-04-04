## [10866번](https://www.acmicpc.net/problem/10866) 덱
> 1회 : 성공
- 배열을 이용한 덱으로 구현
- 사용한 연산 : push_front, push_back, pop_front, pop_back, size, empty, front, back
- 스택(10828번)문제와 큐(18258번)문제와 유사하게 입력되는 몇 가지 명령을 처리하는 문제.
- 전역변수에 문제에서 주어진 최대크기의 두배로 배열 선언 후 정중앙에서부터 인덱스를 사용하여 앞뒤 모두 데이터 추가 가능하도록 구현.
<br>

## [1021번](https://www.acmicpc.net/problem/1021) 회전하는 덱
> 1회 : 실패(10866번 코드를 잘못 복사제출) <br>
> 2회 : 성공
- 배열을 이용한 덱으로 구현
- 사용한 연산 : pop_back_push_front, pop_front_push_back
- 문제 조건에서 pop_back 연산은 항상 push_front와, pop_front 연산은 항상 push_back과 함께 일어나서 각각 하나의 함수에 묶어서 구현
- 배열을 사용하더라도 push pop을 반복하다보면 찾고자하는 값을 임의탐색할 수 없어져서 최소 루트를 일일이 구해서 비교함
<br>

## [5430번](https://www.acmicpc.net/problem/5430) AC
> 1회 : 실패 <br>
> 2회 : (시도중)
- 배열을 이용한 덱으로 구현
- 사용한 연산 : reverse, delete
<br>
