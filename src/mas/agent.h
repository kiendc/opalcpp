#ifndef __AGENT__H__
#define __AGENT__H__

/*
  Include the header of gloox library, the path to include directory has to be 
  inserted into the list of path specified by option I of compilation command.
 */
#include <loghandler.h>
#include <messagehandler.h>
#include <connectionlistener.h>

namespace mas 
{
  class Agent : public gloox::ConnectionListener, 
    public gloox::MessageHandler, 
    gloox::LogHandler
      {
      public:
	/**
	 * This function motifies about when agent join a community. An agent 
	 * has to pass some information to the community manager to such as 
	 * it's identity and retrieve some information about the community
	 * This function is obligated implementation of pure virtual method in 
	 * @ref ConnectionListener
	 */
	virtual void onConnect();
	/**
	 * This function motifies about the leaving comminity and its reason.
	 */
	virtual void onDisconnect();
	virtual void start();
	virtual void handleMessage(const Message& msg);
	virtual void handleLog(LogLevel level, LogArea
      private:
	JID m_jid;
      };
  
}
#endif // __AGENT__H__
