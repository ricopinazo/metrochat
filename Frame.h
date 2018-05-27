#ifndef __FRAME_H
#define __FRAME_H

#include <stdint.h>
#include "UserAccount.h"

class Frame
{
    public:
        typedef uint8_t frame_code_t;
        typedef uint16_t frame_size_t;

        Frame();
        ~Frame();
        void set_code(const frame_code_t new_code);
        frame_code_t get_code();
        void set_user_account(const UserAccount *new_user_account);
        UserAccount *get_user_account();
        void set_body(const void *new_body, const frame_size_t new_size);
        void *get_body(frame_size_t &size);

    private:
        struct Header
        {
            frame_code_t code;
            frame_size_t size;
            UserAccount::id_t user_id;
            char passwd[UserAccount::PASSWD_MAX_SIZE];
        };

        struct Header header; 
        void *body;
};

#endif