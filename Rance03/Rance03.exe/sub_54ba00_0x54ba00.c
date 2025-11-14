// 函数: sub_54ba00
// 地址: 0x54ba00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == arg2)
    return 

int32_t* esi_1 = arg1 + 0x20

do
    int32_t* j = *esi_1
    
    if (j != 0)
        for (int32_t ebx_1 = esi_1[1]; j != ebx_1; j = &j[8])
            (**j)(0)
        
        j__free(*esi_1)
        *esi_1 = 0
        esi_1[1] = 0
        esi_1[2] = 0
    
    if (esi_1[-3] u>= 0x10)
        j__free(esi_1[-8])
    
    esi_1[-3] = 0xf
    esi_1[-4] = 0
    esi_1[-8].b = 0
    esi_1 = &esi_1[0xb]
while (&esi_1[-8] != arg2)
