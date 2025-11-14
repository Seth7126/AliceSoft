// 函数: sub_668850
// 地址: 0x668850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
int32_t eax_1

if (arg2 u< ecx)
    eax_1 = *arg1

int128_t* result

if (arg2 u>= ecx || eax_1 u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_668900(arg1)
    
    result = arg1[1]
    
    if (result != 0)
        *result = *arg2
        result[1] = arg2[1]
        result[2].q = arg2[2].q
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_668900(arg1)
    
    int128_t* ecx_3 = *arg1 + (arg2 - eax_1) s/ 0x28 * 0x28
    result = arg1[1]
    
    if (result != 0)
        *result = *ecx_3
        result[1] = ecx_3[1]
        result[2].q = ecx_3[2].q
        arg1[1] += 0x28
        return result

arg1[1] += 0x28
return result
