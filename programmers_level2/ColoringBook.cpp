//
// Created by ������ on 2020-03-13.
//

//programmers level2 īī�������� �÷�����
// 2017 īī���ڵ� ����

//best solution ����ƴ�
#include <vector>
#include <queue>
#include <utility>
using namespace std;

// ���� ������ ������ ��� �Լ� ���� �ʱ�ȭ �ڵ带 �� �ۼ����ּ���.
vector<int> solution(int m, int n, vector<vector<int>> picture)
{
    const int INF = 1e9;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            picture[i][j] = -picture[i][j];
    int cnt = 0;
    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};

    for(int i = 0; i < m;i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if(picture[i][j]<0) {
                cnt++;
                int num = picture[i][j];
                queue<pair<int, int>> q;
                q.push(make_pair(i, j));
                while (!q.empty()) {
                    int cx = q.front().first;
                    int cy = q.front().second;
                    q.pop();
                    for (int k = 0; k < 4; k++) {
                        int nx = cx + dx[k];
                        int ny = cy + dy[k];
                        if (nx >= 0 && nx < m && ny >= 0 && ny < n && picture[nx][ny] == num) {
                            picture[nx][ny] = cnt;
                            q.push(make_pair(nx, ny));
                        }
                    }
                }
            }
        }
    }
    int cnt_chk[10001] = {0};
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j ++)
            cnt_chk[picture[i][j]]++;
    }
    int ans = 0;
    for(int i = 1; i <1001; i++)
        ans = max(cnt_chk[i], ans); // max �ΰ� ��
    return vector<int> { cnt, ans};


}



//3:54~9:36
/* mysolution������ �´µ� �׽�Ʈ���̽����� Ʋ��
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

void bfs(int x, int y,int cur,vector<vector<int>> picture, int m, int n, int& group_id, int groups[], int visited[100][100])
{
    queue<pair<int, int>> q;
    q.push(make_pair(x,y));

    visited[x][y] = true;
    groups[group_id]++;

    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int cx = x+dx[i];
            int cy = y+dy[i];
            if(0<=cx && cx <m && 0<=cy&& cy<n)
            {
                if(picture[cx][cy] == cur && visited[cx][cy] == 0)
                {
                    visited[cx][cy] = 1;
                    groups[group_id]++;
                    q.push(make_pair(cx,cy));
                }

            }

        }
    }


}

using namespace std;

// ���� ������ ������ ��� �Լ� ���� �ʱ�ȭ �ڵ带 �� �ۼ����ּ���.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int visited[100][100];

    int dx[] = {0,1,0,-1};
    int dy[] = {1,0,-1,0};
    int group_id = 0;
    int groups[100] = {0,};
    int number_of_area = 0;
    int max_size_of_one_area = 0;

    vector<int> temp;
    for(int i = 0; i <picture.size(); i++) {
        temp.push_back(*max_element(picture[i].begin(), picture[i].end()));
    }
    int max = *max_element(temp.begin(), temp.end());
    cout << "max : "<< max << endl;



    for(int cur = 1;cur <= max; cur++ ) {
        visited[100][100] = {0};
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                if(picture[i][j] == cur && visited[i][j] == 0)
                {
                    //�ش� ������ ���� id�� �ο��ϰ�
                    group_id++;

                    //Ž��
                    bfs(i,j,cur,picture,m,n, group_id, groups,visited);

                }

            }
        }
    }
    for(auto elem : groups)
    {
        if(elem>0)
            number_of_area++;
    }
    max_size_of_one_area = *max_element(groups+1, groups + group_id+1);
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}

int main()
{
    int m = 6;
    int n = 4;
    vector<vector<int>> picture = {{1,1,1,0},{1,2,2,0},{1,0,0,1},{0,0,0,1},{0,0,0,3},{0,0,0,3}};
    vector<int> ans = solution(m,n,picture);
    for(auto elem : ans)
        cout << '!'<<elem << endl;
    return 0;

}
 */
/*
1 1 1 0
1 2 2 0
1 0 0 1
0 0 0 1
0 0 0 3
0 0 0 3
 */