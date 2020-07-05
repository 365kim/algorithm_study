## Undirected Graph (Adjacency List)
- __무방향그래프 (인접 리스트)__
    - 정점 _(vertex)_ 과 향이 없는 간선 _(undirected edge)_ 으로 표현된 무방향그래프에서, 정점 간의 연결 여부를 리스트 _(list)_ 로 표현한 것
    
    - __참고자료__
      - 추가
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

[맨 위로](#undirected-graph-(adjacency-list))
