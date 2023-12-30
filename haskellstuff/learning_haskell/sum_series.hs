sumseries :: (num -> num) -> num -> num
sumseries f 0 = f 0
sumseries f n = f n + sumseries f (n-1)

--Integrate :: (Double -> Double) -> Double -> Double -> Double
--Integrate f a b 
main :: IO()
main =do
    print(sumseries (\n -> n*n/2) 10)