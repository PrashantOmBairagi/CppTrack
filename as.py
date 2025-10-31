def assignment_3(test_value):
  

  reversed_values = test_value[::-1]
  result = []

  for i in range(len(test_value)):
    if i % 2 == 1:
      result.append(test_value[i] + reversed_values[i])
    else:
      result.append(test_value[i])

  return result


  input_list = list(map(int, input().split()))
  output_list = assignment_3(input_list)
  print(*output_list)