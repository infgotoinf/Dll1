from ctypes import CDLL

fib = CDLL("C:\\Users\\studentcoll\\Desktop\\UwU\\Dll1\\x64\\Debug\\Dll1.dll")

fib.fibonacci_init(1, 1)

fib.fibonacci_next()
fib.fibonacci_next()
fib.fibonacci_next()
fib.fibonacci_next()
fib.fibonacci_next()
fib.fibonacci_next()
fib.fibonacci_next()
fib.fibonacci_next()

current_ = fib.fibonacci_current()
index_ = fib.fibonacci_index()
print (current_, index_)