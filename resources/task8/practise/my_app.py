from flask import Flask,jsonify,request
from embedder.module import Embedder_class
app = Flask(__name__)

  
@app.route('/vectors',methods=['POST'])
def vectors():
    request_data=request.get_json()
    text_data=request_data['text']
    print(text_data)
    embedder=Embedder_class()
    vectors=embedder.predict(text_data)
    return jsonify({'vectors':vectors.tolist()})


if __name__ == "__main__":
    app.run(port=8080)

