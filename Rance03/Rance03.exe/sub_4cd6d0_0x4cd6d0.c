// 函数: sub_4cd6d0
// 地址: 0x4cd6d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
void** edi = arg2
int32_t result = arg1
int32_t result_1 = result
void** ebp = edi

if (*(edi + 0xd) == 0)
    do
        sub_4cd6d0(ebp[2])
        int32_t* i = edi[0xa]
        ebp = *ebp
        
        if (i != 0)
            for (int32_t ebx_1 = edi[0xb]; i != ebx_1; i = &i[6])
                if (i[5] u>= 0x10)
                    j__free(*i)
                
                i[5] = 0xf
                i[4] = 0
                *i = 0
            
            j__free(edi[0xa])
            edi[0xa] = 0
            edi[0xb] = 0
            edi[0xc] = 0
        
        if (edi[9] u>= 0x10)
            j__free(edi[4])
        
        edi[9] = 0xf
        edi[8] = 0
        edi[4].b = 0
        j__free(edi)
        result = result_1
        edi = ebp
    while (*(ebp + 0xd) == 0)

return result
