// 函数: sub_577100
// 地址: 0x577100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg6
int32_t esi = arg7
int32_t ebx = eax * 2
int32_t* edi = arg3
int32_t var_14

if (ebx s<= esi)
    int32_t eax_1 = eax << 2
    arg7 = eax_1
    
    do
        void* edx = eax_1 + edi
        void* ebp_1 = eax_1 + edx
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 0
        int32_t var_38_1 = arg5
        arg5 = sub_577a00(arg5, edi, &var_14, edx, edx, ebp_1, 0, nullptr)[4]
        int32_t eax_5 = var_14
        
        if (eax_5 != 0)
            _free(eax_5)
        
        eax_1 = arg7
        esi -= ebx
        edi = ebp_1
    while (esi s>= ebx)
    
    eax = arg6

if (esi s> eax)
    int32_t* edx_3 = &edi[eax]
    int32_t var_40_2 = 0
    int32_t var_3c_2 = 0
    int32_t var_38_3 = arg5
    sub_577a00(arg5, edi, &var_14, edx_3, edx_3, arg2, 0, nullptr)
else
    int32_t var_38_2 = 0
    int32_t var_34_1 = 0
    int32_t var_30_2 = arg5
    sub_5772b0(arg5, edi, &var_14, arg2, 0, 0)

int32_t eax_8 = var_14

if (eax_8 != 0)
    _free(eax_8)

if (arg4 == 0)
    return arg4

return _free(arg4)
