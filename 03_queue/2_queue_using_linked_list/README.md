## Queue using Linked List
- 연결리스트를 이용한 큐 
- 참고자료
    - [연결리스트 큐](https://itdexter.tistory.com/79)
    - [자료구조 학습 - 큐](https://velog.io/@underlier12/%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-%ED%95%99%EC%8A%B5-06-egk5f8lhf6)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/linked_list/singly_linked_list)

#### 큐 할당/해제
- 새로운 큐을 할당하고 초기화함
- 앞서 배열을 이용한 큐과 달리 큐 최대크기 제한이 없음
- 관련예제 : [init](./queue_init.c), [create_node](./create_elem.c) [free](./free_queue)

#### 삽입연산
- push 개수 제한이 없어 삽입 시 배열을 이용한 큐와 달리 last_index와 queue->size를 비교하지 않음
- size가 0이었다면 rear도 head와 같이 새 노드를 가리키게 해줌
- 관련예제 : [push](./queue_push.c)

#### 참조연산
- 관련예제 : [front](./queue_front.c), [size](./queue_size.c)

#### 삭제연산
- 삭제 후 size가 0이 된닫면 rear도 head와 같이 널포인터로 만들어줌
- 관련예제 : [pop](./queue_pop.c), [clear](./queue_clear)
<br>

[맨 위로](#queue-using-linked-list)
