// 函数: sub_433170
// 地址: 0x433170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ecx = *(arg2 + 4)

if (&ecx[4] u<= *(arg2 + 8))
    int32_t var_c
    int32_t var_24_1 = var_c
    uint32_t eax_3 = zx.d(*ecx)
    uint32_t esi_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8
    *(arg2 + 4) = &ecx[4]
    uint32_t esi_7 = esi_6 | eax_3
    char* var_28_1 = ecx
    sub_417d50(*arg1, arg1[1])
    arg1[1] = *arg1
    sub_416ab0(arg1, esi_7)
    int32_t ebx_1 = 0
    
    if (esi_7 s> 0)
        int32_t esi_8 = 0
        
        do
            if (sub_61ed80(arg2, *arg1 + esi_8) == 0)
                return 0
            
            ebx_1 += 1
            esi_8 += 0x18
        while (ebx_1 s< esi_7)
    
    char* ecx_4 = *(arg2 + 4)
    
    if (&ecx_4[4] u<= *(arg2 + 8))
        uint32_t esi_15 =
            ((zx.d(ecx_4[3]) << 8 | zx.d(ecx_4[2])) << 8 | zx.d(ecx_4[1])) << 8 | zx.d(*ecx_4)
        *(arg2 + 4) = &ecx_4[4]
        uint32_t var_24_4 = esi_15
        char* var_28_2 = ecx_4
        sub_417d50(arg1[3], arg1[4])
        arg1[4] = arg1[3]
        uint32_t var_24_6 = esi_15
        int32_t var_28_3 = sub_416ab0(&arg1[3], esi_15)
        sub_417d50(arg1[6], arg1[7])
        arg1[7] = arg1[6]
        sub_416ab0(&arg1[6], esi_15)
        int32_t ebx_4 = 0
        
        if (esi_15 s<= 0)
            return 1
        
        int32_t esi_16 = 0
        
        while (true)
            if (sub_61ed80(arg2, arg1[3] + esi_16) == 0)
                return 0
            
            if (sub_61ed80(arg2, arg1[6] + esi_16) == 0)
                return 0
            
            ebx_4 += 1
            esi_16 += 0x18
            
            if (ebx_4 s>= esi_15)
                return 1

return 0
