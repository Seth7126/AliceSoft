// 函数: sub_4677a0
// 地址: 0x4677a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
void** esi = arg2
int32_t result = arg1
int32_t result_1 = result
void** ebp = esi

if (*(esi + 0xd) == 0)
    do
        sub_4677a0(ebp[2])
        int32_t* i = esi[0xa]
        ebp = *ebp
        
        if (i != 0)
            for (int32_t ebx_1 = esi[0xb]; i != ebx_1; i = &i[9])
                (**i)(0)
            
            j__free(esi[0xa])
            esi[0xa] = 0
            esi[0xb] = 0
            esi[0xc] = 0
        
        if (esi[9] u>= 0x10)
            j__free(esi[4])
        
        esi[9] = 0xf
        esi[8] = 0
        esi[4].b = 0
        j__free(esi)
        result = result_1
        esi = ebp
    while (*(ebp + 0xd) == 0)

return result
