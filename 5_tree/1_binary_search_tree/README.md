## Binary Search Tree
- 노드의 왼쪽 및 오른쪽 subtree는 각각이 또 하나의 이진검색트리임
- 노드의 왼쪽 subtree에는 그 노드의 값보다 작은 값들을 지닌 노드들로 이루어짐
- 노드의 오른쪽 subtree에는 그 노드의 값과 같거나 큰 값들을 지닌 노드들로 이루어짐  
<br>

### 트리 할당/해제
- 관련예제 : [init](./tree_init.c), [create_node](./create_elem.c), [free](./free_tree)

### 참조연산
- 참조하고자 하는 값이 root의 값보다 작을 경우, 왼쪽 subtree에서 재귀적으로 검색
- 참조하고자 하는 값이 root의 값보다 클 경우, 오른쪽 subtree에서 재귀적으로 검색
- 관련예제 : [find](./tree_find.c), [size](./tree_size.c)

### 삽입연산
- 관련예제 : [insert](./tree_insert.c)

### 삭제연산
- 삭제할 노드의 child 수에 따라 분기
    - 삭제할 노드에 leaf일 경우(child가 없을 경우)
    - 삭제할 노드에 child가 1개일 경우
    - 삭제할 노드에 child가 2개일 경우
- 관련예제 : [tree_delete](./tree_delete)
