// 函数: __Wcscoll
// 地址: 0x6d0b38
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* edx = arg1
void* eax = arg5
wchar16* ebx = arg3
int32_t esi_2 = (arg2 - edx) s>> 1
int32_t edi_2 = (arg4 - ebx) s>> 1

if (eax == 0)
    int32_t ecx
    eax = ____lc_locale_name_func(ecx)
    edx = arg1

int32_t eax_1 = *(eax + 4)

if (eax_1 != 0)
    enum COMPARESTRING_RESULT eax_4 = ___crtCompareStringW(eax_1, 0x1000, edx, esi_2, ebx, edi_2)
    
    if (eax_4 != 0)
        return eax_4 - 2
    
    *__errno() = 0x16
    return 0x7fffffff

int32_t ecx_1 = esi_2

if (esi_2 s>= edi_2)
    ecx_1 = edi_2

void* result

while (true)
    if (ecx_1 s<= 0)
        result = nullptr
        break
    
    eax_1.w = *edx
    wchar16 temp0_1 = *ebx
    
    if (eax_1.w != temp0_1)
        result = (sbb.d(eax_1, eax_1, eax_1.w u< temp0_1) & 0xfffffffe) + 1
        break
    
    edx = &edx[1]
    ebx = &ebx[1]
    ecx_1 -= 1

if (result != 0 || esi_2 == edi_2)
    return result

result.b = esi_2 s>= edi_2
return (result << 1) + 0xffffffff
