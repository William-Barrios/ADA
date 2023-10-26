#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

struct coord {
    int x;
    int y;
    coord(int _x, int _y) : x(_x), y(_y) {}
};

float distance(const coord& p1, const coord& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

bool sortByY(const coord& a, const coord& b) {
    return a.y < b.y;
}
bool sortByX(const coord& a, const coord&  b) {
    return a.x < b.x;
}

vector<coord> minPair(vector<coord> points) {
    if (points.size() <= 2) {
        return points;
    }
    
    sort(points.begin(), points.end(), sortByX);
    
    int mid = points.size() / 2;
    
    vector<coord> LPoints(points.begin(), points.begin() + mid);
    vector<coord> RPoints(points.begin() + mid, points.end());

    vector<coord> cercanosIzq = minPair(LPoints);
    vector<coord> cercanosdrc = minPair(RPoints);

    float minDistance = min(distance(cercanosIzq[0], cercanosIzq[1]), distance(cercanosdrc[0], cercanosdrc[1]));

    vector<coord> Combinacion;
    Combinacion.insert(Combinacion.end(), LPoints.begin(), LPoints.end());
    Combinacion.insert(Combinacion.end(), RPoints.begin(), RPoints.end());

    
    sort(Combinacion.begin(), Combinacion.end(), sortByY);

    
    for (int i = 0; i < Combinacion.size(); i++) {
        for (int j = i + 1; j < Combinacion.size() && (Combinacion[j].y - Combinacion[i].y) < minDistance; j++) {
            float d = distance(Combinacion[i], Combinacion[j]);
            if (d < minDistance) {
                minDistance = d;
                cercanosIzq[0] = Combinacion[i];
                cercanosIzq[1] = Combinacion[j];
            }
        }
    }

    return cercanosIzq;
}

int main(int argc, const char * argv[]) {
    vector<coord> points;

    for (int i = 0; i < 6; i++)
        points.push_back(coord(rand() % 15, rand() % 20));

    vector<coord> cercanos = minPair(points);

    cout << "Coordenadas de los puntos cercanos:" << endl;
    cout << "Punto 1: (" << cercanos[0].x << ", " << cercanos[0].y << ")" << endl;
    cout << "Punto 2: (" << cercanos[1].x << ", " << cercanos[1].y << ")" << endl;
    cout << "Distancia: "<< distance(cercanos[0], cercanos[1])<<endl;

    return 0;
}
