// 函数: sub_4d7900
// 地址: 0x4d7900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t edi = arg2
char* edx = *(edi + 4)
uint32_t result

if (&edx[4] u> *(edi + 8))
label_4d7a47:
    result.b = 0
    return result

int32_t ebp_1 = 0
uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(edi + 4) = &edx[4]

if (ebx_7 s> 0)
    do
        char* ecx = *(edi + 4)
        arg2 = 0
        
        if (&ecx[4] u> *(edi + 8))
            goto label_4d7a47
        
        uint32_t edx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
        *(edi + 4) = &ecx[4]
        arg2 = edx_7
        void** eax_6 = *(arg1 + 0x58)
        void** esi_2 = eax_6
        void** ecx_1 = eax_6[1]
        
        while (*(ecx_1 + 0xd) == 0)
            if (ecx_1[4] s>= edx_7)
                esi_2 = ecx_1
                ecx_1 = *ecx_1
            else
                ecx_1 = ecx_1[2]
        
        if (esi_2 == eax_6 || edx_7 s< esi_2[4])
            esi_2 = eax_6
        
        if (esi_2 != *(arg1 + 0x58))
            goto label_4d7a47
        
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataScript::VTable*
            * eax_7 = sub_6e810c(0x28)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataScript::VTable*
            * var_10_1 = eax_7
        eax_7[1] = 1
        *eax_7 = &partsengine::CFlatKeyDataScript::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
        eax_7[2] = 0xffffffff
        eax_7[3].b = 0
        eax_7[9] = 0xf
        eax_7[8] = 0
        eax_7[4].b = 0
        
        if (sub_4db990(eax_7, edi) == 0)
            (*eax_7)->vFunc_1()
            goto label_4d7a47
        
        uint32_t var_c
        sub_42ebc0(arg1 + 0x58, &var_c, &arg2)
        ebp_1 += 1
        *(var_c + 0x14) = eax_7
    while (ebp_1 s< ebx_7)

result.b = 1
return result
