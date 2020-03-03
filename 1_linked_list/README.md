## Linked List
- 자료구조의 하나로, 각 노드를 연결한 것(연결된 것을 리스트라고 한다)
- 노드는 데이터와 포인터로 구성
- 삽입연산, 제거연산, 탐색연산
- 배열과는 완전히 다른 구조로 다른 방식으로 연산을 한다

### Singly Linked List
- 노드 : 데이터, 다음 노드를 가리키고 있는 포인터로 구성
- 장점 : 삽입 또는 제거시 앞뒤로 밀거나 당기는 연산이 없어서 시간손실이 배열보다 적다
         head와 tail로 각각 맨앞의 요소 탐색, 맨뒤의 요소 탐색을 빠르게 할 수있다
- 단점 : head, tail 이 아닌 특정부분 탐석의 경우 해당지점까지 순차적으로 탐색해야 하므로 배열에 비해 탐색시간이 많이 걸린다

### Doubly Linked List
 - 노드 : 데이터, 다음 노드를 가리키고 있는 포인터, 이전 노드를 가리키고 있는 포인터로 구성
 - 장점 : 단방향 탐색만 가능한 singly linked list와 달리 양방향 탐색이 가능하다. 즉 tail에서 더 가까운 경우 tail부터 탐색을 하게 되어 singly linked list보다는 탐색이 빠르다
 - 단점 : 역시 탐색속도가 배열보다는 느리다 

### Circular Liked List
 - 노드 : 데이터, 다음 노드를 가리키고 있는 포인터로 구성. 단, tail은 head를 가리킨다
 - 장점 : 미니 > 프로 > 맥북 > 미니 
 - 단점 : 텅-장엔딩

## 생각해보기
- linked list와 array의 차이점
1. 삽입연산이나 제거연산에서는 liinked list가 유리하다
1. 탐색에서는 array가 유리하다
1. 메모리를 연속적으로 할당하는 array와 달리, linked list는 각 노드가 다음 노드의 주소(doubly면 이전까지)도 갖고있어야 하므로 메모리가 더 많이 소요된다