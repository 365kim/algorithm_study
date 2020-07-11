#ifndef GRAPH_H
# define GRAPH_H

typedef unsigned int uint;

typedef struct s_node
{
	unsigned int vertex;
	int cost;
	struct s_node *next;
} t_node;

typedef struct s_graph
{
	unsigned int size;
	void **data;
	t_node **list;
} t_graph;

t_graph *graph_init(uint size);
bool graph_set_data(t_graph *graph, uint vertex, void *data);
void *graph_get_data(t_graph *graph, uint vertex);
bool graph_set_edge(t_graph *graph,uint vertex1, uint vertex2, bool state, int cost);
bool graph_get_edge(t_graph *graph,uint vertex1, uint vertex2, int *cost);
void free_graph(t_graph *graph, void (*free_data)(void *));
 
 #endif
