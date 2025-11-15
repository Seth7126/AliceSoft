// 函数: sub_6b7c80
// 地址: 0x6b7c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx_1 = *arg1 + arg1[3]
int32_t ebp_1 = arg1[2] - arg1[3]

if ((arg1[1] & 0x80000000) == 0)
    if (arg1[5] != 0)
    label_6b7cf0:
        
        if (arg1[5] + arg1[6] s<= ebp_1)
            int32_t esi_2 = *(ebx_1 + 0x16)
            *(ebx_1 + 0x16) = 0
            void* eax_8 = arg1[5]
            void* var_10_1 = eax_8
            void* var_c_1 = eax_8 + ebx_1
            int32_t eax_10 = arg1[6]
            int32_t* var_14 = ebx_1
            int32_t var_8_1 = eax_10
            sub_6b7b40(&var_14)
            
            if (esi_2 != *(ebx_1 + 0x16))
                *(ebx_1 + 0x16) = esi_2
                goto label_6b7d34
            
            int32_t ecx_4 = *arg1 + arg1[3]
            
            if (arg2 != 0)
                *arg2 = ecx_4
                arg2[1] = arg1[5]
                arg2[2] = arg1[5] + ecx_4
                arg2[3] = arg1[6]
            
            int32_t result = arg1[5] + arg1[6]
            arg1[3] += result
            arg1[4] = 0
            arg1[5] = 0
            arg1[6] = 0
            return result
    else if (ebp_1 s>= 0x1b)
        if (*ebx_1 != (*"OggS")[0].d)
        label_6b7d34:
            arg1[5] = 0
            arg1[6] = 0
            void* eax_14 = _memchr(ebx_1 + 1, 0x4f, ebp_1 - 1)
            
            if (eax_14 == 0)
                eax_14 = arg1[2] + *arg1
            
            arg1[3] = eax_14 - *arg1
            return ebx_1 - eax_14
        
        uint32_t eax_3 = zx.d(*(ebx_1 + 0x1a))
        
        if (ebp_1 s>= eax_3 + 0x1b)
            int32_t i = 0
            
            if (eax_3 != 0)
                int32_t edx = arg1[6]
                
                do
                    uint32_t eax_4 = zx.d(*(ebx_1 + i + 0x1b))
                    i += 1
                    edx += eax_4
                    arg1[6] = edx
                while (i s< zx.d(*(ebx_1 + 0x1a)))
            
            arg1[5] = eax_3 + 0x1b
            goto label_6b7cf0

return 0
