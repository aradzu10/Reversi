/*
ID: 318439981
Name: Matan Dombelski
ID: 315240564
Name: Arad Zulti
*/
#ifndef REVERSI_COMMANDGAMESLIST_H
#define REVERSI_COMMANDGAMESLIST_H

#include "MatchManager.h"
#include "Command.h"


class CommandGamesList : public Command {

public:
    CommandGamesList(MatchManager &matchManager);

    virtual ~CommandGamesList();

    virtual void execute(int clientSocket);


private:
    MatchManager& matchManager;
};


#endif //REVERSI_COMMANDGAMESLIST_H
