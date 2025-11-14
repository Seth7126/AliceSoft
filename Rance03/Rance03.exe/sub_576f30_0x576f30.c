// 函数: sub_576f30
// 地址: 0x576f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t* var_4_1 = arg1
char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[4] u> *(arg2 + 8))
label_576ffb:
    result.b = 0
    return result

uint32_t ebp_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]
int32_t* esi_1 = arg3
sub_578f10(esi_1, ebp_7)
int32_t ebx_1 = 0

if (ebp_7 s> 0)
    int32_t ebp_8 = 0
    
    while (true)
        void* esi_3 = *esi_1 + ebp_8
        
        if (sub_468d00(arg2, esi_3 + 4).b == 0)
            goto label_576ffb
        
        char* edx_1 = *(arg2 + 4)
        
        if (&edx_1[4] u> *(arg2 + 8))
            goto label_576ffb
        
        *(esi_3 + 0x1c) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        
        if (arg1[2] s< 3)
            *(esi_3 + 0x20) = 0x3f800000
            *(esi_3 + 0x24) = 0x3f800000
        else
            if (sub_468bc0(arg2, esi_3 + 0x20).b == 0)
                goto label_576ffb
            
            if (sub_468bc0(arg2, esi_3 + 0x24).b == 0)
                goto label_576ffb
        
        ebx_1 += 1
        ebp_8 += 0x28
        
        if (ebx_1 s>= ebp_7)
            break
        
        esi_1 = arg3

result.b = 1
return result
