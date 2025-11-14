// 函数: sub_57edb0
// 地址: 0x57edb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
int32_t eax_1

if (arg2 u< ecx)
    eax_1 = *arg1

int128_t* result

if (arg2 u>= ecx || eax_1 u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_57f120(arg1)
    
    result = arg1[1]
    
    if (result != 0)
        *result = *arg2
        result[1].q = arg2[1].q
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_57f120(arg1)
    
    int128_t* ecx_3 = *arg1 + (arg2 - eax_1) s/ 0x18 * 0x18
    result = arg1[1]
    
    if (result != 0)
        *result = *ecx_3
        result[1].q = ecx_3[1].q
        arg1[1] += 0x18
        return result

arg1[1] += 0x18
return result
