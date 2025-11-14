// 函数: sub_621230
// 地址: 0x621230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i_5 = arg4
char* ebx = arg2
int32_t ecx = not.d(arg3)

if (i_5 != 0)
    while ((ebx.b & 3) != 0)
        char eax = *ebx
        ebx = &ebx[1]
        ecx = ecx u>> 8 ^ *(((zx.d(eax) ^ zx.d(ecx.b)) << 2) + &data_6ed310)
        void* i_6 = i_5
        i_5 -= 1
        
        if (i_6 == 1)
            break

if (i_5 u>= 0x20)
    uint32_t i_3 = i_5 u>> 5
    uint32_t i
    
    do
        int32_t ecx_2 = ecx ^ *ebx
        int32_t edx_6 = *((zx.d((ecx_2 u>> 0x10).b) << 2) + &data_6ed710)
            ^ *((zx.d((ecx_2 u>> 8).b) << 2) + &data_6edb10)
            ^ *((ecx_2 u>> 0x18 << 2) + &data_6ed310) ^ *((zx.d(ecx_2.b) << 2) + &data_6edf10)
        int32_t edx_7 = edx_6 ^ *(ebx + 4)
        int32_t ebx_5 = *((zx.d((edx_7 u>> 0x10).b) << 2) + &data_6ed710)
            ^ *((zx.d((edx_7 u>> 8).b) << 2) + &data_6edb10)
            ^ *((edx_7 u>> 0x18 << 2) + &data_6ed310) ^ *((zx.d(edx_7.b) << 2) + &data_6edf10)
        int32_t ebx_6 = ebx_5 ^ *(ebx + 8)
        int32_t edx_11 = *((zx.d((ebx_6 u>> 0x10).b) << 2) + &data_6ed710)
            ^ *((zx.d((ebx_6 u>> 8).b) << 2) + &data_6edb10)
            ^ *((ebx_6 u>> 0x18 << 2) + &data_6ed310) ^ *((zx.d(ebx_6.b) << 2) + &data_6edf10)
        int32_t edx_12 = edx_11 ^ *(ebx + 0xc)
        int32_t ebx_10 = *((zx.d((edx_12 u>> 0x10).b) << 2) + &data_6ed710)
            ^ *((zx.d((edx_12 u>> 8).b) << 2) + &data_6edb10)
            ^ *((edx_12 u>> 0x18 << 2) + &data_6ed310) ^ *((zx.d(edx_12.b) << 2) + &data_6edf10)
        int32_t ebx_11 = ebx_10 ^ *(ebx + 0x10)
        int32_t edx_16 = *((zx.d((ebx_11 u>> 0x10).b) << 2) + &data_6ed710)
            ^ *((zx.d((ebx_11 u>> 8).b) << 2) + &data_6edb10)
            ^ *((ebx_11 u>> 0x18 << 2) + &data_6ed310) ^ *((zx.d(ebx_11.b) << 2) + &data_6edf10)
        int32_t edx_17 = edx_16 ^ *(ebx + 0x14)
        i_5 -= 0x20
        int32_t ebx_15 = *((zx.d((edx_17 u>> 0x10).b) << 2) + &data_6ed710)
            ^ *((zx.d((edx_17 u>> 8).b) << 2) + &data_6edb10)
            ^ *((edx_17 u>> 0x18 << 2) + &data_6ed310) ^ *((zx.d(edx_17.b) << 2) + &data_6edf10)
        int32_t ebx_16 = ebx_15 ^ *(ebx + 0x18)
        arg4 = &ebx[0x1c]
        int32_t edx_21 = *((zx.d((ebx_16 u>> 0x10).b) << 2) + &data_6ed710)
            ^ *((zx.d((ebx_16 u>> 8).b) << 2) + &data_6edb10)
            ^ *((ebx_16 u>> 0x18 << 2) + &data_6ed310) ^ *((zx.d(ebx_16.b) << 2) + &data_6edf10)
        int32_t edx_22 = edx_21 ^ *(ebx + 0x1c)
        ebx = &ebx[0x20]
        ecx = *((zx.d((edx_22 u>> 0x10).b) << 2) + &data_6ed710)
            ^ *((zx.d((edx_22 u>> 8).b) << 2) + &data_6edb10)
            ^ *((edx_22 u>> 0x18 << 2) + &data_6ed310) ^ *((zx.d(edx_22.b) << 2) + &data_6edf10)
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_5 u>= 4)
    uint32_t i_4 = i_5 u>> 2
    uint32_t i_1
    
    do
        int32_t ecx_27 = ecx ^ *ebx
        i_5 -= 4
        ebx = &ebx[4]
        int32_t edx_29 = *((zx.d((ecx_27 u>> 0x10).b) << 2) + &data_6ed710)
            ^ *((zx.d((ecx_27 u>> 8).b) << 2) + &data_6edb10)
            ^ *((ecx_27 u>> 0x18 << 2) + &data_6ed310) ^ *((zx.d(ecx_27.b) << 2) + &data_6edf10)
        ecx = edx_29
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (i_5 != 0)
    void* i_2
    
    do
        char eax_57 = *ebx
        ebx = &ebx[1]
        ecx = ecx u>> 8 ^ *(((zx.d(eax_57) ^ zx.d(ecx.b)) << 2) + &data_6ed310)
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return not.d(ecx)
