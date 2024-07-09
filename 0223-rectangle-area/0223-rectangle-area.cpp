class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int areaA =  (ay2-ay1)*(ax2-ax1);
        int areaB =  (by2-by1)*(bx2-bx1);

        int xOlp = min(ax2,bx2)-max(ax1,bx1);
        int yOlp = min(ay2,by2)-max(ay1,by1);

        int areaOlp = 0;

        if(xOlp>0 && yOlp>0)
            areaOlp = xOlp * yOlp;
        
        int Tarea = areaA + areaB - areaOlp;
        return Tarea;
     
    }
};