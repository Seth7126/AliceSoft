// 函数: sub_5c48a0
// 地址: 0x5c48a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_410
int32_t eax_1 = __security_cookie ^ &var_410
int32_t* eax_2 = arg1[0x82]
int32_t edi = *eax_2
arg1[0x82] = &eax_2[1]
int32_t* ecx_1 = arg1[0x28] - arg1[0x27]
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x38e38e39, ecx_1)
int32_t edx_1 = edx s>> 4
int32_t eax_7 = ecx_1 s/ 0x48
struct sys43vm::CPage::VTable** result
int32_t var_420_3

if (edi u>= eax_7)
    var_420_3 = edi
    result = sub_5c24e0(eax_7, edx_1, ecx_1, arg1, 0x6e6bd4)
else
    eax_7 = arg1[0x27]
    ecx_1 = edi * 9
    int32_t ebx_1 = eax_7 + (ecx_1 << 3)
    
    if (ebx_1 == 0)
        var_420_3 = edi
        result = sub_5c24e0(eax_7, edx_1, ecx_1, arg1, 0x6e6bd4)
    else
        if (arg1[0x4ae].b != 0)
            sub_5b34e0(arg1[0x4a0] + edi * 0x38)
        
        void var_40c
        sub_5de000(&arg1[0x88], &var_40c, *(ebx_1 + 0x28))
        int32_t ecx_7
        int32_t edx_2
        result, ecx_7, edx_2 = sub_5caba0(arg1, ebx_1, &var_40c, *(ebx_1 + 0x28))
        
        if (result.b == 0)
            int32_t var_420_2 = 0x6e6bb8
            result = sub_5c2400(result, edx_2, ecx_7, arg1, "CALLFUNC")
sub_69a5bc(eax_1 ^ &var_410)
return result
