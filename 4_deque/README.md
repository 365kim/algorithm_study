## 4. Deque
- 양쪽 끝에서 데이터 삽입/삭제가 모두 가능한 자료구조
- deque 는 'double-ended queue'를 의미 *(dequeue로도 쓰지만 연산이름과 겹쳐서 지양, 발음은 [deck])*
- 큐, 스택의 기능을 합친 형태로 자유도가 높음
- `front` : 덱의 맨 앞, `back` : 덱의 맨 뒤
- `push_front`, `push_back` : 데이터 삽입연산
- `pop_front`, `pop_back` : 데이터 삭제연산
- `begin`, `end` : peek연산

### [4.1.](./1_deque_using_linked_list) **Deque using Linked List**
- **장점** : front 또는 rear에서 데이터의 삽입/삭제가 자유롭고, 덱 크기의 제한이 없다.
- **단점** : 비교적 구현이 어렵다

## 생각해보기

:speech_balloon: **덱이 사용되는 상황**
- 스케줄링(i.e. steal-job scheduling algorithm)
- 우선순위를 조정해야 하는 경우(스택에서는 먼저 넣은 작업의 우선순위를 높일 수 없고, 큐에서는 나중에 넣은 작업의 우선순위를 높일 수 없음)

:speech_balloon: **배열로 덱를 구현하려면?**
- 조건에 맞게 배열의 크기를 확보해두고 front, back 인덱스를 증감시켜 구현
