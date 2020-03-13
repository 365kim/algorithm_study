## Stack
- 데이터의 삽입과 삭제가 한쪽 방향에서만 일어나는 자료구조, '쌓아올린 더미'를 의미
- 가장 나중에 삽입된 데이터가 가장 먼저 삭제되므로 `선입후출`(FILO, First In Last Out) 또는 `후입선출`(LIFO Last-In First Out) 구조라고도 한다.
- 배열 또는 [연결리스트](./../1_linked_list)를 이용해서 구현할 수 있다.
- push : 데이터 삽입연산, pop : 데이터 삭제연산
- top : push와 pop이 이루어지는스택의 최상단 데이터 위치

### [1] Stack using Array
- 장점 : 구현이 쉽다.
- 단점 : 스택의 크기에 정적인 제한을 두어야 하고, 인덱스가 범위 밖을 벗어나는 에러가 발생할 수 있다.

### [2] Stack using Linked List
- 장점 : 스택의 크기에 제한이 없어 stack overflow를 어느정도 피할 수 있다. 또한, 삽입/삭제(push/pop)연산을 배열보다 유연하게 구현할 수 있다.
- 단점 : 배열에 비해 구현이 어렵다.

### 생각해보기
1. 연결리스트의 연산 속도
- 앞서 [연결리스트](./../1_linked_list)는 인덱스를 통해 랜덤액세스가 가능한 배열에 비해 연산속도가 더 느리다고 하였다. 그러나 스택에서는 데이터의 삽입/삭제가 배열의 가장 끝부분에서만 이루어지므로 연결리스트로 구현하더라도 연산속도에 크게 차이가 없게 된다.
2. stack과 재귀(recursion)의 관계
- 더 알아보기
3. stack이 사용되는 상황
- 주기억장치(main memory)나 레지스터(register)의 일부를 할당하여 사용하는 임시 기억장치(데이터를 일시적으로 겹쳐 쌓아두었다가 필요할 때 꺼내서 사용)
- C언어에서 지역변수, 매개변수가 저장되는 메모리(변수 선언시 할당되고 함수 종료 시 자동으로 해제되는 자동메모리)
- 문서 프로그램에서 실행취소(ctrl+z), 브라우저에서 뒤로가기
- 일상 : 접시 꺼내기, 테니스공 꺼내기