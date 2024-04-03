#include "player.h"

Player::Player(std::string name, int health, int damage) : name(name), health(health), damage(damage) {}

void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage) {
    health -= damage;
} 

int Player::getHealth() const {
    return health;
}

void Player::setHealth(int health) {
    this->health = health;
}

int Player::getDamage() const {
    return damage;
}

void Player::setDamage(int damage) {
    this->damage = damage;
}

std::string Player::getName() const {
    return name;
}

void Player::setName(std::string name) {
    this->name = name;
}
