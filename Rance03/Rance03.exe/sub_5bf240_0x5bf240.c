// 函数: sub_5bf240
// 地址: 0x5bf240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t ebx = arg2[4]

if (ebx == 0)
    return 0xffffffff

int32_t** i_1 = *(arg1 + 0xc0)
int32_t** i = i_1

for (int32_t* eax_1 = *(arg1 + 0xc4); i != eax_1; i = &i[6])
    int32_t* edx_1
    
    if (arg2[5] u< 0x10)
        edx_1 = arg2
    else
        edx_1 = *arg2
    
    int32_t edi_1 = i[4]
    int32_t* i_2
    
    if (i[5] u< 0x10)
        i_2 = i
    else
        i_2 = *i
    
    int32_t eax_2 = ebx
    
    if (edi_1 u< ebx)
        eax_2 = edi_1
    
    if (sub_405190(eax_2, edx_1, i_2, eax_2) == 0 && edi_1 u>= ebx)
        int32_t eax_3
        eax_3.b = edi_1 != ebx
        
        if (eax_3 == 0)
            return (i - i_1) s/ 0x18

return 0xffffffff
