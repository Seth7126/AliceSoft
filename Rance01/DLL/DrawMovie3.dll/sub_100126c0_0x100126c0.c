// 函数: sub_100126c0
// 地址: 0x100126c0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* i_1 = *arg1
void* const i = i_1

while (i != 0)
    if (*(i + 8) == arg2)
        return i
    
    if (i != 0)
        i = *(i + 4)
    else
        i = i_1

return nullptr
