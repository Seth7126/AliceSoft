// 函数: sub_57a470
// 地址: 0x57a470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3 = (arg2 - arg3) s/ 0x6c
int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q(eax_3)
int32_t i = (eax_4 - edx_3) s>> 1

if (i s> 0)
    void* j_3 = (i << 1) + 2
    int32_t esi_2 = i * 0x6c + arg3
    
    do
        void var_78
        __builtin_memcpy(&var_78, esi_2 - 0x6c, 0x6c)
        void* j = j_3 - 2
        void* j_2 = i - 1
        int32_t eax_7 = eax_3
        void* j_1 = j
        
        for (; j s< eax_7; j = (j << 1) + 2)
            int32_t eax_8 = j * 0x6c
            
            if (not(*(eax_8 + arg3 - 4) f<= *(eax_8 + arg3 + 0x68)))
                j -= 1
            
            eax_7 = eax_3
            __builtin_memcpy(j_2 * 0x6c + arg3, j * 0x6c + arg3, 0x6c)
            j_2 = j
        
        if (j == eax_7)
            __builtin_memcpy(j_2 * 0x6c + arg3, arg3 - 0x6c + eax_7 * 0x6c, 0x6c)
            j_2 = eax_3 - 1
        
        int32_t var_9c_1 = arg4
        sub_57a810(&var_78, j_2, arg3, i - 1, &var_78)
        i -= 1
        j_3 = j_1
        esi_2 -= 0x6c
    while (i s> 0)

return i
