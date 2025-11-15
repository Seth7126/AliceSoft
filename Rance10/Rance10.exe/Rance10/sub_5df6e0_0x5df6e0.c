// 函数: sub_5df6e0
// 地址: 0x5df6e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg3
int32_t ecx = 0
char* esi = *arg2
char* edi = *arg3
uint32_t edx_3 = (arg2[1] - esi + 3) u>> 2

if (esi u> arg2[1])
    edx_3 = 0

if (edx_3 != 0)
    do
        arg1 = *esi
        esi = &esi[4]
        *edi = arg1
        ecx += 1
        edi = &edi[1]
    while (ecx != edx_3)

int32_t eax_2 = (arg2[1] - *arg2) s>> 2

if (eax_2 u< 4)
    __builtin_memset(__builtin_memset(edi, 0, (4 - eax_2) u>> 2 << 2), 0, (4 - eax_2) & 3)

*arg3 += 4
int32_t* edx_5 = *arg3
int32_t ecx_5 = arg4[1]
int32_t* eax_4 = *arg4

if (eax_4 == ecx_5)
    *edx_5 = 0x3f800000
    edx_5[1] = 0
    edx_5[2] = 0
    *arg3 = &edx_5[4]
    edx_5[3] = 0
    return &edx_5[4]

int32_t edi_2 = 0
uint32_t ebp_4 = (ecx_5 - eax_4 + 3) u>> 2

if (eax_4 u> ecx_5)
    ebp_4 = 0

if (ebp_4 != 0)
    do
        int32_t ecx_7 = *eax_4
        eax_4 = &eax_4[1]
        *edx_5 = ecx_7
        edi_2 += 1
        edx_5 = &edx_5[1]
        *arg3 = edx_5
    while (edi_2 != ebp_4)

int32_t* result = arg4
int32_t edx_8 = (result[1] - *result) s>> 2

if (edx_8 u< 4)
    result = 4 - edx_8
    
    if (result u>= 4)
        int32_t i_2 = (neg.d(edx_8) u>> 2) + 1
        edx_8 += i_2 << 2
        int32_t i
        
        do
            int32_t* eax_6 = *arg3
            *eax_6 = 0
            eax_6[1] = 0
            eax_6[2] = 0
            eax_6[3] = 0
            result = &eax_6[4]
            *arg3 = result
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (edx_8 u< 4)
        int32_t i_3 = 4 - edx_8
        int32_t i_1
        
        do
            int32_t* eax_7 = *arg3
            *eax_7 = 0
            result = &eax_7[1]
            *arg3 = result
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

return result
