class test5{
    int add(int a1, int a2){
        return (a1 + a2);
    }
    void main() {
        int x, y, z;
        for(int i=0;i<2;i++){
            if(i==0){
//--------------ELSE WITHOUT IF
                else
                    i = 1;
            }
            for(x = 0; x<5;x++){
                y++;
//--------------FUNCTION CALL
                x = add(x,y);
                x = z(x,y);
            }
        }
        print("x:"+x+"y:"+y);
        z = ( x + y ) * 5 / 2 -- -y;
    }
}

/* this is a comment // line// with some /* /*and
// delimiters */
