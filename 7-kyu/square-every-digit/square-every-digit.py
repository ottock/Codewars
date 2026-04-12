def square_digits(num):
    result = [str(int(n) * int(n)) for n in str(num)]
    return int(''.join(result))