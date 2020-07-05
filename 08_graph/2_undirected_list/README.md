## Undirected Graph (Adjacency List)
- __무방향그래프 (인접 리스트)__
    - 정점과 향이 없는 간선으로 표현된 무방향그래프에서, 정점 간의 연결 여부를 리스트로 표현한 것
    - 보통 편의상 vertex 배열은 오름차 순으로 나열
    - 각 vertex에 연결된 노드의 순서에는 의미가 없음. 예를들어 (0) - 1 - 3 이거나 (0) - 3 - 1 이거나 상관없음. <p><img src="https://user-images.githubusercontent.com/60066472/86527291-8a41c180-bed8-11ea-830c-49857d7a18ce.png" width="400"></p>
    
- __참고자료__
    - [그래프 - 인접행렬과 인접리스트](https://sarah950716.tistory.com/12)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/graph/undirected_list)
- 구현
    - [graph_init](./graph_init.c) : 구조체 메모리할당 및 초기화
    - [grpah_set_data](./grpah_set_data.c) : 매개변수로 주어지는 vertex에 data 저장
    - [grpah_set_data](./grpah_get_data.c) : 매개변수로 주어지는 vertex에 담긴 data 반환
    - [graph_set_edge](./graph_set_edge.c) : vertex 끼리 연결하여 edge 연결상태 변경
    - [graph_get_edge](./graph_get_edge.c) : vertex 끼리 연결되어있는지 확인하기 위해 edge 연결상태 반환
    - [free_graph](./free_graph.c) : 그래프의 요소 전체 삭제 및 구조체 메모리 해제
    - [graph_traverse](./graph_traverse.c) : 재귀함수를 이용해 DFS를 구현하여 그래프를 순회하며 data 출력
    - [header](./graph.h)
<br>
