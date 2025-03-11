def is_armstrong(num):
    num_str = str(num)  # Convert number to string to get digits
    power = len(num_str)  # Find the number of digits (power)
    
    # Calculate the sum of each digit raised to the power of total digits
    armstrong_sum = sum(int(digit) ** power for digit in num_str)
    
    return num == armstrong_sum  # Check if sum matches the original number

# Input from the user
num = int(input("Enter a number: "))

# Check and print result
if is_armstrong(num):
    print(f"{num} is an Armstrong number.")
else:
    print(f"{num} is not an Armstrong number.")
