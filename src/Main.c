#include "/home/codeleaded/System/Static/Library/NeuralNetwork.h"

int main(int argc,char** argv){
    
    NeuralNetwork nn = NeuralNetwork_Make((NeuralLayerCount[]){ 3,2,3,NeuralLayerCount_End });
    NeuralNetwork_SetInput(&nn,(NeuralType[]){ 1.0f,1.0f,1.0f });
    NeuralNetwork_Calculate(&nn);
    NeuralNetwork_Print_G(&nn);
    NeuralNetwork_Free(&nn);

    return 0;
}