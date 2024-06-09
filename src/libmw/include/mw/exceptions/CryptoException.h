#pragma once

#include <mw/exceptions/FUECXException.h>
#include <mw/util/StringUtil.h>

#define ThrowCrypto(msg) throw CryptoException(msg, __FUNCTION__)
#define ThrowCrypto_F(msg, ...) throw CryptoException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class CryptoException : public FUECXException
{
public:
    CryptoException(const std::string& message, const std::string& function)
        : FUECXException("CryptoException", message, function)
    {

    }
};