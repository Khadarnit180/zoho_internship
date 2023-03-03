These are the tasks i have done in my zoho internship.-----------------------------------




TASK1-------------------BASICS OF CPP-----------------------------------------------------------------------------------------


C Vs Cpp.
Learn about struct, class, data types, casting, access specifiers.
Learn about operator overloading, polymorphism.
What are the usages of virtual function, inline function, abstraction.
What are cpp libraries.
Process vs Threads.
Multithreading in cpp

topics:------------------------------------------------
In a folder, have some files in .txt format. Read the contents of the file and remove the words if they are printed more than once successively. Example: "Read a file file file" has to be converted to "Read a file".
Create 10 threads and do the above processing in a parallel manner.
If the number of files is less than 10, then create number of threads equal to the number of files. Example: If there is only one file in the folder then create only one thread.
Print the total time taken for execution.
Task-2---------------------------------------------------------------------
  1. Dynamic vs Static binding.
        2. Smart pointers
        3. Call linkage overhead.
        4. Diamond problem.
        5. Since cpp is machine architecture oriented, how does  
            working change from 32 and 64 bit.
        6. What is page fault.
        7. What is virtual memory, Physical memory, Shared memory.




TASK3:----------------------------------------------------using python.---------------------------------------------------------------------


In a folder, have some files in .txt format. Read the contents of the file and remove the words if they are printed more than once successively. Example: "Read a file file file" has to be converted to "Read a file".
Create 10 threads and do the above processing in a parallel manner.
If the number of files is less than 10, then create number of threads equal to the number of files. Example: If there is only one file in the folder then create only one thread.
Print the total time taken for execution.

topics:-----------------------

Learn these topics after completing the practical task,
CPU, Architecture, Functionality.
Conda vs Docker
Process, Core, Memory


TASK -4-----------------------------------------


Create a c++ program with continuous memory allocation.
Find the memory used by the cpp program once every 10 seconds.
Bind this cpp program with python and call this cpp function from python.

TOPICS:
-----------------------MACHINE LEARNING TOPICS -------------------------------------------------------------------------------------STATRTED

Learn about Pytorch. Install Pytorch. Uses of tools like Jupyter Notebook, Google Colab.
Vector, Matrix, Tensor, Gradient descent, Numpy, Torch, TorchVision.
Process of vectorization
Linear regression model.
Dataset, Weight, Bias. Parameters Vs HyperParameters.
PRACTICAL TASK:----------
Generating prediction using linear regression model.



Relationship between gradient descent and weights and biases.
Loss function Vs Cost function.
Epoch, Benefits of increasing epoch.
Learning rate.
Optimizer in Pytorch
Mean squared error.
Forward Vs Backward function.


PRACTICAL TASK:------------------------------------
Train an unstructured data. List hyper-parameters and parameters of your model. Adjust the learning rate to half the value and find the changes in the model.

----------TASK 5------------------------------------------------
 TOPICS:
LOGISTIC REGRESSSION
Linear regression vs Logistic regression. Model?
Importance of batch size while training.
What is cross entropy? Accuracy vs Loss function. 
Importance of hidden layer. Deep Neural Network.
Necessity of GPU in training. Device parameter? 


Practical TASK------------------------
1)Train the same model of Part 1 with one hidden layer.Document the performance improvement on using this layer.

2)Training a model with logistic regressioN

3)Practical TASK :Compare the training times on a CPU vs. GPU

TASK 6:----------------------------------------------DEEPLEANING TOPICS----------------------------------------------------

Once you complete your current task, start these,
Convolution Neural Network. nn.Sequential , nn.Conv2d, nn.ReLU, nn.MaxPool2d layers.
Overfitting, How to avoid it? Learning rate scheduling? Weight decay. Gradient clipping?
Regularization of data? Data Normalization and Augmentation?
Importance of testset validation. 



TASK 7:---------------------------------------------------------------------ONNX AND AUDIO ---------------------------------------------------

Create python library which takes audio as input and provides magnitude after applying RFFT on audio.
Export this method of python library into onnx model.
Run this onnx model and pass the audio and get magnitude as output.


Practical task:8-------------------------------------CREATING WEB APPLICATION - USING FLASK AND GUNICORN  AND POETRY ALSO USED-------------------------

 TOPICS 8:
      2. Basic commands of Git
      3. Flask
      4. Gunicorn
      5. Sentence Transformers


      1. Create a package which will have a class named "Embedder" with a member named "embedder_module". Assign any open source embedder(any pretrained model available in sentence transformers) to "embedder_module". Create a class function named 'predict' which will take a text as input and return the sentence vector generated by the "embedder_module" for the given text. So when i want to use the above class in a new conda environment, i must be able to install the package using the poetry files and import the class without any issue.

       2. Using Gunicorn + Flask, create a web server with an endpoint '/vectors' with method type POST. The endpoint must read the text present in the request body of type raw json and return the vectors generated for the text using the above "Embedder" Class.

