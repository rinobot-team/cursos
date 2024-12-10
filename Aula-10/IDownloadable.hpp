#pragma once

// IDownloadable eh o equivalente a uma interface em C++
// prefixamos o nome com I como uma convencao
class IDownloadable {
public:
    virtual void download() const = 0;
    virtual ~IDownloadable() = default;
};
