arr :: [Double]
arr[0]=0
arr[n]=arr[n-1]+sin(n-1)

main :: IO()
main=do
    print(arr)
