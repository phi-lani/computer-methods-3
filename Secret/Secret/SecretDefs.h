#pragma once
#include <iostream>
#include "Secret.h"





template <typename T>
int Secret<T>::Password = 12345;

template <typename T>
T Secret<T>::getSecret(int password) {
	if (Secret<T>::Password == password)
	{
		return secret;
	}
	else
	{
		std::cout << "Wrong password\n";
	}
}

template <typename T>
void Secret<T>::setPassword(int oldPassword, int newPassword) {
	if (Secret<T>::Password == oldPassword)
	{
		Secret<T>::Password = newPassword;
	}
	else
	{
		std::cout << "Wrong password\n";
	}
}


template <typename T>
void Secret<T>::setSecret(int password, T secret) {
	if (Secret<T>::Password == password)
	{
		this->secret = secret;
	}
	else
	{
		std::cout << "Wrong password\n";
	}
}




