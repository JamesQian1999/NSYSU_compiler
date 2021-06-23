/*Test file of Syntax errer: Out of symbol.  But it can go through*/
class Point {
    int z;
    int x y ;
    /*Need  ',' before y*/
    float w;
}
class Test {
    int d;
    Point p = new Point()
    /*Need ';' at EOL*/
    int w,q;
}
