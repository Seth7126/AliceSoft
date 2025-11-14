// 函数: sub_5d0270
// 地址: 0x5d0270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
void** edi = arg2
int32_t result = arg1
int32_t result_1 = result
void** ebp = edi

if (*(edi + 0xd) == 0)
    do
        sub_5d0270(ebp[2])
        int32_t* i = edi[5]
        ebp = *ebp
        
        if (i != 0)
            for (int32_t ebx_1 = edi[6]; i != ebx_1; i = &i[6])
                if (i[5] u>= 0x10)
                    j__free(*i)
                
                i[5] = 0xf
                i[4] = 0
                *i = 0
            
            j__free(edi[5])
            edi[5] = 0
            edi[6] = 0
            edi[7] = 0
        
        j__free(edi)
        result = result_1
        edi = ebp
    while (*(ebp + 0xd) == 0)

return result
