## 5. Tree
- 각 노드가 계층적으로 연결된 비선형적 자료구조
- 나무의 뿌리가 제일 위에, 잎이 제일 아래에 있어 나무를 뒤집어 놓은 모양과 같음
- `root` : 최상단 노드
- `leaf` : 최하단 노드
- `child` : 링크로 연결된 하위 노드
- `parent` : 링크로 연결된 상위 노드
- `subtree` : 'child'를 'root'로 하는 트리
- `depth` : 'root' 기준 레벨, `height` : 'leaf' 기준 레벨

### [5.1.](./1_binary_search_tree) **Binary Search Tree**

### [5.2.](./2_binary_heap) **Binary Heap(priority queue)**

### [5.3.](./3_trie) **Trie(prefix tree)**

## 생각해보기

:speech_balloon: **트리가 사용되는 상황**
- 파일시스템(디렉토리 구조), 검색엔진, 데이터베이스관리시스템(DBMS), 라우터 알고리즘 등
- 일상 : 조직도, 족보 등

:speech_balloon: **이진트리의 종류**
- **이진트리**_(Binary Tree)_ : 각각의 노드가 최대 2개의 child를 갖는 트리
    - **정** 이진트리 _(full binary tree)_ : 모든 노드가 0개 또는 2개의 child를 갖는 이진트리
    - **균형** 이진트리 _(balanced tree)_ : 좌우 subtree의 height가 1 이상 차이나지 않는 이진트리
    - **포화** 이진트리 _(perfect binary tree)_ : 꽉 찬 이진트리
    - **완전** 이진트리 _(complete binary tree)_ : 마지막 레벨을 제외하고 '포화이진트리'인 이진트리

:speech_balloon: **배열로 트리를 구현하려면?**
- index `0`은 비우고 index `1`은 root, index `2`는 root의 child...로 순서대로 배치함
- 이진트리인 경우, index `p`의 child는 index `2p` 와 index `2p + 1`이며, index `c`의 parent는 index `c/2`임
- 트리의 높이가 높아지고 한 쪽으로 기울어질 수록 비어있는 공간이 많아져서 메모리 효율이 떨어짐

:speech_balloon: **트리순회의 종류**
- **트리순회** : 각각의 노드를 딱 한 번만 방문하는 과정
- **깊이우선탐색** _(DFT, Depth First Search)_
    - 전위 순회 _(pre_order traversal)_ : Visit - Left - Right 순서
    - 중위 순회 _(in_order traversal)_ : Left - Visit -Right 순서
    - 후위 순회 _(post_order traversal)_ : Left - Vist - Right 순서
- **너비우선탐색** _(BFS, Breadth First Search)_
    - 레벨 순회 _(level_order traversal)_ : Root - ... - Leaf 순서
    
:speech_balloon: **상태공간트리(State-Space Tree)란?**
- 해를 찾기위해 탐색해야 하는 모든 노드를 포함하는 트리
- **되추적기법** _(Backtracking)_ : DFS방식으로 '상태공간트리'를 탐색하여 해를 찾는 알고리즘
- **분기한정법** _(Branch & Bound)_ : 방식에 제한없이 '상태공간트리'를 탐색하여 해를 찾는 알고리즘
