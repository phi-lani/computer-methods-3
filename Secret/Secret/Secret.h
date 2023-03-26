#pragma once




template <typename T>
class Secret {
private:
	static int Password;
	T secret;

public:
	void setPassword(int oldPassword, int newPassword);
	void setSecret(int password, T secret);
	T getSecret(int password);
};

