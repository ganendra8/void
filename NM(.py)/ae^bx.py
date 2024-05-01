import math

def exponential_form(x1, y1, x2, y2):
    # Calculate b
    b = (math.log(y2) - math.log(y1)) / (x2 - x1)
    # Calculate a
    a = y1 / math.exp(b * x1)
    return a, b

def main():
    x1, y1 = map(float, input("Enter the first point (x1 y1): ").split())
    x2, y2 = map(float, input("Enter the second point (x2 y2): ").split())
  
    a, b = exponential_form(x1, y1, x2, y2)

    print(f"The exponential form is: y = {a:.2f} * e^({b:.2f}x)")
    print("Suyog Rana Magar")


main()
