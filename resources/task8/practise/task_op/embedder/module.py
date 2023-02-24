from sentence_transformers import SentenceTransformer
class Embedder_class:
    def __init__(self):
        self.embedder_module = SentenceTransformer('all-MiniLM-L6-v2')

    def predict(self, text):
        sentence_vector = self.embedder_module.encode(text)
        return sentence_vector
        

