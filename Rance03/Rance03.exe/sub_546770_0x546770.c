// 函数: sub_546770
// 地址: 0x546770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_6c
int32_t eax_1 = __security_cookie ^ &var_6c

if (*(arg1 + 0x24) == 0 || *(arg1 + 0x28) != 0)
    int32_t eax_2
    eax_2.b = 1
    sub_69a5bc(eax_1 ^ &var_6c)
    return eax_2

EnterCriticalSection(*(arg2 + 0x40) + 4)
int64_t xmm0 = *(arg2 + 0x30)
int32_t esi = *(arg2 + 0x38)
LeaveCriticalSection(*(arg2 + 0x40) + 4)
void* eax_7 = *(arg1 + 0x24)
*(eax_7 + 0x14) = xmm0
*(eax_7 + 0x1c) = esi
int32_t eax_8
int32_t edx
edx:eax_8 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x6c) - *(arg2 + 0x68))
int128_t var_38
__builtin_memset(&var_38, 0, 0x30)
int32_t edx_1 = edx s>> 1
int32_t eax_11

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int64_t* esi_1 = *(arg2 + 0x68)
    var_38:8.d = esi_1[1].d
    int32_t eax_13
    int32_t edx_2
    edx_2:eax_13 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x6c) - esi_1)
    var_38.q = *esi_1
    int32_t edx_3 = edx_2 s>> 1
    
    if ((edx_3 u>> 0x1f) + edx_3 s> 1)
        int128_t var_28
        var_28:4.d = *(esi_1 + 0x14)
        var_38:0xc.q = *(esi_1 + 0xc)
        int32_t eax_16
        int32_t edx_4
        edx_4:eax_16 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x6c) - esi_1)
        int32_t edx_5 = edx_4 s>> 1
        
        if ((edx_5 u>> 0x1f) + edx_5 s> 2)
            int128_t var_18
            var_18.d = esi_1[4].d
            var_28:8.q = esi_1[3]
            
            if (sub_541650(arg2, 3, &var_18:4).b != 0)
                sub_52acf0(*(arg1 + 0x24), &var_38, &var_38:0xc, &var_28:8, &var_18:4)
                eax_11 = *(arg2 + 0x78) - *(arg2 + 0x74)
                int128_t var_58
                __builtin_memset(&var_58, 0, 0x20)
                
                if ((eax_11 & 0xfffffff8) s> 0)
                    int32_t* ecx_11 = *(arg2 + 0x74)
                    var_58.d = *ecx_11
                    var_58:4.d = ecx_11[1]
                    
                    if (((*(arg2 + 0x78) - ecx_11) & 0xfffffff8) s> 8)
                        var_58:8.d = ecx_11[2]
                        var_58:0xc.d = ecx_11[3]
                        
                        if (((*(arg2 + 0x78) - ecx_11) & 0xfffffff8) s> 0x10)
                            int128_t var_48
                            var_48.d = ecx_11[4]
                            var_48:4.d = ecx_11[5]
                            
                            if (((*(arg2 + 0x78) - ecx_11) & 0xfffffff8) s> 0x18)
                                var_48:8.d = ecx_11[6]
                                var_48:0xc.d = ecx_11[7]
                                sub_52ad50(*(arg1 + 0x24), &var_58, &var_58:8, &var_48, &var_48:8)
                                int32_t var_80_5 = arg4
                                *(*(arg1 + 0x24) + 0x78) = *(arg2 + 0xb4)
                                float ecx_14 = *(arg1 + 0x24)
                                *(ecx_14 i+ 0x7c) = *(arg2 + 0xb8)
                                bool eax_38 = sub_52a210(*(arg1 + 0x24), 
                                    int.d(fconvert.t(*(arg2 + 0x12c))), arg5, ecx_14, arg3) != 0
                                sub_69a5bc(eax_1 ^ &var_6c)
                                return eax_38

eax_11.b = 0
sub_69a5bc(eax_1 ^ &var_6c)
return eax_11
