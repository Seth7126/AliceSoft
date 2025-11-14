// 函数: sub_53d9a0
// 地址: 0x53d9a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == arg2)
    return 

int32_t* esi_1 = arg1 + 0xc

do
    int32_t eax_1 = *esi_1
    
    if (eax_1 != 0)
        j__free(eax_1)
        *esi_1 = 0
        esi_1[1] = 0
        esi_1[2] = 0
    
    int32_t eax_2 = esi_1[-3]
    
    if (eax_2 != 0)
        j__free(eax_2)
        esi_1[-3] = 0
        esi_1[-2] = 0
        esi_1[-1] = 0
    
    esi_1 = &esi_1[0xa]
while (&esi_1[-3] != arg2)
