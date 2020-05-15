## Singly Linked List
- 단일 연결리스트
- 참고자료
    - [단일 연결리스트 연산과 시간복잡도](https://blog.naver.com/com_sci/221172372843)
    - [Array관련이야기 - LinkedList](https://blog.naver.com/skyvvv624/220916289329)
<br>

## 예제
- [Nadarm's Exercise](https://github.com/nadarm/42-algorithm/tree/master/linked_list/singly_linked_list) (예제 원본)

#### 노드생성
- 새로운 노드를 할당하고 초기화함
- 배열에서는 'sizeof(char) * (len + 1)'과 같이 전체 길이를 정적으로 할당했지만 <br> 리스트에서는 단일 노드만 생성할 것이기 때문에 'sizeof(t_node)'만큼만 할당
- 관련예제 : [노드생성](./create_elem.c)

#### 탐색연산
- 인자로 주어지는 begin_list로 바로 리스트를 탐색하는게 아니라 curr를 새로 선언해서 begin_list를 담아주고 curr로 탐색하도록 함. begin_list를 뒤에 있는 노드로 움직이게 되면 앞에 있는 노드에 접근이 불가능해지기 때문.
- 관련예제 : [n번째탐색](./list_get.c), [값탐색](list_find.c), [노드수반환](./list_size.c)

#### 삽입연산
1. 리스트가 비어있는 경우
2. 리스트가 비어있지 않은 경우
    - head에 새 노드를 삽입할 경우
    - tail에 새 노드를 삽입할 경우
    - 그 외의 경우
- curr = begin_list;라고 하면 curr은 첫번째 노드를 가리키고 있을 뿐, 이 후 curr의 값을 수정한다고 해서 begin_list가 바뀌는 것은 아님
    - 예를 들어 curr = new;라고 하면 첫번째 노드를 가리키던 curr이 new 노드를 가리키게 되었을 뿐임
    - 따라서 head에 새로운 노드를 추가하려면 begin_list = new와 같이 begin_list에 직접 대입해 주어야 함
- 관련예제 : [tail에삽입](./list_add1.c), [n번째삽입](./list_add.c)

#### 삭제연산
1.  노드가 하나일 경우
2. 노드가 두 개 이상일 경우
    - head를 삭제할 경우
    - tail를 삭제할 경우
    - 그 외의 경우
- 관련예제 : [n번째삭제](./list_remove.c)
<br>

[맨 위로](#singly-linked-list)
