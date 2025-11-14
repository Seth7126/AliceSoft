// 函数: sub_5164e0
// 地址: 0x5164e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct partsengine::CSpriteEngineWrapper::VTable* edi = arg1
struct partsengine::CSpriteEngineWrapper::VTable* var_18 = edi
int32_t* ebx = &edi[0x2c]
void* var_2c = &edi[0xf]
int32_t eax_1 = sub_516190(ebx)
int32_t* ecx = *ebx

if (ecx != edi)
    float xmm2 = arg2
    struct partsengine::CSpriteEngineWrapper::VTable esi_3
    
    do
        void* edx_1 = *ecx
        void* eax_2 = *(edx_1 + 4)
        
        if (eax_2 != 0)
            eax_2 = *(eax_2 + 0x1c)
        
        void* esi_1 = *(edx_1 + 4)
        
        if (esi_1 != 0)
            float xmm1_1 = _mm_cvtepi32_ps(zx.o(eax_1))
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_2))
            *(esi_1 + 0xc) = xmm2
            *(*(edx_1 + 4) + 0x10) = xmm1_1 + arg3 - xmm0_2
        
        void* eax_4 = *(edx_1 + 4)
        int32_t edx_2
        
        if (eax_4 != 0)
            edx_2 = *(eax_4 + 0x18)
        else
            edx_2 = 0
        
        struct partsengine::CSpriteEngineWrapper::VTable edi_1 = edi
        *arg4 += edx_2
        int32_t ebx_1 = *arg4
        esi_3 = var_18
        xmm2 = xmm2 + _mm_cvtepi32_ps(zx.o(edi_1 + edx_2))
        
        if ((esi_3 - ecx) s>> 2 s< ((ebx[1] - *ebx) s>> 2) - 1)
            *arg4 = ebx_1 + edi_1
        
        edi = var_18
        ecx = &ecx[1]
    while (ecx != esi_3)

void* esi_4 = nullptr
int32_t* ebp_2 = *ebx
int32_t edx_7 = 0
int32_t ebx_2 = ebx[1]
*arg5 = eax_1
uint32_t edi_5 = (ebx_2 - ebp_2 + 3) u>> 2

if (ebp_2 u> ebx_2)
    edi_5 = 0

int32_t* eax_13 = ebp_2

if (edi_5 != 0)
    do
        void* ecx_3 = *(*eax_13 + 4)
        
        if (ecx_3 != 0)
            ecx_3 = *(ecx_3 + 0x18)
        
        edx_7 += 1
        esi_4 += ecx_3
        eax_13 = &eax_13[1]
    while (edx_7 != edi_5)

void* eax_16 = (((ebx_2 - ebp_2) s>> 2) - 1) * edi + esi_4
*arg4 = eax_16
sub_516670(var_18, arg2, arg3, var_18, eax_16)
int32_t var_2c_2 = *arg5
return sub_5162f0(var_18, arg3, var_18, var_18)
