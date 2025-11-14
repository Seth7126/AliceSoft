// 函数: sub_58c380
// 地址: 0x58c380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = arg2
*(arg1 + 0x50c) = ebx.b
int32_t* i

for (i = *(arg1 + 0x134); i != *(arg1 + 0x138); i = &i[1])
    void* ecx = *i
    
    if (ecx != 0)
        *(ecx + 0x60) = ebx.b

*(arg1 + 0x144) = ebx.b
return i
