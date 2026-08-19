class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        sort(reservedSeats.begin(), reservedSeats.end());
        int num = 0;
        int reservedRows = 0;
        int i = 0;
        while(i < reservedSeats.size()){
            int row = reservedSeats[i][0];
            vector<int> seats(10, 0);

            while(i < reservedSeats.size() && reservedSeats[i][0] == row){
                seats[reservedSeats[i][1] - 1] = 1;
                i++;
            }
            reservedRows++;
            int j = 1;
            while(j < 6){
                bool add = true;
                for(int k = j; k < j+4; k++){
                    if(seats[k] == 1){
                        add = false;
                        break;
                    }
                }
                if(add){
                    num++;
                    j+=4;
                } else {
                    j+=2;
                }
            }
        }
        int unReserved = n - reservedRows;
        num += unReserved * 2;
        return num;
    }
};