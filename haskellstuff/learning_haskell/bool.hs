t :: a -> b -> a
t x y = x
f :: a -> b -> b
f x y = y

data bool = t | f

and :: bool -> bool -> bool
and p q = (p q f)

main :: IO()
main = do
    print((and t f) 1 0)