//Berat Göktuð Özdemir 150101002

#include <iostream>
#include "Comment.h"
#include "CommonData.h"

using namespace std;

int main()
{
	Comment  yorum;
    yorum.CommentTime = time(NULL);
	cout << yorum.CommentTime << endl;
	cout << "Yazilimimiz tam surumuyle yakinda sizlerle..." << endl;
    return 0;
}
