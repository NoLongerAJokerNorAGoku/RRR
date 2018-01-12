#include <limits.h>
int* enumeration_crs_hybrid_recovery_solution(int k, int m, int w, int failed_disk_id, int *generator_matrix);
#define BIG_NUMBER INT_MAX

typedef long long Pathmatrix;    /* ���ڴ洢���·���±������ */
typedef int ShortPathTable;/* ���ڴ洢���������·����Ȩֵ�� */

typedef int* VertexType; /* ��������Ϊint*����ʾһ��01���� */
typedef int EdgeType;    /* ���ϵ�Ȩֵ����Ϊint */

typedef struct EdgeNode  /* �߱��� */
{
	long long adjvex;          /* �ڽӵ���, �洢�ö����Ӧ���±� */
	EdgeType weight;     /* ���ڴ洢Ȩֵ,���ڷ���ͼ���Բ���Ҫ */
    struct EdgeNode *next;      /* ����,ָ����һ���ڽӵ� */
} EdgeNode;

typedef struct VextexNode/* ������� */
{
	VertexType data;     /* ������,�洢������Ϣ */
	EdgeNode *firstedge; /* �߱�ͷָ�� */
} VextexNode, AdjList;

typedef struct
{
	AdjList* adjList;
	long long numNodes, numEdges; /* ͼ�е�ǰ�������ͱ��� */
} GraphAdjList;

typedef struct 
{
	long long* node_set;//����Ľڵ㼯��
	long long node_num;//����Ľڵ���
}NodeSet;
