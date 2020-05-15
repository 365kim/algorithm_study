## Stack using Array
- 배열을 이용한 스택 
- 참고자료
    - [[자료구조] 스택(배열 이용) - push, pop](https://mailmail.tistory.com/26?category=724615)
    - [배열로 구현한 스택](https://blog.naver.com/rach117/221294516465)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/stack/stack_array)

#### 스택할당/해제
- 새로운 스택을 할당하고 초기화함.
- 스택의 최상단을 의미하는 top 는 '0'이 아닌 '-1'로 초기화함. (인덱스가 0일때 데이터가 1개)
- 스택에 데이터를 담을 수 있도록 스택 최대크기 'max_size'만큼 할당해줌. 실패 시, 앞서 할당한 스택을 free해줌.
- 스택 해제 시 만일 stack만 free해줄 경우 max_size * 8바이트(64bit기준) 만큼 메모리릭이 발생하게 됨. 
    - 따라서, 초기화했을 때 메모리를 할당해준 역순으로, 데이터의 메모리를 우선 free해주고 stack을 마지막에 free해줌.
- 관련예제 : [init](./stack_init.c), [free](./free_stack)

#### 삽입연산
- 최상단 인덱스를 1 증가시켜 스택의 가장 위에 새로운 데이터를 추가함. 
- 만약 최상단의 인덱스 'top' 이 스택 최대 크기 'max'와 같거나 그보다 크다면 더 이상 새로운 데이터를 담을 수 없음.
- 관련예제 : [push](./stack_push.c)

#### 참조연산
- peek 연산과 pop 연산과 달리 최상단 데이터를 삭제하지 않고 참조하여 반환하기만 함.
- 스택의 크기는 최상단 인덱스 top 을 통해 바로 알 수 있다. 인덱스가 0부터 시작함에 주의.
- 관련예제 : [peek](./stack_peek.c), [size](./stack_size.c)

#### 삭제연산
- pop 연산 시 pop 시킬 데이터는 따로 저장해주고, 최상단 데이터를 0으로 초기화해 준 후 최상단 인덱스를 1 감소시킴.
- 관련예제 : [pop](./stack_pop.c), [clear](./stack_clear)
<br>

[맨 위로](#stack-using-array)
