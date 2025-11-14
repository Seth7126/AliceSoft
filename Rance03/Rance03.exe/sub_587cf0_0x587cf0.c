// 函数: sub_587cf0
// 地址: 0x587cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 8)

if (i == *(arg1 + 0xc))
    i.b = arg2
    *(arg1 + 0x18) = i.b
    return i

int32_t ebx
ebx.b = arg2

do
    void* ecx = *i
    
    if (ecx != 0)
        *(ecx + 0x1f4) = ebx.b
    
    i = &i[1]
while (i != *(arg1 + 0xc))

*(arg1 + 0x18) = ebx.b
return i
