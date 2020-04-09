## 5. Tree
- 각 노드가 계층적으로 연결된 비선형적 자료구조
- 나무의 뿌리가 제일 위에, 잎이 제일 아래에 있어 나무를 뒤집어 놓은 모양과 같음
<br>

- `root` : 최상단 노드 / `leaf` : 최하단 노드
- `depth` : 'root' 기준 레벨 / `height` : 'leaf' 기준 레벨
- `child` : 링크로 연결된 하위 노드 / `parent` : 링크로 연결된 상위 노드
- `subtree` : 'child'를 'root'로 하는 트리
<br>

- **이진트리**_(Binary Tree)_ : 각각의 노드가 최대 2개의 child를 갖는 트리
    - **정** 이진트리 _(proper binary tree)_ : 모든 노드가 0개 또는 2개의 child를 갖는 이진트리
    - **균형** 이진트리 _(balanced tree)_ : 좌우 subtree의 height가 1 이상 차이나지 않는 이진트리
    - **포화** 이진트리 _(perfect binary tree)_ : 꽉 찬 이진트리
    - **완전** 이진트리 _(complete binary tree)_ : 마지막 레벨을 제외하고 '포화이진트리'인 이진트리

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
1. 전위 순회 _(pre_order traversal)_ : Visit - Left - Right 순서
2. 중위 순회 _(in_order traversal)_ : Left - Visit -Right 순서
3. 후위 순회 _(post_order traversal)_ : Left - Vist - Right 순서
4. 레벨 순회 _(level_order traversal)_ : Root - ... - Leaf 순서
