int ret(int x,int y)
{
    char test [x][y];
    srand(time(0));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int t=rand()%100;
            test [i][j]=t;
            aff(1,t);
        }
    }
    return test;
}