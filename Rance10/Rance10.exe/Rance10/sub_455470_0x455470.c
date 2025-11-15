// 函数: sub_455470
// 地址: 0x455470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s<= 4)
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u> *(arg3 + 8))
    label_4554b9:
        result.b = 0
        return result
    
    uint32_t eax_2 = zx.d(*edx_1)
    uint32_t esi_6 = ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8
    *(arg3 + 4) = &edx_1[4]
    
    if ((esi_6 | eax_2) != (*(*arg1 + 0x1c))())
        goto label_4554b9

int32_t* i = arg1[0xa]

for (int32_t edi_1 = arg1[0xb]; i != edi_1; i = &i[0xf])
    if (sub_61ed80(arg3, i).b == 0)
        goto label_4554b9
    
    char* ecx_4 = *(arg3 + 4)
    
    if (&ecx_4[4] u> *(arg3 + 8))
        goto label_4554b9
    
    void* ebx_7 = ((zx.d(ecx_4[3]) << 8 | zx.d(ecx_4[2])) << 8 | zx.d(ecx_4[1])) << 8 | zx.d(*ecx_4)
    *(arg3 + 4) = &ecx_4[4]
    
    if (ebx_7 != 0)
        int32_t* eax_6 = sub_6e810c(0x14)
        arg2 = eax_6
        __builtin_memset(eax_6, 0, 0x14)
        eax_6[1] = 1
        *eax_6 = &common::CIMemory::`vftable'{for `common::SuicideRefCounter<class IMemory>'}
        eax_6[2] = 0
        eax_6[3] = 0
        eax_6[4] = 0
        i[6] = eax_6
        (*(*eax_6 + 0xc))(ebx_7 + 1)
        result = (*(*i[6] + 0x18))()
        char* edx_4 = *(arg3 + 4)
        
        if (edx_4 + ebx_7 u> *(arg3 + 8))
            goto label_4554b9
        
        sub_700660(result, edx_4, ebx_7)
        *(arg3 + 4) += ebx_7
        *((*(*i[6] + 0x18))() + ebx_7) = 0

result.b = 1
return result
