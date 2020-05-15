## Stack using Linked List
- 연결리스트를 이용한 스택 
- 참고자료
    - [[자료구조] 스택(연결리스트 이용) - push, pop](https://mailmail.tistory.com/27)
    - [연결리스트로 구현한 스택(배열과 비교)](https://blog.naver.com/moonleaf0213/221534679589)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/stack/stack_linked_list)


#### 스택할당/해제
- 새로운 스택을 할당하고 초기화함
- 앞서 배열을 이용한 스택과 달리 max_size 스택 최대크기 제한이 없음
- 앞서 int 형 top_index를 -1로 초기화했던 것과 달리 node 포인터형 top을 널포인터로 초기화함
- 관련예제 : [스택초기화](./stack.init.c), [노드생성](./create_elem.c) [스택해제](./free_stack)

#### 삽입연산
- 배열을 이용한 스택과 달리 삽입에 제한이 없음
- 관련예제 : [push](./stack_push.c)

#### 참조연산
- 관련예제 : [peek](./stack_pop.c), [size](./stack_size.c)

#### 삭제연산
- pop 연산 시 pop 시킬 노드는 따로 저장해주고, stack의 top노드는 다음 노드를 가리키게 함
- 관련예제 : [pop](./stack_pop.c), [clear](./stack_clear)
<br>

[맨 위로](#stack-using-linked-list)
