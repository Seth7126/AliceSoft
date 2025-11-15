// 函数: sub_5b6a70
// 地址: 0x5b6a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg6
int32_t esi = arg7
int32_t ebx = eax * 2
int64_t* edi = arg3
int32_t var_14

if (ebx s<= esi)
    int32_t eax_2 = eax * 0xc
    arg7 = eax_2
    
    do
        void* edx = eax_2 + edi
        void* ebp_1 = eax_2 + edx
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 0
        int32_t var_38_1 = arg5
        arg5 = sub_5b6fe0(arg5, edi, &var_14, edx, edx, ebp_1, 0, nullptr)[4]
        int32_t eax_6 = var_14
        
        if (eax_6 != 0)
            _free(eax_6)
        
        eax_2 = arg7
        esi -= ebx
        edi = ebp_1
    while (esi s>= ebx)
    
    eax = arg6

if (esi s> eax)
    int64_t* edx_3 = edi + eax * 0xc
    int32_t var_40_2 = 0
    int32_t var_3c_2 = 0
    int32_t var_38_3 = arg5
    sub_5b6fe0(arg5, edi, &var_14, edx_3, edx_3, arg2, 0, nullptr)
else
    int32_t var_38_2 = 0
    int32_t var_34_1 = 0
    int32_t var_30_2 = arg5
    sub_5b6c50(arg5, edi, &var_14, arg2, 0, 0)

int32_t eax_10 = var_14

if (eax_10 != 0)
    _free(eax_10)

if (arg4 == 0)
    return arg4

return _free(arg4)
