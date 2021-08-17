class MyBook:Book{
    int price;
   public:
   MyBook(string title, string author,int pri):Book(title,author){
       price=pri;
   }  
   
   void display(){
       cout<<"Title: "<<title<<endl;
       cout<<"Author: "<<author<<endl;
       cout<<"Price: "<<price<<endl;
   }
};

