// 函数: sub_48a920
// 地址: 0x48a920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x1c)

if (i == *(arg1 + 0x20))
    *arg2 += 1
    return arg2

int32_t* j

do
    void* esi_1 = *i
    int32_t edi_1 = *arg2
    
    for (j = *(esi_1 + 0x14); j != *(esi_1 + 0x18); j = &j[1])
        void* ecx_1 = *(*j + 4)
        
        if (ecx_1 != 0)
            *(ecx_1 + 0x14) = edi_1
    
    i = &i[1]
while (i != *(arg1 + 0x20))

*arg2 += 1
return j
