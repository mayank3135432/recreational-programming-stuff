''' Algorithm to solve the travelling salesperson problem 
    input: connected weighed graph
    output: lenght of shortest hamiltonian path.
 '''

from numpy import array

shortest_HP = lambda W,i,S,start_vertex : W[i][start_vertex] if len(S)==0 else min({W[i][j]+shortest_HP(W,j,S-{j},start_vertex) for j in S})

if __name__ == "__main__":
    ''' examples of 2 weighed graphs '''
    G=array(
    [[0,16,11,6],
    [8,0,13,16],
    [4,7,0,9],
    [5,12,2,0]]
    )
    V=array(
    [[0,20,30,10,11],
    [15,0,16,4,2],
    [3,5,0,2,4],
    [19,6,18,0,3],
    [16,4,7,16,0]]
    )

    a = shortest_HP(G,0,{1,2,3},0)
    b = shortest_HP(V,0,{1,2,3,4},0)

    print(a,b)
