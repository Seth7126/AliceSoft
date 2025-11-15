// 函数: sub_4fe1a0
// 地址: 0x4fe1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
int32_t* var_14 = ebx
int32_t var_c
int32_t var_8
(*(*ebx + 0x20))(&var_c, &var_8, 1)
void* esi = ebx[0x1b]
int32_t ecx_2 = *(esi + 0xa4) - 1
int32_t ebp_1

switch (ecx_2)
    case 1, 4, 7
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(var_c)
        ebp_1 = neg.d((eax_3 - edx_1) s>> 1)
    case 2, 5, 8
        ebp_1 = neg.d(var_c)
    default
        ebp_1 = 0

int32_t eax_11

switch (ecx_2)
    case 3, 4, 5
        int32_t eax_8
        int32_t edx_2
        edx_2:eax_8 = sx.q(var_8)
        eax_11 = neg.d((eax_8 - edx_2) s>> 1)
    case 6, 7, 8
        eax_11 = neg.d(var_8)
    default
        eax_11 = 0

int32_t edi = 0
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** result =
    *(esi + 0x70)
int32_t ecx_5 = (result[0x31] - result[0x30]) s>> 2

if (ecx_5 s> 0)
    do
        int32_t esi_1
        
        if (edi s>= 0)
            void* ecx_6 = *(ebx[0x1b] + 0x70)
            
            if ((*(ecx_6 + 0xc4) - *(ecx_6 + 0xc0)) s>> 2 s> edi)
                esi_1 = *(*(ecx_6 + 0xc0) + (edi << 2))
            else
                esi_1 = 0
        else
            esi_1 = 0
        
        int32_t var_28_1 = esi_1
        result = sub_4f15e0(ebx[0x1c])
        
        if (result != 0)
            int32_t ebx_1 = result[2]
            
            if (esi_1 s< ebx_1 || result[1] + ebx_1 s<= esi_1)
                ebx = var_14
            else
                ebx = var_14
                result.b = result[3][esi_1 - ebx_1] != 0
                
                if (result.b != 0)
                    int32_t var_28_2 = esi_1
                    result = sub_4f14d0(ebx[0x1c])
                    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                        ** result_1 = result
                    
                    if (result_1 != 0)
                        int32_t ebx_2 = result_1[2]
                        
                        if (esi_1 s< ebx_2 || result_1[1] + ebx_2 s<= esi_1)
                            result = nullptr
                        else
                            result = *(result_1[3] + ((esi_1 - ebx_2) << 2))
                            
                            if (result == 0)
                                int32_t var_28_3 = esi_1
                                result = sub_526580(result_1)
                        
                        ebx = var_14
                    
                    result[0x92] = _mm_cvtepi32_ps(zx.o(ebp_1))
                    result[0x93] = _mm_cvtepi32_ps(zx.o(eax_11))
        
        edi += 1
    while (edi s< ecx_5)

return result
