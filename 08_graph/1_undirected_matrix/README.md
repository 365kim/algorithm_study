## Undirected Graph (Adjacency Matrix)
- __무방향그래프 (인접 행렬)__
    - 정점 _(vertex)_ 과 향이 없는 간선 _(undirected edge)_ 으로 표현된 무방향그래프에서, 정점 간의 연결 여부를 행렬 _(matrix)_ 로 표현한 것
    - 무방향 그래프에서는 연결된 정점(vertex)들은 양방향 관계를 갖게되어 인접행렬은 대각선(\\)을 기준으로 대칭을 이룸
    <p><img src="https://user-images.githubusercontent.com/60066472/86480551-32e10b80-bd89-11ea-8d59-30a86ba38d41.PNG" width="500"></p> (이미지 출처: https://kingpodo.tistory.com/46)
- __참고자료__
    - [그래프 - 인접행렬과 인접리스트](https://sarah950716.tistory.com/12)
    - [MOOC강의 - 그래프1 _(1.5배속)_ ](http://www.kocw.net/home/search/kemView.do?kemId=1161730)
    - [그래프의 순회](https://kingpodo.tistory.com/47)
    - [Graph 검색 DFS, BFS 구현 _(1.5배속)_ ](https://www.youtube.com/watch?v=_hxFgg7TLZQ)
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/graph/undirected_matrix)
- 구현
    - [graph_init](./graph_init.c) : 구조체 메모리할당 및 초기화
    - [grpah_set_data](./grpah_set_data.c) : 그래프에 vertex에 data 저장
    - [graph_set_edge](./graph_set_edge.c) : 그래프의 vertex 끼리 연결하여 edge 연결상태 변경
    - [graph_get_edge](./graph_get_edge.c) : 그래프의 vertex 끼리 연결되어있는지 확인하기 위해 edge 연결상태 반환
    - [free_graph](./free_graph.c) : 그래프의 요소 전체 삭제 및 구조체 메모리 해제
    - [graph_traverse](./graph_traverse.c) : 재귀함수를 이용해 DFS를 구현하여 그래프를 순회하며 data 출력
    - [make_graph](./make_graph.c) : 예제원본 그림에서 제시하는 그래프 생성
    - [header](./graph.h) : 구조체에 그래프의 size(vertex갯수), vertex에 저장할 데이터 data, edge 연결상태를 표현할 matrix를 담음
<br>

[맨 위로](#undirected-graph-(adjacency-matrix))
