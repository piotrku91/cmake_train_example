#pragma once

enum Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

template<typename T>
T doOperation(Operation operation, T first, T second) {
    switch (operation) {
        case Operation::Add: {
            return first + second;
        }
        case Operation::Subtract: {
            return first - second;
        }
        case Operation::Multiply: {
            return first * second;
        }
        case Operation::Divide: {
            if (second > 0) {
                return first / second;
            } else {
                return 0;
            };
        }
        default: {
        };
        }
    return 0;
}