#include<iostream>
using namespace std;
class Solution
{
    void flood_fill(vector<vector<int>>& image, int sr, int sc, int newColor, int row, int col, int oldColor) {
if (sr < 0 || sc < 0 || sr >= row || sc >= col)
return;
if (image[sr][sc] != oldColor)
return;
if (image[sr][sc] == newColor)
return;

image[sr][sc] = newColor;

flood_fill(image, 1 + sr, sc, newColor, row, col, oldColor);
flood_fill(image, sr, 1 + sc, newColor, row, col, oldColor);
flood_fill(image, -1 + sr, sc, newColor, row, col, oldColor);
flood_fill(image, sr, -1 + sc, newColor, row, col, oldColor);
return;

}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
int row = image.size();
int col = image[0].size();
vector<vector<int>>imageo = image;
int oldColor = image[sr][sc];
flood_fill(imageo, sr, sc, newColor, row, col, oldColor);
return imageo;
}
};
/*
void flood_fill(vector<vector<int>>& image, int sr, int sc, int newColor, int row, int col, int oldColor) {
if (sr < 0 || sc < 0 || sr >= row || sc >= col)
return;
if (image[sr][sc] != oldColor)
return;
if (image[sr][sc] == newColor)
return;

image[sr][sc] = newColor;

flood_fill(image, 1 + sr, sc, newColor, row, col, oldColor);
flood_fill(image, sr, 1 + sc, newColor, row, col, oldColor);
flood_fill(image, -1 + sr, sc, newColor, row, col, oldColor);
flood_fill(image, sr, -1 + sc, newColor, row, col, oldColor);
return;

}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
int row = image.size();
int col = image[0].size();
vector<vector<int>>imageo = image;
int oldColor = image[sr][sc];
flood_fill(imageo, sr, sc, newColor, row, col, oldColor);
return imageo;
}
*/
