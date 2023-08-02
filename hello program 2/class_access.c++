class demo
{
    private:
    int a,b;
    public:
    void input();
    {
        cout<<"Enter values";
        cin>>a>>b;3

    }
    void show();
    {
        cout<<a<<" "<<b;
    
    };
    void main()
    {
        demo ob;
        ob.input();
        ob.show();

    }
}