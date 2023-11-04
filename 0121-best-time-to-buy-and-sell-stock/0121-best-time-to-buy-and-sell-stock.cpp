class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lp=INT_MAX; //lowest price
        int opr=0; //overall profit
        int prt=0; //profit if stock sold today
        for(int i=0 ; i<prices.size() ; i++){
            if(prices[i]<lp){
                lp=prices[i];
            }
            prt=prices[i]-lp;
            if(opr<prt){
                opr=prt;
            }
           
            
        }
        return opr;
        
    }
};