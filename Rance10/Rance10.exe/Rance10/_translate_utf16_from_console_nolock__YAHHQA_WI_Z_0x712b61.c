// 函数: ?translate_utf16_from_console_nolock@@YAHHQA_WI@Z
// 地址: 0x712b61
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
int16_t* edi_1 = arg2
int16_t* esi = edi_1
void* edx = &edi_1[arg3]
int16_t* eax_1 = edi_1

if (edi_1 u< edx)
    void* ecx_1 = &edi_1[1]
    
    do
        uint32_t ebx_1 = zx.d(*eax_1)
        
        if (ebx_1 == 0x1a)
            int32_t edx_1 = (arg1 & 0x3f) * 0x30
            int32_t ecx_4 = (&data_7fc718)[arg1 s>> 6]
            *(ecx_4 + edx_1 + 0x28) |= 2
            break
        
        if (ebx_1 == 0xd && ecx_1 u< edx)
            edi_1 = arg2
        
        if (ebx_1 != 0xd || ecx_1 u>= edx || *ecx_1 != 0xa)
            *esi = ebx_1.w
            eax_1 = &eax_1[1]
            esi = &esi[1]
            ecx_1 += 2
        else
            eax_1 = &eax_1[2]
            *esi = 0xa
            ecx_1 += 4
            esi = &esi[1]
    while (eax_1 u< edx)

return (esi - edi_1) & 0xfffffffe
