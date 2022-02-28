#ifndef _GRAPH_ADJMATRIX_
#define _GRAPH_ADJMATRIX_

typedef struct ArrayGraphType
{
	int maxVertexCount;		// �ִ� ��� ����
	int currentVertexCount;	// ���� ���Ǵ� ����� ����
	int graphType;			// �׷��� ����: 1-Undirected, 2-Directed
	int *pVertex;			// ��� ������ ���� 1���� array
	int **ppAdjEdge;		// ���� ������ ���� 2���� array
} ArrayGraph;

// �׷��� ����
ArrayGraph	*createArrayGraph(int maxVertexCount);
ArrayGraph	*createArrayDirectedGraph(int maxVertexCount);

// �׷��� ����
void deleteArrayGraph(ArrayGraph **pGraph);

// ���� �׷��� ���� �Ǵ�
int isEmptyAG(ArrayGraph *pGraph);

// ��� �߰�
int addVertexAG(ArrayGraph *pGraph, int vertexID);

// ���� �߰�
int addEdgeAG(ArrayGraph *pGraph, int fromVertexID, int toVertexID);
int addEdgewithWeightAG(ArrayGraph *pGraph, int fromVertexID, int toVertexID, int weight);

// ��� ����
int removeVertexAG(ArrayGraph *pGraph, int vertexID);

// ���� ����
int removeEdgeAG(ArrayGraph *pGraph, int fromVertexID, int toVertexID);

// �׷��� ���� ���
int displayArrayGraph(ArrayGraph *pGraph);

// ���� ���
int	print_error_message(char *msg);

#endif

#ifndef _COMMON_GRAPH_DEF_
#define _COMMON_GRAPH_DEF_

#define USED				1
#define NOT_USED			0

#define SUCCESS				1
#define FAIL				0

#define TRUE				1
#define FALSE				0
#define ERROR				-1

#define GRAPH_UNDIRECTED	1
#define GRAPH_DIRECTED		2
#endif
