// 函数: sub_69ded0
// 地址: 0x69ded0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 1

if (arg8 == 0 || *arg8 != 0x31)
    return 0xfffffffa

if (arg3 == 0)
    return arg3 - 2

bool cond:0 = *(arg3 + 0x20) != 0
*(arg3 + 0x18) = 0

if (not(cond:0))
    *(arg3 + 0x20) = sub_6a3e70
    *(arg3 + 0x28) = 0

if (*(arg3 + 0x24) == 0)
    *(arg3 + 0x24) = sub_6a3e90

char* ecx = 6
int32_t ebx = arg5

if (arg2 != 0xffffffff)
    ecx = arg2

if (ebx s< 0)
    esi = 0
    ebx = neg.d(ebx)
else if (ebx s> 0xf)
    esi = 2
    ebx -= 0x10

if (arg6 - 1 u<= 8 && arg4 == 8 && ebx - 8 u<= 7 && ecx u<= 9 && arg7 u<= 4)
    if (ebx != 8)
        goto label_69dfa3
    
    if (esi == 1)
        ebx = esi + 8
    label_69dfa3:
        void** eax_5 = (*(arg3 + 0x20))(*(arg3 + 0x28), 1, 0x16c4)
        
        if (eax_5 != 0)
            *(arg3 + 0x1c) = eax_5
            eax_5[6] = esi
            int32_t esi_1 = 1 << ebx.b
            eax_5[0xc] = ebx
            *eax_5 = arg3
            eax_5[0xd] = esi_1 - 1
            eax_5[1] = 0x2a
            int32_t eax_7 = 1 << (arg6 + 7).b
            eax_5[0x13] = eax_7
            eax_5[0x15] = eax_7 - 1
            eax_5[0x14] = arg6 + 7
            eax_5[7] = 0
            eax_5[0xb] = esi_1
            eax_5[0x16] = (arg6 + 9) u/ 3
            int32_t eax_11 = (*(arg3 + 0x20))(*(arg3 + 0x28), esi_1, 2)
            int32_t var_24_1 = eax_5[0xb]
            eax_5[0xe] = eax_11
            int32_t eax_13 = (*(arg3 + 0x20))(*(arg3 + 0x28), var_24_1, 2)
            int32_t var_30_1 = eax_5[0x13]
            eax_5[0x10] = eax_13
            eax_5[0x11] = (*(arg3 + 0x20))(*(arg3 + 0x28), var_30_1, 2)
            eax_5[0x5b0] = 0
            int32_t eax_16 = 1 << (arg6.b + 6)
            eax_5[0x5a7] = eax_16
            int32_t eax_18 = (*(arg3 + 0x20))(*(arg3 + 0x28), eax_16, 4)
            int32_t esi_2 = eax_5[0x5a7]
            bool cond:2_1 = eax_5[0xe] == 0
            eax_5[2] = eax_18
            eax_5[3] = esi_2 << 2
            
            if (not(cond:2_1) && eax_5[0x10] != 0 && eax_5[0x11] != 0 && eax_18 != 0)
                eax_5[9].b = 8
                eax_5[0x5a9] = eax_18 + (esi_2 u>> 1 << 1)
                eax_5[0x5a6] = esi_2 * 3 + eax_18
                eax_5[0x21] = ecx
                eax_5[0x22] = arg7
                return sub_69e200(arg3) __tailcall
            
            eax_5[1] = 0x29a
            *(arg3 + 0x18) = "insufficient memory"
            sub_69eb60(arg3)
        
        return 0xfffffffc

return 0xfffffffe
