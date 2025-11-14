// 函数: sub_66e350
// 地址: 0x66e350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg6
int32_t esi = arg7
int32_t ebx = eax * 2
int32_t* edi = arg3
int32_t var_14

if (ebx s<= esi)
    int32_t eax_2 = eax * 0x28
    arg7 = eax_2
    
    do
        int32_t var_30_1 = arg8
        void* edx = eax_2 + edi
        void* ebp_1 = eax_2 + edx
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 0
        int32_t var_38_1 = 0
        int32_t var_34_1 = arg5
        arg5 = sub_66f6f0(arg5.b, edi, &var_14, edx, edx, ebp_1, 0)[4]
        int32_t eax_6 = var_14
        
        if (eax_6 != 0)
            j__free(eax_6)
        
        eax_2 = arg7
        esi -= ebx
        edi = ebp_1
    while (esi s>= ebx)
    
    eax = arg6

if (esi s> eax)
    int32_t var_30_4 = arg8
    void* edx_3 = &edi[eax * 0xa]
    int32_t var_40_2 = 0
    int32_t var_3c_2 = 0
    int32_t var_38_3 = 0
    int32_t var_34_3 = arg5
    sub_66f6f0(arg5.b, edi, &var_14, edx_3, edx_3, arg2, 0)
else
    int32_t var_38_2 = 0
    int32_t var_34_2 = 0
    int32_t var_30_3 = arg5
    sub_66bb90(arg5, edi, &var_14, arg2, 0, 0)

int32_t eax_10 = var_14

if (eax_10 != 0)
    j__free(eax_10)

if (arg4 == 0)
    return arg4

return j__free(arg4)
