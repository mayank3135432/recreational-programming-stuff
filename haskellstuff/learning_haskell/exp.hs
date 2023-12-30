{- 
fact :: int -> int
fact 0 = 1
fact n = n*fact (n-1)

povf :: Double -> Int -> Double
povf a 0 = 1
povf a n = a*(povf a (n-1))

 -}
e=2.718281828459045 :: Double
term :: Double -> Int -> Double
term a 0 = 1
term a n = (a/(fromIntegral n))*term a (n-1)


expacc :: Double -> Int -> Double
expacc a 1 = 1
expacc a n
    |a>1 =e*(expacc (a-1) n)
    |(0<a) && (a<1) =(term a n) + (expacc a (n-1))
    |a==0 =1
    |a==1 =e
    |a<0 =1/(expacc a n)

expo :: Double -> Int -> Double
expo a 1 = 1
expo a n
    |(0<a) =(term a n) + (expo a (n-1))
    |a<0 =1/(expo a n)

main :: IO()
main=do
    print(expo 20 10)