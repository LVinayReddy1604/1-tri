#3.Arranging List of tuples
data = [
('main st.', 4, 4000),
('elm st.', 1, 1200),
('pine st.', 2, 1600)
]

# Sort in ascending order by first numeric value (index 1)
sorted_by_first_numeric = sorted(data, key=lambda x: x[1])
print("Sorted in ascending order by first numeric value:")
print(sorted_by_first_numeric)

# Sort in descending order by second numeric value (index 2)
sorted_by_second_numeric = sorted(data, key=lambda x: x[2], reverse=True)
print("\nSorted in descending order by second numeric value:")
print(sorted_by_second_numeric)

# Sort in alphabetical order of string value (index 0)
sorted_alphabetically = sorted(data, key=lambda x: x[0])
print("\nSorted in alphabetical order of string value:")
print(sorted_alphabetically)
