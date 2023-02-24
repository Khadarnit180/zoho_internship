from embedder.module import Embedder_class
embedder=Embedder_class()
sentence="This is a test sentence."
vector_sentence=embedder.predict(sentence)
print(vector_sentence)












