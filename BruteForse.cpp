//
// Created by ������ on 2020-03-13.
//
#include <iostream>
#include <stack>
#include <queue>
#define MAX_SIZE 25
using namespace std;

//�� ���� �Ʒ� ��
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

int n; // ��� ���� ��
int group_id;//������ ��ȣ�� ù��° �������� 1�� ����
int groups[MAX_SIZE * MAX_SIZE]; // �� ������ ���� ��

int map[MAX_SIZE][MAX_SIZE]; //����
bool visited[MAX_SIZE][MAX_SIZE]; // �湮�ߴ����� ǥ���ϴ� ����;

//DFS(stack)
void dfs_stack(int x, int y)
{
    stack<pair<int,int>> s; //�̿��� ���� (x,y) -> ��,��
    s.push(make_pair(x,y)); // pair�� ���� stack�� push

    //ó�� x,y�� �湮�߱� ������
    visited[x][y] = true;
    groups[group_id]++;

    while(!s.empty())
    {
        //stack �� top ���� ������
        x = s.top().first;
        y = s.top().second;
        s.pop();

        //�ش� ��ġ�� �ֺ��� Ȯ��
        for(int i = 0; i < 4; i++)
        {
            int nx = x+dx[i];
            int ny = y + dy[i];

            //������ ����� �ʰ�
            if(0 <= nx && nx < n && 0 <= ny && ny < n)
            {
                // ���̸鼭 �湮���� �ʾҴٸ� -> �湮
                if(map[nx][ny] ==1 && visited[nx][ny] == false)
                {
                    visited[nx][ny] = true;
                    //�ش� ������ ���� ���� ����
                    groups[group_id]++;

                    s.push(make_pair(x,y)); // ���� ��ġ�� �־��ش�
                    s.push(make_pair(nx,ny)); // ���� nx,ny�� push
                }

            }
        }
    }
}
//BFS
void bfs(int x, int y)
{
    queue<pair<int,int>> q; // �̿��� ť, (x,y) ->(��,��)
    q.push(make_pair(x,y)); // pair�� ���� queue�� �ֽ��ϴ�.

    // ó�� x,y�� �湮�߱� ������
    visited[x][y] = true;
    groups[group_id]++;
    while(!q.empty())
    {
        //ť�� ���� ���Ҹ� ������
        x = q.front().first;
        y = q.front().second;
        q.pop();

        //�ش� ��ġ�� �ֺ��� Ȯ��
        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            //������ ����� �ʰ�
            if(0 <= nx && nx <n && 0<=ny && ny <n)
            {
                //���̸鼭 �湮���� �ʾҴٸ� ->�湮
                if(map[nx][ny] == 1 && visited[nx][ny] == false)
                {
                    visited[nx][ny] = true;
                    //�ش� ������ ���� ���� ������Ŵ
                    groups[group_id]++;

                    //ť�� ���� nx,ny�� �߰�;
                    q.push(make_pair(nx,ny));

                }
            }
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n ; i ++)
    {
        for(int j = 0; j < n; j++)
            cin >> map[i][j];
    }

    //��ü ���� Ž��
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j ++)
        {
            //���̸鼭 �湮���� �ʾҴٸ� -> �湮
            if(map[i][j] == 1 && visited[i][j] == false)
            {
                //�ش� ������ ���� id�� �ο��ϰ�
                group_id++;

                //Ž��
                dfs_stack(i,j);
                //bfs(i,j);
            }

        }
    }
    //�������� ������ ���� �������� ����
    //ID �� 1���� ����

    sort(groups+1, groups+ group_id+1);

    cout << group_id << endl;
    for(int i = 1; i <= group_id; i++)
    {
        cout << groups[i] << endl;
    }
}