fibs :: [Integer]
fibs = 3 : -1 : zipWith (+) fibs (tail fibs)



main :: IO()
main=do
    --print(in_range 3 9 6);
    print(take 15 fibs)