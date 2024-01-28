compose :: Int -> (a -> a) -> a -> a
compose 0 f = (\x -> x)
compose n f = f . (compose (n-1) f)

sq3 = compose 3 (\x -> x^2)

{- inverse :: (a -> b) -> b -> a
inverse f (f a) = a -}

main :: IO()
main = do
    print(sq3 2)