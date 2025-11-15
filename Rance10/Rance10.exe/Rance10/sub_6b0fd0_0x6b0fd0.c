// 函数: sub_6b0fd0
// 地址: 0x6b0fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = arg2
uint32_t i_4 = (zx.d(*(arg1 + 0xb)) + 7) u>> 3
int32_t i_3 = *(arg1 + 4) - i_4
char* esi = arg3

if (i_4 != 0)
    uint32_t i_2 = i_4
    uint32_t i
    
    do
        void* ecx
        ecx.b = *esi
        esi = &esi[1]
        ecx.b u>>= 1
        *result += ecx.b
        result = &result[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_3 != 0)
    void* edi_2 = result - i_4
    void* esi_1 = esi - result
    int32_t i_1
    
    do
        uint32_t edx_1 = zx.d(*(esi_1 + result))
        result = &result[1]
        uint32_t ecx_1 = zx.d(*edi_2)
        edi_2 += 1
        result[0xffffffff] += ((edx_1 + ecx_1) u>> 1).b
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
