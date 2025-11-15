// 函数: __Strcoll
// 地址: 0x6d4a06
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi_1 = arg2 - arg1
char* edi_1 = arg4 - arg3
uint32_t eax_2
int32_t ebx

if (arg5 != 0)
    ebx = arg5[1]
    eax_2 = *arg5
else
    void* eax_1
    int32_t ecx
    void* ecx_1
    eax_1, ecx_1 = ____lc_locale_name_func(ecx)
    ebx = *(eax_1 + 4)
    eax_2 = ____lc_collate_cp_func(ecx_1)

if (ebx != 0)
    enum COMPARESTRING_RESULT eax_4 =
        ___crtCompareStringA(ebx, 0x1000, arg1, esi_1, arg3, edi_1, eax_2)
    
    if (eax_4 != 0)
        return eax_4 - 2
    
    *__errno() = 0x16
    return 0x7fffffff

char* eax_3 = esi_1

if (esi_1 s>= edi_1)
    eax_3 = edi_1

void* result = sub_700d3a(arg1, arg3, eax_3)

if (result != 0 || esi_1 == edi_1)
    return result

result.b = esi_1 s>= edi_1
return (result << 1) + 0xffffffff
