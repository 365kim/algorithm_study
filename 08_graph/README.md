## 8. Graph
- 연결되어 있는 객체 간의 관계를 표현하는 비선형적 자료구조
- `정점(vertex)` : 여러가지 특성을 가질 수 있는 객체
- `간선(edge)` : 정점들간의 관계 의미
<br>

### [8.1.](./1_undirected_matrix) **Undirected Graph(adjacency matrix)**
- 무방향 그래프 (인접행렬)

### [8.2.](./2_undirected_list) **Undirected Graph(adjacency list)**
- 무방향 그래프 (인접리스트)

### [8.3.](./3_directed_list) **Directed Graph(adjacency list)**
- 방향 그래프 (인접리스트)

### [8.4.](./4_mst) **MST(Minimum Spanning Tree)**
1. 크루스칼(kruskal) 알고리즘
2. 프림(prim) 알고리즘

### [8.5.](./5_shortest_path) **Shortest Path**
1. 다익스트라(Dijkstra) 알고리즘
2. 벨먼-포드(Bellman-Ford) 알고리즘
3. 플로이드-워셜(Floyd-Warshall) 알고리즘

<br>

## 생각해보기
- :speech_balloon: ***순환/비순환 그래프란?***
    
    |　　　　　　 순환 그래프 (Cyclic Graph)　　　　　　　|　　　　　　비순환 그래프 (Acylic Graph)　　　　　　|
    |:---:|:---:|
    | 하나 이상의 노드에서 <br>다시 자신까지의 경로를 포함하는 그래프 | 어떠한 노드에서도<br> 다시 그 노드를 통과할 수 없는 그래프 |
    | <p><img src="https://user-images.githubusercontent.com/60066472/86526047-f668f900-bec9-11ea-982d-9cffe20965ef.png" width="300"></p> | <p><img src="https://user-images.githubusercontent.com/60066472/86526046-f5d06280-bec9-11ea-9b08-45a518385da4.png" width="300"></p> |
    
<br><br>

- :speech_balloon: ***그래프와 트리의 비교***
    - __트리__ 는 __그래프__ 의 특수한 형태: _유방향 비순환 그래프 (DAG, Directed Acyclic Graph)_
    <br>
    
    |　　　　　　　　　그래프 (Graph)　　　　　　　　　|　　　　　　　　　　트리 (Tree)　　　　　　　　　　|
    |:---:|:---:|
    | 네트워크 모델 | 계층 모델 |
    | 유방향 or 무방향 | 유방향 |
    | 순환 or 비순환 | 비순환 |
    | 루트/부모/자식노드 개념X | 루트/부모/자식노드 개념O <br> _(자식노드는 단 하나의 부모노드를 가짐)_ |
    | 간선 개수 제한 X | 간선 개수는 항상 정점 수 - 1 |
    | <p><img src="https://user-images.githubusercontent.com/60066472/86526047-f668f900-bec9-11ea-982d-9cffe20965ef.png" width="300"></p> | <p><img src="https://user-images.githubusercontent.com/60066472/86526907-a7749100-bed4-11ea-9d24-1f612874cdc0.png" width="270"></p> |
    
<br><br>

- :speech_balloon: ***그래프 표현방법 비교***
    - 그래프를 활용하여 수행하려는 연산의 종류에 따라 표현방법 결정
    <br>
    
    |구분|　　　　인접 행렬 (Adjacency Matrix)　　　　|　　　　　인접 리스트 (Adjacency List)　　　　　|
    |:---:|:---:|:---:|
    | __정의__ | 정점 간의 연결여부를 이차원 배열로 나타냄 | 각 정점을 오름차순으로 배열에 담고<br>해당 정점에 연결된 정점을 리스트로 나열함 |
    | __전체탐색__ |  O(V²) | O(E) |
    | __(i,j)탐색__ |  O(1) | O(V) |
    | | <p><img src="https://user-images.githubusercontent.com/60066472/86527204-b741a480-bed7-11ea-9658-f5ca1f156fac.png" width="300"></p> | <p><img src="https://user-images.githubusercontent.com/60066472/86527241-0e477980-bed8-11ea-94e2-b43953501271.png" width="250"></p> |
<br><br>

- :speech_balloon: ***그래프의 순회방법 비교***
    - 깊이우선탐색(DFS) 너비우선탐색(BFS)
<br>
        
- :speech_balloon: ***MST 알고리즘의 성능 비교 (어떤 상황에서 어떤 알고리즘이 좋을까?)***
    - kuskal vs prim
<br>

- :speech_balloon: ***각각의 최단경로 알고리즘이 사용되는 경우는?***
    - 단일 출발, 단일 도착, 단일 쌍, 전체 쌍 최단 경로
    - 음수 가중치, 음수 사이클
