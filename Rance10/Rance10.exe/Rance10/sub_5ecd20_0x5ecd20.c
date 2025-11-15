// 函数: sub_5ecd20
// 地址: 0x5ecd20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = sub_5665c0(data_7fd4cc, arg2, arg4)
int32_t eax

if (ebx == 0)
    eax.b = 0
    return eax

void* esi = *(ebx + 0x220)

if (esi == 0)
    eax.b = 0
    return eax

if (arg5 s>= 0)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = muls.dp.d(0x4da637d, *(esi + 8) - *(esi + 4))
    int32_t edx_1 = edx s>> 4
    
    if (arg5 s< (edx_1 u>> 0x1f) + edx_1)
        int32_t ecx_3 = arg5 * 0x34c
        void* ecx_4 = ecx_3 + *(esi + 4)
        
        if (ecx_3 != neg.d(*(esi + 4)) && arg3 - 7 u<= 0x4f)
            switch (arg3 + &jump_table_5ece70[7]:1)
                case &lookup_table_5ece94
                    sub_59fdb0(esi, arg5, arg6)
                    int32_t* eax_4 = *(ebx + 0x220)
                    *eax_4 += 1
                    eax_4.b = 1
                    return eax_4
                case &lookup_table_5ece94[0x21]
                    sub_578f70(ecx_4, arg6)
                    int32_t* eax_10 = *(ebx + 0x220)
                    *eax_10 += 1
                    eax_10.b = 1
                    return eax_10
                case &lookup_table_5ece94[0x4a]
                    sub_579170(ecx_4, arg6)
                    int32_t* eax_5 = *(ebx + 0x220)
                    *eax_5 += 1
                    eax_5.b = 1
                    return eax_5
                case &lookup_table_5ece94[0x4b]
                    sub_5791b0(ecx_4, arg6)
                    int32_t* eax_6 = *(ebx + 0x220)
                    *eax_6 += 1
                    eax_6.b = 1
                    return eax_6
                case &lookup_table_5ece94[0x4c]
                    sub_5791d0(ecx_4, arg6)
                    int32_t* eax_7 = *(ebx + 0x220)
                    *eax_7 += 1
                    eax_7.b = 1
                    return eax_7
                case &lookup_table_5ece94[0x4d]
                    sub_5791f0(ecx_4, arg6)
                    int32_t* eax_8 = *(ebx + 0x220)
                    *eax_8 += 1
                    eax_8.b = 1
                    return eax_8
                case &lookup_table_5ece94[0x4e]
                    sub_579210(ecx_4, arg6)
                    int32_t* eax_9 = *(ebx + 0x220)
                    *eax_9 += 1
                    eax_9.b = 1
                    return eax_9
                case &lookup_table_5ece94[0x4f]
                    sub_578fb0(ecx_4, arg6)
                    int32_t* eax_11 = *(ebx + 0x220)
                    *eax_11 += 1
                    eax_11.b = 1
                    return eax_11

eax.b = 0
return eax
