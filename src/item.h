#pragma once

#include <unordered_map>

enum class Item : short int {
    EMPTY,
    STONE,
    PATH,
    APPLE,
    FIRE,
    CHARCOAL,
    LAVA,
    //these items are not used in tiles
    ROBOT,
    BOX,
    //TODO: find a better way to make multitile structures
    BASE,
};

//TODO: fix this
#ifdef ITEM_NAME_IMPLEMENTATION
const std::unordered_map<Item, const char*>& get_item_name_map() {
    static const std::unordered_map<Item, const char*> item_name_map = {
        {Item::EMPTY, "EMPTY"},
        {Item::STONE, "STONE"},
        {Item::PATH, "PATH"},
        {Item::APPLE, "APPLE"},
        {Item::FIRE, "FIRE"},
        {Item::CHARCOAL, "CHARCOAL"},
        {Item::LAVA, "LAVA"},
        {Item::ROBOT, "ROBOT"},
        {Item::BOX, "BOX"},
        {Item::BASE, "BASE"},
    };
    return item_name_map;
}
#else
const std::unordered_map<Item, const char*>& get_item_name_map();
#endif

const char* get_item_name(Item item);

