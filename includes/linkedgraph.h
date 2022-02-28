#ifndef _GRAPH_ADJLIST_
#define _GRAPH_ADJLIST_


typedef struct LinkedGraphType
{
	int maxVertexCount;		// �ִ� ��� ����
	int currentVertexCount;	// ���� ���Ǵ� ����� ����
	int currentEdgeCount;	// ���� ������ ����
	int graphType;			// �׷��� ����: 1-Undirected, 2-Directed
	LinkedList** ppAdjEdge;	// ���� ������ ���� ���� ����Ʈ (������)�� �迭
	int *pVertex;			// ��� ������ ���� 1���� �迭
} LinkedGraph;

// �׷��� ����
LinkedGraph* createLinkedGraph(int maxVertexCount);
LinkedGraph* createLinkedDirectedGraph(int maxVertexCount);

// ���� �׷��� ���� �Ǵ�
int isEmptyLG(LinkedGraph* pGraph);

// ��� �߰�
int addVertexLG(LinkedGraph* pGraph, int vertexID);

// ���� �߰�
int addEdgeLG(LinkedGraph* pGraph, int fromVertexID, int toVertexID);
int addEdgewithWeightLG(LinkedGraph* pGraph, int fromVertexID, int toVertexID, int weight);

// ��� ����
int removeVertexLG(LinkedGraph* pGraph, int vertexID);

// ���� ����
int removeEdgeLG(LinkedGraph* pGraph, int fromVertexID, int toVertexID);
int getGraphNodePosition(LinkedList* pList, int vertexID);

// ���� ���� ��ȯ
int getEdgeCountLG(LinkedGraph* pGraph);

// ��� ���� ��ȯ
int getVertexCountLG(LinkedGraph* pGraph);

// �ִ� ��� ���� ��ȯ
int getMaxVertexCountLG(LinkedGraph* pGraph);

// �׷��� ����
int deleteLinkedGraph(LinkedGraph **pGraph);

// �׷��� ���� ��ȯ
int getGraphTypeLG(LinkedGraph* pGraph);

// �׷��� ���� ���
int	displayLinkedGraph(LinkedGraph* pGraph);

// ���� �켱 Ž��(DFS)
// �ʺ� �켱 Ž��(BFS)
int	graph_traversal_DFS(LinkedGraph *pGraph, int index);
int	graph_traversal_BFS(LinkedGraph *pGraph, int index);


#endif

#ifndef _COMMON_GRAPH_DEF_
#define _COMMON_GRAPH_DEF_

#define TRUE				1
#define FALSE				0

#define	VISITED				2
#define USED				1
#define NOT_USED			0

#define SUCCESS				1
#define FAIL				0

#define GRAPH_UNDIRECTED	1
#define GRAPH_DIRECTED		2

#endif