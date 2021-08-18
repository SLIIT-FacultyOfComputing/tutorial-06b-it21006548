class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setlength(int l);
      void setWidth(int w);
      void setHeight(int h);

      
      int getlength();
      int getwidth();
      int getheight(); 
 
       int calcVolume();
};
