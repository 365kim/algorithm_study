## Queue using Array
- 배열을 이용한 큐
- 참고자료
    - [큐의 개념, 배열로 큐 구현하기](http://blog.naver.com/PostView.nhn?blogId=keloc&logNo=40153556226)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/queue/queue_array)

#### 큐할당/해제
- 새로운 큐을 할당하고 초기화함
- 해제 시 데이터의 메모리를 우선 free해주고 queue을 마지막에 free함
- 관련예제 : [init](./queue_init.c), [free](./free_queue)

#### 삽입연산
- last_index를 1 증가시켜 큐의 가장 뒤에 새로운 데이터를 추가함.
    - 만약 'last_index'가 큐 최대 크기 'max_size'보다 크거나 같다면 더 이상 새로운 데이터를 담을 수 없음
- index는 0부터 시작, size는 1부터 시작함에 유의
- 관련예제 : [push](./queue_push.c)

#### 참조연산
- front 연산은 pop 연산과 달리 index 0의 데이터(맨 앞의 데이터)를 삭제하지 않고 참조하여 반환하기만 함
- 관련예제 : [front](./queue_front.c), [size](./queue_size.c)

#### 삭제연산
- pop 시킬 index 0의 데이터는 따로 저장해둠.
- 전체 배열을 한 칸씩 앞으로 당겨서 준 후, last_index를 1 감소시키고 저장해둔 데이터를 반환
- 관련예제 : [pop](./queue_pop.c), [clear](./queue_clear)
<br>

[맨 위로](#queue-using-array)
