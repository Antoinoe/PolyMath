//
// Created by EM341 on 25/11/2025.
//

#include "Point.h"


Point::Point() {
    m_x = 0;
    m_y = 0;
}

int Point::getX() {
    return m_x;
}
int Point::getY() {
    return m_y;
}
void Point::setX(int x) {
    m_x = x;
}
void Point::setY(int y) {
    m_y = y;
}