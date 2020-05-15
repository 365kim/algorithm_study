## Binary Search Tree
- 이진탐색트리
    - 노드의 왼쪽 및 오른쪽 subtree는 각각이 또 하나의 이진탐색트리임
    - 노드의 왼쪽 subtree에는 그 노드의 값보다 작은 값들을 가진 노드들로 이루어짐
    - 노드의 오른쪽 subtree에는 그 노드의 값과 크거나 같은 값들을 가진 노드들로 이루어짐
- 참고자료 : [트리 - 이진탐색트리](https://jocoma.tistory.com/entry/%ED%8A%B8%EB%A6%AC2-%EC%9E%90%EA%B0%80-%EA%B7%A0%ED%98%95-%EC%9D%B4%EC%A7%84-%ED%83%90%EC%83%89-%ED%8A%B8%EB%A6%AC?category=862940)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/tree/binary_search_tree)

#### 트리 할당/해제
- 관련예제 : [init](./tree_init.c), [create_node](./create_elem.c), [free](./free_tree.)

#### 참조연산
- 참조하고자 하는 값이 root의 값보다 작을 경우, 왼쪽 subtree에서 재귀적으로 검색
- 참조하고자 하는 값이 root의 값보다 클 경우, 오른쪽 subtree에서 재귀적으로 검색
- 관련예제 : [find](./tree_find.c), [size](./tree_size.c)

#### 삽입연산
- 관련예제 : [insert](./tree_insert.c)

#### 삭제연산
- 삭제할 노드의 child 수에 따라 분기
    - 삭제할 노드에 leaf일 경우(child가 없을 경우)
    - 삭제할 노드에 child가 1개일 경우
    - 삭제할 노드에 child가 2개일 경우
- 관련예제 : [delete](./tree_delete.c)

<br>

[맨 위로](#binary-search-tree)
