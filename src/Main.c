#include "/home/codeleaded/System/Static/Library/NeuralNetwork.h"

#define NN_PATH             "./data/Output.nnalx"
#define NN_LEARNRATE        0.1f

int main(int argc,char** argv){
    
    NeuralNetwork nn = NeuralNetwork_Make(
        (NeuralLayerBuilder[]){ 
            NeuralLayerBuilder_Make(2,"relu"),
            NeuralLayerBuilder_Make(3,"relu"),
            NeuralLayerBuilder_Make(2,"softmax"),
            NeuralLayerBuilder_End()
        }
    );
    NeuralNetwork_Calc(&nn,(NeuralType[]){ 1.0f,1.0f,1.0f });
    NeuralNetwork_Save(&nn,NN_PATH);
    NeuralNetwork_Free(&nn);

    return 0;
}