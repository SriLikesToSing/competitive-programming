//Z7016805
//SAD

a)


public static boolean runSimulation(int sampleSize){
    int positiveOne= 0;
    int positive = 0;

    for(int x=0; x<sampleSize/2; x++){
        int num = getInt();
        if(isTarget(num)){
            if(num > 0){
                positive++;
            }
        }

    for(int x=sampleSize/2; x<sampleSize; x++){
        int num = getInt();
        if(isTarget(num)){
            if(num > 0){
                positiveOne++;
            }
        }
    }
        if(positive > positiveOne){
            return true;
        }else{
            return false;
        }
    }
}


b)

/*
    To make a value permanent to be always used and to make it unchangable you would use final. In this case you would make it
    private final int sampleSize
    In this case, you would use private final sampleSize = *some amount desired.You would place this variable above
    the constructor and in the method you would not have to make the user input a number called sampleSize. The variable
    value would already be predetermined so the method would just be runSimulation() without any input.


*/

