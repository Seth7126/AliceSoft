// 函数: sub_69dc30
// 地址: 0x69dc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i_5 = arg4
char* ebx = arg2
int32_t ecx = not.d(arg3)

if (i_5 != 0)
    while ((ebx.b & 3) != 0)
        char eax = *ebx
        ebx = &ebx[1]
        ecx = ecx u>> 8 ^ *(((zx.d(eax) ^ zx.d(ecx.b)) << 2) + &data_76fcc0)
        void* i_6 = i_5
        i_5 -= 1
        
        if (i_6 == 1)
            break

if (i_5 u>= 0x20)
    uint32_t i_3 = i_5 u>> 5
    uint32_t i
    
    do
        int32_t ecx_2 = ecx ^ *ebx
        int32_t edx_4 = *((zx.d((ecx_2 u>> 0x10).b) << 2) + &data_7700c0)
            ^ *((zx.d((ecx_2 u>> 8).b) << 2) + &data_7704c0)
            ^ *((ecx_2 u>> 0x18 << 2) + &data_76fcc0) ^ *((zx.d(ecx_2.b) << 2) + &data_7708c0)
        int32_t edx_5 = edx_4 ^ *(ebx + 4)
        int32_t ebx_5 = *((zx.d((edx_5 u>> 0x10).b) << 2) + &data_7700c0)
            ^ *((zx.d((edx_5 u>> 8).b) << 2) + &data_7704c0)
            ^ *((edx_5 u>> 0x18 << 2) + &data_76fcc0) ^ *((zx.d(edx_5.b) << 2) + &data_7708c0)
        int32_t ebx_6 = ebx_5 ^ *(ebx + 8)
        int32_t edx_9 = *((zx.d((ebx_6 u>> 0x10).b) << 2) + &data_7700c0)
            ^ *((zx.d((ebx_6 u>> 8).b) << 2) + &data_7704c0)
            ^ *((ebx_6 u>> 0x18 << 2) + &data_76fcc0) ^ *((zx.d(ebx_6.b) << 2) + &data_7708c0)
        int32_t edx_10 = edx_9 ^ *(ebx + 0xc)
        int32_t ebx_10 = *((zx.d((edx_10 u>> 0x10).b) << 2) + &data_7700c0)
            ^ *((zx.d((edx_10 u>> 8).b) << 2) + &data_7704c0)
            ^ *((edx_10 u>> 0x18 << 2) + &data_76fcc0) ^ *((zx.d(edx_10.b) << 2) + &data_7708c0)
        int32_t ebx_11 = ebx_10 ^ *(ebx + 0x10)
        int32_t edx_14 = *((zx.d((ebx_11 u>> 0x10).b) << 2) + &data_7700c0)
            ^ *((zx.d((ebx_11 u>> 8).b) << 2) + &data_7704c0)
            ^ *((ebx_11 u>> 0x18 << 2) + &data_76fcc0) ^ *((zx.d(ebx_11.b) << 2) + &data_7708c0)
        int32_t edx_15 = edx_14 ^ *(ebx + 0x14)
        i_5 -= 0x20
        int32_t ebx_15 = *((zx.d((edx_15 u>> 0x10).b) << 2) + &data_7700c0)
            ^ *((zx.d((edx_15 u>> 8).b) << 2) + &data_7704c0)
            ^ *((edx_15 u>> 0x18 << 2) + &data_76fcc0) ^ *((zx.d(edx_15.b) << 2) + &data_7708c0)
        int32_t ebx_16 = ebx_15 ^ *(ebx + 0x18)
        arg4 = &ebx[0x1c]
        int32_t edx_19 = *((zx.d((ebx_16 u>> 0x10).b) << 2) + &data_7700c0)
            ^ *((zx.d((ebx_16 u>> 8).b) << 2) + &data_7704c0)
            ^ *((ebx_16 u>> 0x18 << 2) + &data_76fcc0) ^ *((zx.d(ebx_16.b) << 2) + &data_7708c0)
        int32_t edx_20 = edx_19 ^ *(ebx + 0x1c)
        ebx = &ebx[0x20]
        ecx = *((zx.d((edx_20 u>> 0x10).b) << 2) + &data_7700c0)
            ^ *((zx.d((edx_20 u>> 8).b) << 2) + &data_7704c0)
            ^ *((edx_20 u>> 0x18 << 2) + &data_76fcc0) ^ *((zx.d(edx_20.b) << 2) + &data_7708c0)
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_5 u>= 4)
    uint32_t i_4 = i_5 u>> 2
    uint32_t i_1
    
    do
        int32_t ecx_13 = ecx ^ *ebx
        i_5 -= 4
        ebx = &ebx[4]
        int32_t edx_25 = *((zx.d((ecx_13 u>> 0x10).b) << 2) + &data_7700c0)
            ^ *((zx.d((ecx_13 u>> 8).b) << 2) + &data_7704c0)
            ^ *((ecx_13 u>> 0x18 << 2) + &data_76fcc0) ^ *((zx.d(ecx_13.b) << 2) + &data_7708c0)
        ecx = edx_25
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (i_5 != 0)
    void* i_2
    
    do
        char eax_75 = *ebx
        ebx = &ebx[1]
        ecx = ecx u>> 8 ^ *(((zx.d(eax_75) ^ zx.d(ecx.b)) << 2) + &data_76fcc0)
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return not.d(ecx)
