#pragma once

class IRepository {
    virtual void Open(std::string filename) = 0; // áèíàðíàÿ äåñåðèàëèçàöèÿ â ôàéë
    virtual void Save() = 0; // áèíàðíàÿ ñåðèàëèçàöèÿ â ôàéë
};
