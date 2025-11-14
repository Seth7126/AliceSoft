// 函数: sub_48e9f0
// 地址: 0x48e9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edi = arg2
void* ebx = arg1
void* var_4 = ebx
char* edx = *(edi + 4)
uint32_t result

if (&edx[4] u> *(edi + 8))
label_48eb4c:
    result.b = 0
    return result

uint32_t result_1 = 0
uint32_t ebp_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(edi + 4) = &edx[4]

if (ebp_7 s> 0)
    do
        char* ecx = *(edi + 4)
        arg2 = 0
        
        if (&ecx[4] u> *(edi + 8))
            goto label_48eb4c
        
        uint32_t eax_4 = zx.d(*ecx)
        uint32_t edx_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8
        *(edi + 4) = &ecx[4]
        uint32_t edx_7 = edx_6 | eax_4
        result = *(ebx + 0x58)
        arg2 = edx_7
        uint32_t result_3 = result
        uint32_t result_5 = *(result + 4)
        
        while (*(result_5 + 0xd) == 0)
            if (*(result_5 + 0x10) s>= edx_7)
                result_3 = result_5
                result_5 = *result_5
            else
                result_5 = *(result_5 + 8)
        
        uint32_t* ecx_1
        
        if (result_3 == result || edx_7 s< *(result_3 + 0x10))
            uint32_t result_2 = result
            ecx_1 = &result_2
        else
            uint32_t result_4 = result_3
            ecx_1 = &result_4
        
        if (*ecx_1 != result)
            goto label_48eb4c
        
        struct IInterface::partsengine::CFlatKeyDataScript::VTable** eax_5
        int32_t ecx_2
        eax_5, ecx_2 = sub_69adc6(0x28)
        struct IInterface::partsengine::CFlatKeyDataScript::VTable** esi_2 = eax_5
        
        if (esi_2 == 0)
            esi_2 = nullptr
        else
            *esi_2 = &partsengine::CFlatKeyDataScript::`vftable'{for `IInterface'}
            esi_2[1] = 1
            esi_2[2] = 0xffffffff
            esi_2[3].b = 0
            esi_2[9] = 0xf
            esi_2[8] = 0
            esi_2[4].b = 0
        
        int32_t var_28_1 = ecx_2
        
        if (sub_4917b0(esi_2, edi) == 0)
            (*esi_2)->__offset(0x4).d()
            goto label_48eb4c
        
        ebx = var_4
        *sub_42f350(ebx + 0x58, &arg2) = esi_2
        result = result_1 + 1
        result_1 = result
    while (result s< ebp_7)

result.b = 1
return result
