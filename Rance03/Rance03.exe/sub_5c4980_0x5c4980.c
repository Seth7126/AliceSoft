// 函数: sub_5c4980
// 地址: 0x5c4980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_410
int32_t eax_1 = __security_cookie ^ &var_410
int32_t* eax_2 = arg1[0x82]
int32_t esi = *eax_2
arg1[0x82] = &eax_2[1]
int32_t ecx_1 = arg1[0x28] - arg1[0x27]
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x38e38e39, ecx_1)
int32_t eax_7 = ecx_1 s/ 0x48
int32_t eax_12

if (esi u>= eax_7)
label_5c4a92:
    int32_t var_420_4 = esi
    int32_t var_424_2 = 0x6e6c04
    eax_12 = sub_5c2400(eax_7, edx s>> 4, ecx_1, arg1, "CALLMETHOD")
else
    eax_7 = arg1[0x27]
    ecx_1 = esi * 9
    int32_t ebx_1 = eax_7 + (ecx_1 << 3)
    
    if (ebx_1 == 0)
        goto label_5c4a92
    
    if (arg1[0x4ae].b != 0)
        sub_5b34e0(arg1[0x4a0] + esi * 0x38)
    
    void var_40c
    int32_t ecx_6
    int32_t edx_2
    ecx_6, edx_2 = sub_5de000(&arg1[0x88], &var_40c, *(ebx_1 + 0x28))
    arg1[0x8d] -= 4
    int32_t eax_10 = *arg1[0x8d]
    
    if (eax_10 == 0xffffffff)
        char const* const var_420_1 = "NULL"
        int32_t eax_11 = sub_5c2400(eax_10, edx_2, ecx_6, arg1, "CALLMETHOD")
        sub_69a5bc(eax_1 ^ &var_410)
        return eax_11
    
    int32_t ecx_10
    int32_t edx_3
    eax_12, ecx_10, edx_3 = sub_5caf40(arg1, ebx_1, eax_10, &var_40c)
    
    if (eax_12.b == 0)
        int32_t var_420_3 = 0x6e6f70
        int32_t eax_13 = sub_5c2400(eax_12, edx_3, ecx_10, arg1, "CALLMETHOD")
        sub_69a5bc(eax_1 ^ &var_410)
        return eax_13

sub_69a5bc(eax_1 ^ &var_410)
return eax_12
