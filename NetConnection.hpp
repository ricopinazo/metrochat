#ifndef __NET_CONNECTION_HPP
#define __NET_CONNECTION_HPP

#include <stdint.h>
#include <string>

class NetConnection
{
	public:
		typedef uint32_t ip_t;
		typedef uint16_t port_t;

	private:
		ip_t ip;
		port_t port;
		int socket_descriptor;

	public:		
		NetConnection();
		NetConnection(port_t new_port);
		NetConnection(ip_t new_ip, port_t new_port);
		NetConnection(std::string domain_name, port_t new_port);
		~NetConnection();
		void set_ip(ip_t new_ip);
		ip_t get_ip();
		void set_port(port_t new_port);
		port_t get_port();
		void set_domain_name(std::string domain_name);
		NetConnection *accept_new_connection();
		void send_frame(void *msg, size_t size);
		void receive_frame(void *msg, size_t &size);
		void close();
};

#endif