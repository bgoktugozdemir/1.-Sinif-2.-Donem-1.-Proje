#include "Comment.h"


Comment::Comment(int CommentId, time_t CommentTime, string comment)
{
    this->CommentId = CommentId;
    this->CommentTime = CommentTime;
    this->comment = comment;
}

Comment::Comment()
{
    this->CommentId = 0;
    this->CommentTime = NULL;
    this->comment = "";
}


Comment::~Comment()
{
}
