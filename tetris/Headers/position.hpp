#pragma once

class Position{
    private:
        short positionRow;
        short positionColumn;




    public:
        Position(short row, short column);
        void setPositionRow(short row);
        void setPositionColumn(short column);
        short getPositionRow();
        short getPositionColumn();
        
};