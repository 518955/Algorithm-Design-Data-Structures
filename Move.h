#ifndef MOVE_H
#define MOVE_H

class Move {
public:
    virtual ~Move() = default;
    virtual bool beats(const Move* other) const = 0;
};

#endif // MOVE_H
