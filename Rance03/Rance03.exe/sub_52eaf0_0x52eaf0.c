// 函数: sub_52eaf0
// 地址: 0x52eaf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* j

for (int32_t* i = *(arg1 + 0xc); i != *(arg1 + 0x10); i = &i[1])
    void* ecx = *i
    
    for (j = *(ecx + 0x1c); j != *(ecx + 0x20); j = &j[1])
        if (*(*j + 4) == arg2)
            j.b = 1
            return j

j.b = 0
return j
