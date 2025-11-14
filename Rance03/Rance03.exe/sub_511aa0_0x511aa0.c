// 函数: sub_511aa0
// 地址: 0x511aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
void* ebp = arg1
void* var_4 = ebp
char* ecx = *(arg3 + 4)
void* result

if (&ecx[1] u<= *(arg3 + 8))
    result.b = *ecx == 1
    *(ebp + 0x1c) = result.b
    *(arg3 + 4) += 1
    char* ecx_1 = *(arg3 + 4)
    
    if (&ecx_1[4] u<= *(arg3 + 8))
        struct partsengine::CSprite::partsengine::CFlatSprite::VTable** edi_1 = nullptr
        uint32_t ebx_7 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *(arg3 + 4) = &ecx_1[4]
        
        if (ebx_7 s> 0)
            do
                char* edx_1 = *(arg3 + 4)
                
                if (&edx_1[4] u> *(arg3 + 8))
                    goto label_511b6d
                
                uint32_t ecx_8 = ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8
                    | zx.d(*edx_1)
                *(arg3 + 4) = &edx_1[4]
                ebp = var_4
                sub_510cf0(ebp, ecx_8, edi_1)
                int32_t* ecx_10 = *(*(ebp + 0x28) + (edi_1 << 2))
                
                if (ecx_10 == 0)
                    goto label_511b6d
                
                if ((*(*ecx_10 + 0x70))(arg2, arg3).b == 0)
                    goto label_511b6d
                
                edi_1 += 1
            while (edi_1 s< ebx_7)
        
        *(ebp + 0x14) = 1
        result.b = 1
        return result

label_511b6d:
result.b = 0
return result
