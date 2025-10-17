import pdb
def reverse_each_word(sentence):
    words = sentence.split(" ")
   
    for i,word in enumerate(words):
        pdb.set_trace()
        words[i] = word[::-1]  # Reverse each word
    return " ".join(words)

print(reverse_each_word("hello world this is python"))
