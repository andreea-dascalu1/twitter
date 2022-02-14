#include "SocialGraph.h"
#include<queue>
SocialGraph::SocialGraph()
{
}

SocialGraph::SocialGraph(std::vector<User> users, std::unordered_map<std::string, std::vector<User>> friends) :
    m_users(users), m_friends(friends)
{
}

std::vector<User> SocialGraph::GetUsers() const
{
    return m_users;
}

void SocialGraph::AddUser(const User& u)
{
    m_users.push_back(u);

    std::vector<User>user_friends;
    m_friends.insert(make_pair(u.GetUsername(), user_friends));
}

void SocialGraph::AddFriend(const User& u1, const User& u2)
{
    m_friends.at(u1.GetUsername()).push_back(u2);
    m_friends.at(u2.GetUsername()).push_back(u1);

}



std::vector<int> SocialGraph::minDistance(const User& u)
{

    std::vector<bool> visited(m_users.size(), 0);

    std::vector<int> distance(m_users.size(), 0);

    // queue to do BFS.
    std::queue <User> Q;
    int pos = std::distance(m_users.begin(), std::find(m_users.begin(), m_users.end(), u));
    distance[pos] = 0;

    Q.push(u);
    visited[pos] = true;
    while (!Q.empty())
    {
        User x = Q.front();
        int posX = std::distance(m_users.begin(), std::find(m_users.begin(), m_users.end(), x));
        Q.pop();

        for (int i = 0; i < m_friends.at(x.GetUsername()).size(); i++)
        {
            int posFriend = std::distance(m_users.begin(), std::find(m_users.begin(), m_users.end(), m_friends.at(x.GetUsername())[i]));
            if (visited[posFriend])
                continue;

            distance[posFriend] = distance[posX] + 1;
            Q.push(m_friends.at(x.GetUsername())[i]);
            visited[posFriend] = 1;
        }
    }
    return distance;
}
