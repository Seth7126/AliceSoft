// 函数: sub_5bf850
// 地址: 0x5bf850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == arg2)
    return 

int32_t* edi_1 = arg1 + 0x20

do
    int32_t* j = *edi_1
    
    if (j != 0)
        for (int32_t ebx_1 = edi_1[1]; j != ebx_1; j = &j[0xa])
            if (j[5] u>= 0x10)
                j__free(*j)
            
            j[5] = 0xf
            j[4] = 0
            *j = 0
        
        j__free(*edi_1)
        *edi_1 = 0
        edi_1[1] = 0
        edi_1[2] = 0
    
    if (edi_1[-3] u>= 0x10)
        j__free(edi_1[-8])
    
    edi_1[-3] = 0xf
    edi_1[-4] = 0
    edi_1[-8].b = 0
    edi_1 = &edi_1[0xb]
while (&edi_1[-8] != arg2)
