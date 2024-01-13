#ifndef WOOD_H
#define WOOD_H

enum class Wood {
    INDIAN_ROSEWOOD,
    BRAZILIAN_ROSEWOOD,
    MAHOGANY,
    MAPLE,
    COCOBOLO,
    CEDAR,
    ADIRONDACK,
    ALDER,
    SITKA
};

std::ostream& operator << (std::ostream&, Wood);

#endif