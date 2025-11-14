// 函数: sub_4e0c20
// 地址: 0x4e0c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = sub_485bc0(arg1 + 4, arg3, 0)

if (arg3 == 1)
    int32_t ecx_1 = *(arg1 + 0x8c)
    int32_t esi_1 = *(arg1 + 0x104)
    result = *(arg1 + 0xfc)
    int32_t ecx_2
    
    if (ecx_1 == 0)
        ecx_2 = 0
    else
        ecx_2 = ecx_1 + 8
    
    if (arg2 == ecx_2)
        void* var_c_1 = result - esi_1
        return sub_4aaa40(arg1 + 0xb0)
    
    int32_t ecx_4 = *(arg1 + 0x90)
    int32_t ecx_5
    
    if (ecx_4 == 0)
        ecx_5 = 0
    else
        ecx_5 = ecx_4 + 8
    
    if (arg2 == ecx_5)
        void* var_c_2 = result + esi_1
        return sub_4aaa40(arg1 + 0xb0)

return result
