// 函数: sub_54a2f0
// 地址: 0x54a2f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 4)

if (i == *(arg1 + 8))
    return 

int32_t* esi_1 = arg2

do
    void* edi_1 = *i
    void* j = *(edi_1 + 0x28)
    
    while (j != *(edi_1 + 0x2c))
        *esi_1 = *(j + 0x40)
        esi_1[1] = *(j + 0x44)
        int32_t ecx_2 = *(j + 0x48)
        j += 0x4c
        esi_1[2] = ecx_2
        esi_1 = &esi_1[3]
    
    i = &i[1]
while (i != *(arg1 + 8))
