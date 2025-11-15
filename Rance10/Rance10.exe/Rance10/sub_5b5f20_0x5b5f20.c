// 函数: sub_5b5f20
// 地址: 0x5b5f20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_80 = &var_4
int32_t i = (arg2 - arg1) s/ 0x6c

if (i s>= 2)
    int32_t ebx_1 = arg2 - 0x6c
    
    if (i s< 2)
        goto label_5b5f93
    
    do
        void var_78
        __builtin_memcpy(&var_78, ebx_1, 0x6c)
        int32_t var_8c_1 = __builtin_memcpy(ebx_1, arg1, 0x6c)
        int32_t eax_6 = (ebx_1 - arg1) s/ 0x6c
        sub_5b6140(eax_6, nullptr, arg1, eax_6, &var_78)
    label_5b5f93:
        ebx_1 -= 0x6c
        i = (ebx_1 - arg1 + 0x6c) s/ 0x6c
    while (i s>= 2)

*var_80
return i
