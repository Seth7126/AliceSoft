// 函数: sub_484d80
// 地址: 0x484d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == arg2)
    return 

int32_t* edi_1 = arg1 + 4

do
    edi_1[-1] = &partsengine::CConstructionProcessList::`vftable'
    int32_t ebx_1 = edi_1[1]
    
    for (int32_t* j = *edi_1; j != ebx_1; j = &j[0x30])
        (**j)(0)
    
    int32_t* j_2 = *edi_1
    edi_1[1] = j_2
    
    if (j_2 != 0)
        for (int32_t* j_1 = j_2; j_1 != j_2; j_1 = &j_1[0x30])
            (**j_1)(0)
        
        j__free(*edi_1)
        *edi_1 = 0
        edi_1[1] = 0
        edi_1[2] = 0
    
    edi_1 = &edi_1[5]
while (&edi_1[-1] != arg2)
