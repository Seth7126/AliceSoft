// 函数: sub_6411a0
// 地址: 0x6411a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0_1 = sub_4a78b0(*(arg2 + 0x1c))
int32_t edi = *(arg2 + 8)
int32_t esi = edi
int32_t eax = int.d(xmm0_1)

if (eax s< edi)
    esi = eax

int32_t eax_1 = int.d(sub_4a78b0(*(arg2 + 0x20)))
int32_t ebx_1 = edi

if (eax_1 s< edi)
    ebx_1 = eax_1

if (esi s> ebx_1)
    ebx_1 = esi

if (*(arg2 + 4) s< 0x100)
    void** eax_2 = arg3
    
    if (eax_2[4] != 0)
        if (eax_2[5] u>= 0x10)
            eax_2 = *eax_2
        
        eax_2.b = *eax_2
        
        if (eax_2.b u< 0x81 || eax_2.b u> 0x9f)
            eax_2.b += 0x20
            
            if (eax_2.b u> 0xf)
                edi = (edi + 1) s>> 1
        
        *arg4 = edi + (ebx_1 << 1)
        int32_t* eax_4
        eax_4.b = 1
        return eax_4
    
    *arg4 = ebx_1 << 1
    int32_t* eax_3
    eax_3.b = 1
    return eax_3

if (*(arg1 + 0x120) == 0xffffffff)
    void* var_24_1 = arg1 + 0x140
    
    if (sub_63f2b0(arg1 + 0x114) == 0)
        void** ecx_3 = arg3
        
        if (ecx_3[4] == 0)
            *arg4 = ebx_1 << 1
            int32_t* eax_7
            eax_7.b = 0
            return eax_7
        
        int32_t eax_8 = *(arg2 + 8)
        
        if (ecx_3[5] u>= 0x10)
            ecx_3 = *ecx_3
        
        ecx_3.b = *ecx_3
        
        if (ecx_3.b u< 0x81 || ecx_3.b u> 0x9f)
            ecx_3.b += 0x20
            
            if (ecx_3.b u> 0xf)
                eax_8 = (eax_8 + 1) s>> 1
        
        *arg4 = eax_8 + (ebx_1 << 1)
        int32_t* eax_10
        eax_10.b = 0
        return eax_10

uint32_t eax_11 = sub_641380(arg3)
int32_t ebx_3 = *(arg2 + 4) - 0x100
int32_t eax_13 = *(arg1 + 0x48) * *(arg2 + 8)
int32_t eax_14 = sub_63f460(arg1 + 0x114, ebx_3, eax_13)

if (sub_63f620(arg1 + 0x114, ebx_3, eax_14, eax_11, arg4) == 0)
    *arg4 = sub_640c20(arg2, arg3) + (ebx_1 << 1)
    int32_t eax_17
    eax_17.b = 0
    return eax_17

float xmm0_5 = _mm_cvtepi32_ps(zx.o(eax_14))
int32_t eax_18 = int.d(_mm_cvtepi32_ps(zx.o(eax_13)) / xmm0_5 * _mm_cvtepi32_ps(zx.o(*arg4)))
*arg4 = eax_18
int32_t esi_2 = *(arg1 + 0x48)
*arg4 = divs.dp.d(sx.q((eax_18 - 1 + esi_2) & not.d(esi_2 - 1)), esi_2) + (ebx_1 << 1)
int32_t eax_24
eax_24.b = 1
return eax_24
