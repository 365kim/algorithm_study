## MST (Minimum Spanning Tree)
- __신장트리__ _(Spanning Tree)_
    - 그래프에서 일부 간선을 선택하되, 간선의 수를 가장 적게해서 만든 트리
    - 모든 정점들이 연결되어 있어야하고, 사이클을 포함하지 않음
    - 하나의 그래프에 다수의 신장트리가 존재할 수 있음
- __최소신장트리__ _(Minimum Spanning Tree)_
    - 신장트리 중 사용된 간선들의 가중치 합이 최소가 되는 트리
    - 통신망, 도로망, 유통망 에서 길이, 구축비용, 전송시간 등을 최소로 구축하려는 경우 사용
- __Prim 알고리즘으로 MST 구현__
    - 시작 정점으로부터 신장트리 집합을 단계적으로 확장해나가는 방법
    - 구현방법
        1. 우선 시작 정점만 MST 집합에 추가
        2. 앞 단계에서 만들어진 MST 집합에 인접한 정점들 중 가장 낮은 가중치를 가진 간선으로 연결된 정점을 선택하여 MST 집합에 추가
        3. 위의 과정을 트리가 (n-1)개의 간선을 가질 때까지 반복
- __Kruskal 알고리즘으로 MST 구현__
    - greedy method 이용
    - 이전 단계에 만들어진 신장트리와는 상관없이 무조건 각 단계에서 사이클을 이루지 않는 최소 간선만을 선택
    - 구현방법
        1. 간선의 가중치 오름차 정렬
        2. 가장 낮은 가중치 순으로 사이클을 형성하지 않는 간선을 선택하여 MST 집합에 추가
- __참고자료__
    - [[알고리즘] 최소 신장 트리](https://gmlwjd9405.github.io/2018/08/28/algorithm-mst.html)
<br>

## Nadarm's Exercise
- [prim 예제 원본](https://github.com/nadarm/42-algorithm/tree/master/graph/prim)
- [kruskal 예제 원본](https://github.com/nadarm/42-algorithm/tree/master/graph/kruskal)
- 구현
    - [make_mst_prim](./make_mst_prim.c)
    - [make_mst_kruskal](./make_mst_kruskal.c)
    - [header](./graph.h)
