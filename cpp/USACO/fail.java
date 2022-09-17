//Z7016805
//SAD

a)

public double getCompoundAvg(String comp){
    if(!comp.equals("alkynes") && !comp.equals("ketones") && !comp.equals("ethers")){
    return -1;
}
    double count = 0;
    double sum  = 0;
   for(int x=0; x<trialList.size(); x++){
        if(trialList.get(x).getCompound().equals(comp)){
            count++;
            sum+= trialList.get(x).getTemp();
        }
   }

        return sum/count;
}

b)


public String getCompoundWithHighestAvg(){
   String compound= "" ;

    double one = this.getCompoundAvg("alkynes") ;
    double two = this.getCompoundAvg("ketones");
    double three = this.getCompoundAvg("ethers");

    int temp = Math.max(one, two);
    int temp = Math.max(temp, three);
    if(temp == one){
        compound = "alkynes";
    }else if(temp == two){
        compound = "ketones";
    }else if(temp == three){
        compound = "ethers";
    }

   return compound;
}


c)

public double getCompoundUsed(String comp){



}

/*

    You would create a method in the Trial Class called public double getAmtCompound() which returns the amount of compound used for that
    trial.

    Then in the getCompoundUsed method you would first create a double variable called total and initialize it to zero. Then you would
    use a for loop to loop through each element in the trialList arralist. Once you get the trial object
    from TrialList.get(x) if that compouund equals the String variable comp you call the x.getAmtCompound() and add it to
    total. After you loop through and find all the compound amounts which are equal to the name of the compound
    you return total.


*/


















