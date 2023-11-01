def count_characters(text):
    return len(text)


def count_words(text):
    words = text.split()
    return len(words)


def count_lines(text):
    lines = text.split('\n')
    return len(lines)


print("Enter your paragraph (press Enter and then Ctrl+D on an empty line to finish):")
lines = []
while True:
    try:
        line = input()
    except EOFError:
        break
    lines.append(line)
        
paragraph = '\n'.join(lines)

    # Counting characters, words, and lines
num_characters = count_characters(paragraph)
num_words = count_words(paragraph)
num_lines = count_lines(paragraph)
print("\n--- Result ---")
print(f"Number of characters: {num_characters}")
print(f"Number of words: {num_words}")
print(f"Number of lines: {num_lines}")