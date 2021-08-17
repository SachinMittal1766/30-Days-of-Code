// Add your code here
    Difference(vector<int> arr){
        elements=arr;
    }
   void computeDifference(){
        sort(elements.begin(), elements.end());
        maximumDifference = abs(elements[elements.size()-1] - elements[0]);
    }


