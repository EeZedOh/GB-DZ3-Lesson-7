#pragma once

class IRepository {
    virtual void Open(std::string filename) = 0; 
    virtual void Save() = 0; 
};
