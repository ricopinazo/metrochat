#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include <string>
#include <stdint.h>

class UserAccount
{
	public:
		typedef uint32_t id_t;
		static const uint8_t PASSWD_MAX_SIZE = 12;
		static const uint8_t NICK_MAX_SIZE = 12;
		static const uint8_t NAME_MAX_SIZE = 12;
		static const uint8_t EMAIL_MAX_SIZE = 12;
		static const uint8_t PHONE_NUMBER_MAX_SIZE = 12;

	private:
		id_t id;
		char *passwd;
		char *nick;
		char *name;
		char *email;
		char *phone_number;
		
	public:
		UserAccount();
		~UserAccount();
		void set_id(id_t new_id);
		id_t get_id();
		void set_passwd(std::string new_passwd);
		std::string get_passwd();
		void set_nick(std::string new_nick);
		std::string get_nick();
		void set_name(std::string new_name);
		std::string get_name();
		void set_email(std::string new_email);
		std::string get_email();
		void set_phone_number(std::string new_phone_number);
		std::string get_phone_number();
};

#endif