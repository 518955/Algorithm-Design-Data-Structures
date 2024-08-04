#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual std::string getName() const = 0;
    virtual bool beats(const Move* other) const = 0;
    virtual ~Move() {}
};

class Rock : public Move {
public:
    std::string getName() const override { return "Rock"; }
    bool beats(const Move* other) const override {
        return other->getName() == "Scissors" || other->getName() == "Monkey";
    }
};

class Paper : public Move {
public:
    std::string getName() const override { return "Paper"; }
    bool beats(const Move* other) const override {
        return other->getName() == "Rock" || other->getName() == "Robot";
    }
};

class Scissors : public Move {
public:
    std::string getName() const override { return "Scissors"; }
    bool beats(const Move* other) const override {
        return other->getName() == "Paper" || other->getName() == "Zombie";
    }
};

class Robot : public Move {
public:
    std::string getName() const override { return "Robot"; }
    bool beats(const Move* other) const override {
        return other->getName() == "Scissors" || other->getName() == "Monkey";
    }
};

class Monkey : public Move {
public:
    std::string getName() const override { return "Monkey"; }
    bool beats(const Move* other) const override {
        return other->getName() == "Pirate" || other->getName() == "Ninja";
    }
};

class Pirate : public Move {
public:
    std::string getName() const override { return "Pirate"; }
    bool beats(const Move* other) const override {
        return other->getName() == "Robot" || other->getName() == "Zombie";
    }
};

class Ninja : public Move {
public:
    std::string getName() const override { return "Ninja"; }
    bool beats(const Move* other) const override {
        return other->getName() == "Pirate" || other->getName() == "Zombie";
    }
};

class Zombie : public Move {
public:
    std::string getName() const override { return "Zombie"; }
    bool beats(const Move* other) const override {
        return other->getName() == "Monkey" || other->getName() == "Ninja";
    }
};

#endif // MOVE_H
