def find_largest_continuous_sequence(arr):
    sum_map = {0: -1}  # Initialize the hashmap with a sum of 0 at index -1
    max_length = 0
    end_index = -1

    current_sum = 0
    for i in range(len(arr)):
        current_sum += arr[i]

        if current_sum in sum_map:
            length = i - sum_map[current_sum]
            if length > max_length:
                max_length = length
                end_index = i

        if current_sum not in sum_map:
            sum_map[current_sum] = i

    # Extract the subarray from the original array
    if end_index != -1:
        start_index = end_index - max_length + 1
        return arr[start_index: end_index + 1]

    return None

# Test case
arr = [1, 2, -2, 4, -4]
result = find_largest_continuous_sequence(arr)
print(result)  # Output: [2, -2, 4, -4]
