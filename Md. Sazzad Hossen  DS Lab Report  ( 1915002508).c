#include<stdio.h>
void print_matrix(int mat[100][100], int vertex);
void input_graph(int mat[100][100], int edge, int vertex, char vertex_name[100]);
void print_adjacent(int mat[100][100], int vertex, char vertex_name[100]);
void print_degree(int mat[100][100], int vertex, char vertex_name[100]);
void print_edge(int mat[100][100], int vertex, char vertex_name[100]);
int search(char vertex_name[100], int size, char key);

int main()
{
    int mat[100][100], vertex, edge;
    int i,j;
    char vertex_name[100], name;
    printf("Number of Vertex : ");
    scanf("%d",&vertex);
    printf("\nNumber of Edge   : ");
    scanf("%d",&edge);
    printf("\n");

    printf("Vertices : ");
    getchar();
    for(i=0; i<vertex; i++)
    {
        name = getchar();
        vertex_name[i] = name;
        getchar();
    }

    printf("\n\n");
    input_graph(mat, edge, vertex, vertex_name);
    print_matrix(mat, vertex);
    print_edge(mat, vertex, vertex_name);
    print_adjacent(mat, vertex, vertex_name);
    print_degree(mat, vertex, vertex_name);
    return 0;
}

void input_graph(int mat[100][100], int edge, int vertex, char vertex_name[100])
{
    int i, d, e;
    char a, b;
    getchar();
    for(i=0; i<edge; i++)
    {
        scanf("%c %c",&a, &b);

        getchar();

        d = search(vertex_name, vertex, a);
        e = search(vertex_name, vertex, b);

        mat[d][e] = 1;
        mat[e][d] = 1;
    }
}

int search(char vertex_name[100], int size, char key)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(vertex_name[i] == key)
        {
            return i;
        }
    }
    return -1;
}
void print_matrix(int mat[100][100], int vertex)
{
    int i,j;
    printf("\nAdjacency Matrix  _________\n\n");
    for(i=0; i<vertex; i++)
    {
        for(j=0; j<vertex; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void print_edge(int mat[100][100], int vertex, char vertex_name[100])
{
    int i,j;
    printf("\n\nEdge List  _________\n\n");
    for(i=0; i<vertex; i++)
    {
        for(j=0; j<vertex; j++)
        {
            if(mat[i][j] != 0)
            {
                printf("%c %c     \n",vertex_name[i], vertex_name[j]);
            }
        }
        printf("\n");
    }
}
void print_adjacent(int mat[100][100], int vertex, char vertex_name[100])
{
    int i,j,count;
    printf("\n\nAdjacent List  _________\n\n");
    for(i=0; i<vertex; i++)
    {
        printf("Adjacent of %c => ",vertex_name[i]);
        count =0;

        for(j=0; j<vertex; j++)
        {
            if(mat[i][j] != 0)
            {
                if(count>0)
                {
                    printf(", ");
                }
                printf("%c",vertex_name[j]);
                count++;
            }
        }
        printf("\n");
    }
}

void print_degree(int mat[100][100], int vertex, char vertex_name[100])
{
    int i,j;
    printf("\n\nDegree of Vertex _________\n\n");
    printf("Vertex      Degree\n\n");
    for(i=0; i<vertex; i++)
    {
        int count = 0;
        for(j=0; j<vertex; j++)
        {
            if(mat[i][j] != 0)
            {
                count++;
            }
        }
        printf("  %c            %d\n",vertex_name[i], count);
    }
}


/*

A B C D E F G H
A B
A C
A E
B A
B D
B E
C A
D B
D E
D F
E A
E B
E D
F D
F G
F H
G F
G H
H F
H G

*/
