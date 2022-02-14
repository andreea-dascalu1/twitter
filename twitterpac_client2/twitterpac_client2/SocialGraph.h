#pragma once
#include<iostream>
#include"User.h"
#include<vector>
#include<unordered_map>
class SocialGraph
{
public:
	SocialGraph();
	SocialGraph(std::vector<User> users, std::unordered_map<std::string, std::vector<User>>friends);
	std::vector<User> GetUsers()const;
	void AddUser(const User& u);
	void AddFriend(const User& u1, const User& u2);
	std::vector<int> minDistance(const User& u);

private:
	std::vector<User> m_users;
	std::unordered_map<std::string, std::vector<User>>m_friends; 

};


