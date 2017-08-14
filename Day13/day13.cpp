class MyBook
{
    string title,author;
    int price;
    public:
        MyBook(string title, string author, int price)
        {
            this->title = title;
            this->author = author;
            this->price = price;
        }
        void display()
        {
            cout<<"Title: "<<title<<"\nAuthor: "<<author<<"\nPrice: "<<price;
        }
};
