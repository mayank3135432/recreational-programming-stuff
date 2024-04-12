import numpy as np

def matrix_chain(d):
    num = len(d)-1 # number of matrices
    M = np.array([0]*num**2).reshape(num,num)
    i=0;inc=1
    while(1):
        j=i+inc
        M[i,j] = min(tuple((M[i,k]+M[k+1,j]+d[i]*d[k+1]*d[j+1] for k in range(i,j))))
        if(j>=num-1):
            if i==0:
                break
            else:
                i=0
                inc=inc+1
        else:
            i=i+1
    return (M[0][num-1])
    


if __name__ == "__main__":
    ''' let take a chain of marices with dimensions as below
            (13,5) (5,89) (89,3) (3,34) 
        then the input vector to our algorithm must be (13,5,89,3,34)
        '''
    dimvec = [13,5,89,3,34]
    lno = matrix_chain(dimvec)
    print(f'Minimum number of multiplications is {lno}')