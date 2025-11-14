// 函数: sub_55a4e0
// 地址: 0x55a4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg6
int32_t esi = arg7
int32_t ebx = eax * 2
int32_t* edi = arg3
int32_t var_14

if (ebx s<= esi)
    int32_t eax_1 = eax << 2
    arg7 = eax_1
    
    do
        int32_t var_30_1 = arg8
        void* edx = eax_1 + edi
        void* ebp_1 = eax_1 + edx
        int32_t var_3c_1 = 0
        int32_t var_38_1 = 0
        int32_t var_34_1 = arg5
        arg5 = sub_55a7d0(arg5, edi, &var_14, edx, edx, ebp_1, 0, nullptr)[4]
        int32_t eax_5 = var_14
        
        if (eax_5 != 0)
            j__free(eax_5)
        
        eax_1 = arg7
        esi -= ebx
        edi = ebp_1
    while (esi s>= ebx)
    
    eax = arg6

if (esi s> eax)
    int32_t var_30_4 = arg8
    int32_t* edx_3 = &edi[eax]
    int32_t var_3c_2 = 0
    int32_t var_38_3 = 0
    int32_t var_34_3 = arg5
    sub_55a7d0(arg5, edi, &var_14, edx_3, edx_3, arg2, 0, nullptr)
else
    int32_t var_38_2 = 0
    int32_t var_34_2 = 0
    int32_t var_30_3 = arg5
    sub_534c90(arg5, edi, &var_14, arg2, 0, 0)

int32_t eax_8 = var_14

if (eax_8 != 0)
    j__free(eax_8)

if (arg4 == 0)
    return arg4

return j__free(arg4)
