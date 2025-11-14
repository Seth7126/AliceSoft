// 函数: sub_626870
// 地址: 0x626870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
void* var_4 = nullptr
uint32_t ecx_5
uint32_t edx_4

if (arg3[0x21] s<= 0)
    edx_4 = arg4 + 5
    ecx_5 = edx_4
else
    void* ebx_1 = *arg3
    
    if (*(ebx_1 + 0x2c) == 2)
        *(ebx_1 + 0x2c) = sub_626e60(arg3)
    
    sub_625b90(arg3, &arg3[0x2c6])
    sub_625b90(arg3, &arg3[0x2c9])
    void* eax_1 = sub_6263b0(arg3)
    ecx_5 = (arg3[0x5aa] + 0xa) u>> 3
    edx_4 = (arg3[0x5ab] + 0xa) u>> 3
    var_4 = eax_1
    
    if (edx_4 u<= ecx_5)
        ecx_5 = edx_4

int32_t ebx_2

if (arg4 + 4 u<= ecx_5 && arg2 != 0)
    ebx_2 = arg5
    sub_6266d0((arg4 + 4).w, arg2, arg3, arg4, ebx_2.w)
else
    int32_t eax_2
    
    if (arg3[0x22] == 4 || edx_4 == ecx_5)
        int32_t ecx_12 = arg3[0x5af]
        ebx_2 = arg5
        uint32_t eax_13
        
        if (ecx_12 s<= 0xd)
            arg3[0x5ae].w |= (ebx_2.w + 2) << ecx_12.b
            eax_13 = ecx_12 + 3
            arg3[0x5af] = eax_13
        else
            eax_2.w = ebx_2.w + 2
            eax_2.w <<= ecx_12.b
            arg3[0x5ae].w |= eax_2.w
            arg3[5][arg3[2]] = arg3[0x5ae].b
            arg3[5] += 1
            eax_13 = zx.d(*(arg3 + 0x16b9))
            arg3[5][arg3[2]] = eax_13.b
            int32_t ecx_14
            ecx_14.b = 0x10
            ecx_14.b = 0x10 - arg3[0x5af].b
            arg3[5] += 1
            arg3[0x5af] -= 0xd
            arg3[0x5ae].w = (ebx_2.w + 2) u>> ecx_14.b
        
        sub_626a70(eax_13, 0x6f0960, arg3, 0x6f08e0)
    else
        int32_t ecx_7 = arg3[0x5af]
        ebx_2 = arg5
        
        if (ecx_7 s<= 0xd)
            arg3[0x5ae].w |= (ebx_2.w + 4) << ecx_7.b
            arg3[0x5af] = ecx_7 + 3
        else
            eax_2.w = ebx_2.w + 4
            eax_2.w <<= ecx_7.b
            arg3[0x5ae].w |= eax_2.w
            arg3[5][arg3[2]] = arg3[0x5ae].b
            arg3[5] += 1
            arg3[5][arg3[2]] = *(arg3 + 0x16b9)
            int32_t ecx_9
            ecx_9.b = 0x10
            ecx_9.b = 0x10 - arg3[0x5af].b
            arg3[5] += 1
            arg3[0x5af] -= 0xd
            arg3[0x5ae].w = (ebx_2.w + 4) u>> ecx_9.b
        
        int32_t eax_10 = arg3[0x2ca] + 1
        sub_626490(eax_10, arg3[0x2c7] + 1, arg3, eax_10, var_4 + 1)
        sub_626a70(&arg3[0x262], &arg3[0x25], arg3, &arg3[0x262])

sub_625760(arg3)

if (ebx_2 == 0)
    return 1

return sub_626f50(arg3) __tailcall
