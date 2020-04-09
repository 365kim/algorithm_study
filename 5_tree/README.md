## 5. Tree
- 각 노드가 계층적으로 연결된 비선형적 자료구조
- 나무의 뿌리가 제일 위에, 잎이 제일 아래에 있어 나무를 뒤집어 놓은 모양과 같음
- `root` : 최상단 노드 / `leaf` : 최하단 노드
- `depth` : root 기준 / `height` : leaf 기준
- `child` : 링크로 연결된 하위 노드 / `parent` : 링크로 연결된 상위 노드
- `degree` : child 노드의 수
- `subtree` : child를 root로 하는 트리
<br>

- 이진트리(Binary Tree)
    - `binary tree` : 각각의 노드가 최대 2개의 child 노드를 갖는 트리
    - `strict/proper binary tree`
    - `perfect binary tree`
    - `complete binary tree`

### [5.1.](./1_binary_search_tree) **Binary Search Tree**

### [5.2.](./2_heap) **Heap(priority queue)**

### [5.3.](./3_trie) **Tire(prefix tree)**

## 생각해보기

:speech_balloon: **트리가 사용되는 상황**
- 생각해보기

:speech_balloon: **배열로 트리를 구현하려면?**
- 생각해보기

:speech_balloon: **상태공간트리란?**
- 생각해보기

:speech_balloon: **트리 순회(Traversal)의 종류**
1. **전위순회**(pre_order) : Visit - Left - Right 순서
2. **중위순회**(in_order) : Left - Visit -Right 순서
3. **후위순회**(post_order) : Left - Vist - Right 순서
4. **레벨순회**(level_order) : Root - ... - Leaf 순서
- [참고자료](https://3dmpengines.tistory.com/423)
