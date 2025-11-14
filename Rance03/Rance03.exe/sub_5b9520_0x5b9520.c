// 函数: sub_5b9520
// 地址: 0x5b9520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t i = arg2
int32_t i_1 = i

if (arg1 == i)
    return 

int32_t* edi_1 = arg1 + 0x18

do
    void* ebx_1 = *edi_1
    
    if (ebx_1 != 0)
        int32_t ebp = edi_1[1]
        
        if (ebx_1 != ebp)
            int32_t* esi_1 = ebx_1 + 0x18
            
            do
                if (*esi_1 u>= 0x10)
                    j__free(esi_1[-5])
                
                *esi_1 = 0xf
                ebx_1 += 0x1c
                esi_1[-1] = 0
                esi_1[-5].b = 0
                esi_1 = &esi_1[7]
            while (ebx_1 != ebp)
        
        j__free(*edi_1)
        i = i_1
        *edi_1 = 0
        edi_1[1] = 0
        edi_1[2] = 0
    
    if (edi_1[-1] u>= 0x10)
        j__free(edi_1[-6])
    
    edi_1[-1] = 0xf
    edi_1[-2] = 0
    edi_1[-6].b = 0
    edi_1 = &edi_1[9]
while (&edi_1[-6] != i)
