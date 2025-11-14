// 函数: sub_4adfc0
// 地址: 0x4adfc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_c = arg1
char eax
int32_t ecx_1
eax, ecx_1 = sub_4a26a0(arg1[0x18], arg2)
char result

if (eax == 0)
    result, ecx_1 = sub_4a2b80(arg1[0x18])

if (eax != 0 || result != 0)
    int32_t eax_1 = arg1[0xe]
    
    if (eax_1 == 0)
        int32_t var_14_3 = ecx_1
        result, ecx_1 = sub_4ae030(arg1)
    else if (eax_1 == 1)
        int32_t var_14_2 = ecx_1
        result, ecx_1 = sub_4ae250(arg1)
    else
        result = (eax_1 - 1).b - 1
        
        if (eax_1 == 2)
            int32_t var_14_1 = ecx_1
            result, ecx_1 = sub_4ae890(arg1)

if (arg1[0xa].b == 0)
    int32_t var_14_4 = ecx_1
    result = sub_4856c0(&arg1[2])
    arg1[0xa].b = 1

return result
