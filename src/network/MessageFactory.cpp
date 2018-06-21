#include "collabmessaging/MessageFactory.h"
#include "collabmessaging/IMessage.h"

namespace collab {


std::unique_ptr<IMessage> MessageFactory::newMessage(const MessageTypes type) const {
    // DevNote: if pass to C++14, may use std::make_unique instead
    // DevNote: Switch-case is actually flexible enough and fast for this use-case.

    switch(type) {

        // ---------------------------------------------------------------------
        // Miscellaneous Messages
        // ---------------------------------------------------------------------
        default:
            return nullptr;
    }
}


}  // End namespace

