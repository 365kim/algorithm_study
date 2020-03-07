## Circular Linked List
- 원형 연결리스트
- tail 노드가 NULL을 가리키지 않고 다시 head를 가리키는 형태
- 모든 포인터가 다음 노드로 연결되어있기 때문에 cycle 구조의 자료의 구현에 유용하다
- 원형이기 때문에 tail 없이 head 만 사용한다
- singly circular, doubly circular 두 경우 모두 가능한데 여기서는 연습을 위해 prev까지 들어있는 노드를 기본 단위로 하여 doubly로 구현한다

## fltmxm

### 노드생성
- 새로운 노드를 할당하고 초기화 시켜준다. 
- 관련예제 : [노드생성](./create_elem.c)

### 탐색연산
- 인자로 주어지는 begin_list로 바로 리스트를 탐색하는게 아니라 curr를 새로 선언해서 begin_list를 담아주고 curr로 탐색하도록 한다. begin_list를 뒤에 있는 노드로 움직이게 되면 앞에 있는 노드에 접근이 불가능해지기 때문이다.
- 관련예제 : [n번째탐색](./list_get.c), [값탐색](list_find.c), [노드수반환](./list_size.c)

### 삽입
> 1. 리스트가 비어있는 경우
> 2. 리스트가 비어있지 않은 경우 <br>
>  2-1. head에 새 노드를 삽입할 경우<br>
>  2-2. tail에 새 노드를 삽입할 경우<br>
>  2-3. 그 외의 경우
- curr = begin_list;라고 하면 curr은 첫번째 노드를 가리키고 있을 뿐, 이 후 curr의 값을 수정한다고 해서 begin_list가 바뀌는 것은 아니다. 예를 들어 curr = new;라고 하면 첫번째 노드를 가리키던 curr이 new 노드를 가리키게 되었을 뿐인 것이다. 따라서 head에 새로운 노드를 추가하려면 begin_list = new와 같이 begin_list에 직접 대입해 주어야 한다
- 관련예제 : [tail에삽입](./list_add1.c), [n번째삽입](./list_add.c)

### 삭제연산
> 1. 노드가 하나일 경우
> 2. 노드가 두 개 이상일 경우<br>
>  2-1. head를 삭제할 경우<br>
>  2-2. tail를 삭제할 경우<br>
>  2-3. 그 외의 경우
- 관련예제 : [n번째삭제](./list_remove.c)
