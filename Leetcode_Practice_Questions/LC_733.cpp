vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
    if(image[sr][sc] == newcolor){
        return image;
    }
    flood_fill(image,sr,sc,newcolor,image[sr][sc]);
    return image;
}
void flood_fill(vector<vector<int>>& image, int r, int c, int newcolor,int oldcolor){
    if(r<0 || c<0 || r>= image.size() || c>= image[0].size() || oldcolor != image[r][c]){
        return;
    }
    image[r][c] = newcolor;
    flood_fill(image,r+1,c,newcolor,oldcolor);
    flood_fill(image,r-1,c,newcolor,oldcolor);
    flood_fill(image,r,c+1,newcolor,oldcolor);
    flood_fill(image,r,c-1,newcolor,oldcolor);
}