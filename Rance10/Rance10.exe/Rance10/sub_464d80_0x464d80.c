// 函数: sub_464d80
// 地址: 0x464d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t var_4 = ecx
*(arg2 + 0x34) = 5
char* edx = *(arg1 + 4)
uint32_t result

if (&edx[4] u> *(arg1 + 8))
label_464e53:
    result.b = 0
    return result

int32_t ebx_1 = 0
uint32_t ebp_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg1 + 4) = &edx[4]

if (ebp_7 s> 0)
    do
        char* ecx_2 = *(arg1 + 4)
        int32_t edx_1 = *(arg1 + 8)
        
        if (&ecx_2[8] u> edx_1)
            goto label_464e53
        
        if (&ecx_2[4] u> edx_1)
            goto label_464e53
        
        uint32_t esi_7 =
            ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
        *(arg1 + 4) = &ecx_2[4]
        
        if (&ecx_2[8] u> edx_1)
            goto label_464e53
        
        *(arg1 + 4) = &ecx_2[8]
        result = sub_45f690(arg2 + 0x8c, 0xffffffff)
        
        if (result == 0)
            goto label_464e53
        
        if (sub_464810(esi_7, arg1, result).b == 0)
            goto label_464e53
        
        ebx_1 += 1
    while (ebx_1 s< ebp_7)

result.b = 1
return result
