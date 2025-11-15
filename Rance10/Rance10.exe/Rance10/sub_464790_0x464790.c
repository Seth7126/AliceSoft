// 函数: sub_464790
// 地址: 0x464790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg1[1]
char* edx = *arg1
int32_t ebp = 0
void* edi_1 = result - edx

if (edx u> result)
    edi_1 = nullptr

if (edi_1 != 0)
    int32_t ebx
    int32_t var_c_1 = ebx
    
    do
        ebx.b = *edx
        edx = &edx[1]
        uint32_t eax = zx.d(ebx.b)
        int32_t esi_4 = (eax u>> 1 & 0x55555555) + (eax & 0x55555555)
        int32_t ecx_3 = (esi_4 u>> 2 & 0x33333333) + (esi_4 & 0x33333333)
        result = (ecx_3 u>> 4) + (ecx_3 & 0xf0f0f0f)
        char ecx_5 = 8 - result.b
        
        if ((result.b & 1) == 0)
            ecx_5 = result.b
        
        ebp += 1
        ebx.b = ror.b(ebx.b, ecx_5)
        edx[0xffffffff] = ebx.b
    while (ebp != edi_1)

return result
