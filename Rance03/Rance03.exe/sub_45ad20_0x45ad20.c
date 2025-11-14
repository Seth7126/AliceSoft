// 函数: sub_45ad20
// 地址: 0x45ad20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
*(arg3 + 4) = 5
char* edx = *(arg2 + 4)
void* result

if (&edx[4] u> *(arg2 + 8))
label_45adf0:
    result.b = 0
    return result

uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]

if (ecx_6 s> 0)
    int32_t ebx_1 = 0
    
    do
        char* ecx_7 = *(arg2 + 4)
        int32_t edx_1 = *(arg2 + 8)
        
        if (&ecx_7[8] u> edx_1)
            goto label_45adf0
        
        if (&ecx_7[4] u> edx_1)
            goto label_45adf0
        
        result = zx.d(*ecx_7)
        uint32_t esi_6 = ((zx.d(ecx_7[3]) << 8 | zx.d(ecx_7[2])) << 8 | zx.d(ecx_7[1])) << 8
        *(arg2 + 4) = &ecx_7[4]
        int32_t esi_7 = esi_6 | result
        
        if (&ecx_7[8] u> edx_1)
            goto label_45adf0
        
        *(arg2 + 4) = &ecx_7[8]
        result = sub_456cc0(arg3 + 0x4c)
        
        if (result == 0)
            goto label_45adf0
        
        if (sub_45a740(arg1, esi_7, arg2, result).b == 0)
            goto label_45adf0
        
        ebx_1 += 1
    while (ebx_1 s< ecx_6)

result.b = 1
return result
