#include <iostream>
#include<algorithm>
using namespace std;
// define infinity greater than limits specified in the problem, 10^7 as Inf
#define INF 10000000

struct Point
{
    double x;
    double y;
};
// checking if the point q lies on the segment ab when the points are collinear
bool isOnSegment(Point a, Point b, Point q)
{
    if (q.x <= max(a.x, b.x) && q.x >= min(a.x, b.x) && q.y <= max(a.y, b.y) && q.y >= min(a.y, b.y))
        return true;
    return false;
}
// Finding the orientation of three given points a,b and c 
// 0->collinear, 1-> clockwise, 2-> counterclockwise
int tellOrientation(Point a, Point b, Point c)
{
    double val;
    val = (b.y - a.y)*(c.x - b.x) - (c.y - b.y)*(b.x - a.x);
    if (val == 0) return 0; //collinear
    if (val>0) return 1; // clockwise
    if (val<0) return 2; // negative for counterclockwise
    return -1 ;
}
// checking whether two line segments intersect
bool doIntersect(Point line1a, Point line1b, Point line2a, Point line2b)
{
    int o1 = tellOrientation(line1a, line1b, line2a);
    int o2 = tellOrientation(line1a, line1b, line2b);
    int o3 = tellOrientation(line2a, line2b, line1a);
    int o4 = tellOrientation(line2a, line2b, line1b);
    if ((o1 != o2) && (o3 != o4)) return true;
    if ((o1 == 0) && isOnSegment(line1a, line1b, line2a)) return true;
    if ((o2 == 0) && isOnSegment(line1a, line1b, line2b)) return true;
    if ((o3 == 0) && isOnSegment(line2a, line2b, line1a)) return true;
    if ((o4 == 0) && isOnSegment(line2a, line2b, line1b)) return true;
    return false;
}
//returns true if point is inside polygon
bool isInside(Point polygonVert[], int s, Point p)
{
    Point ext = { INF, p.y };
    int cnt = 0;
    for (int i = 0; i < s - 1; i++) {
        if (doIntersect(polygonVert[i], polygonVert[i + 1], p, ext))
        {
            if (tellOrientation(polygonVert[i], polygonVert[i + 1], p) == 0)
                //detecting the points lie on segment and immediately signals true rather than counting
                return isOnSegment(polygonVert[i], polygonVert[i + 1], p);
            cnt++;
        }
    }
    return cnt & 1; // returns true if odd same as mod operation -> best practice
}
int main()
{
    int n; // number of polygon vertices 
    int q; // number of query points to check inside/outside
    cin >> n >> q;
    Point *polygon = new Point[n]; //Polygon
    Point *p = new Point[q]; // point to check;
    int k = 0;
    for (int i = 0; i<2 * n; i++)
    {
        if (i % 2 == 0)
        {
            cin >> polygon[k].x;
            k++;
        }
        else {
            cin >> polygon[k].y;
            k++;
        }
    }
    for (int i = 0; i<q; i++)
    {
        cin >> p[i].x >> p[i].y;
    }
    int s = sizeof(polygon) / sizeof(polygon[0]); // size of polygon
    for (int i = 0; i<q; i++)
    {
        isInside(polygon, s, p[i]) ? cout << "D \n" : cout << "F\n";
    }
    delete[] polygon;
    delete[] p;
    return 0;
}