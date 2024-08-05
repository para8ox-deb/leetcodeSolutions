class Solution {
public:

    int checker(int b1, int b2){
        int counter=0, switcher=0, l=1;

        while(b1>0 || b2>0){
            if(switcher==0) {// means ki ek ball is being used
                if(b1>=l){
                    b1-=l;
                }else{
                    break;
                }
            } else{
                if(b2>=l){
                    b2 -=l;
                } else{
                    break;
                }
            }

            counter++;
            l++;
            switcher = switcher ^ 1; // alternate between 0 and 1
        }

        return counter;
    }

    int maxHeightOfTriangle(int red, int blue) {
        
        int n1 = checker(red, blue);
        int n2 = checker(blue, red);

        return max(n1,n2);
    }
};