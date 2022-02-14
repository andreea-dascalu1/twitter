#include "UserProfile.h"
#include "../Network/XMLParsing.h"

UserProfile::UserProfile(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
    XMLParsing p;
    p.load("../date.xml");
   
    ui.name->setText(QString::fromStdString(p.getUsername()));

    auto post = new Post(this);
    auto post1 = new Post(this);
    auto post2 = new Post(this);

    ui.verticalLayout_3->addWidget(post);

    post->SetTweetText("Test text :)");
    post->SetReplies("1700");
    post->SetRetweets("666");
    post->SetLikes("777");
    post->SetDislikes("999");

    ui.verticalLayout_3->addWidget(post1);


    post1->SetTweetText("Test :)");
    post1->SetReplies("17");
    post1->SetRetweets("6");
    post1->SetLikes("7");
    post1->SetDislikes("9");

    ui.verticalLayout_3->addWidget(post2);


    post2->SetDate("Jan 1");
    post2->SetTweetText("Test :)");
    post2->SetReplies("17");
    post2->SetRetweets("6");
    post2->SetLikes("7");
    post2->SetDislikes("9");

    auto user1 = new UserInList(this);
    user1->SetButtonToFollowing();
    auto user2 = new UserInList(this);
    auto user3 = new UserInList(this);
    user2->SetButtonToFollowing(); user3->SetButtonToFollowing();

    ui.verticalLayout_friends->addWidget(user1);
    ui.verticalLayout_friends->addWidget(user2);
    ui.verticalLayout_friends->addWidget(user3);

}

UserProfile::~UserProfile()
{
}

void UserProfile::on_label_no_of_friends()
{
	//select no_of_friends from user where username=' '
	int no_of_friends = 0;
	std::string s = std::to_string(no_of_friends);
	QString text = QString::fromStdString(s);
	ui.label_no_of_friends->setText(text);

}