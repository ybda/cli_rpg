#pragma once

#include <utility>

#include "player.h"

class Mage : public Player {
public:
    Mage(std::string name, Race race) : Player(std::move(name), race, 150, 150) {}

    [[nodiscard]] std::string attack() const override {
        return "Attack of Mage";
    }
};