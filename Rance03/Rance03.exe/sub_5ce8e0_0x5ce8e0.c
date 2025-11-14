// 函数: sub_5ce8e0
// 地址: 0x5ce8e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t* result = *(arg1 + 0x234)
int32_t esi = *result

if (esi != 0xffffffff)
    void* ecx = arg1 + 0x16c
    int32_t edx
    
    if (esi s< 0)
    label_5ce929:
        int32_t var_c_2 = esi
        int32_t var_10_1 = 0x6e9e2c
        return sub_5c2400(result, edx, ecx, arg1, "SP_INIT")
    
    result = (*(ecx + 0xc) - *(ecx + 8)) s>> 2
    
    if (esi s>= result)
        goto label_5ce929
    
    result = *(*(ecx + 8) + (esi << 2))
    
    if (result == 0)
        goto label_5ce929
    
    if (result[6] != 1)
        result[6] -= 1
        return result
    
    result, ecx, edx = sub_5d5e80(ecx, esi)
    
    if (result.b == 0)
        goto label_5ce929

return result
