// 函数: sub_612ce0
// 地址: 0x612ce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_609d90(data_7fcbb8 + 0x44, arg2)

if (eax == 0)
    eax.b = 0
    return eax

int32_t ebx = *(eax + 0x4c)
void** eax_4

if ((*(eax + 0x64) - *(eax + 0x60)) s/ 0x70 s< ebx)
    eax_4.b = 0
    return eax_4

int32_t esi = 0

if (ebx s> 0)
    int32_t edi_1 = 0
    
    do
        arg2 = *(*(eax + 0x60) + edi_1 + 0x34)
        sub_42ca30(arg1, &arg2)
        eax_4 = arg2
        
        if (eax_4 == 0x12 || eax_4 == 0x13 || eax_4 == 0x33 || eax_4 == 0x59 || eax_4 == 0x5d)
            esi += 1
            edi_1 += 0x70
        
        esi += 1
        edi_1 += 0x70
    while (esi s< ebx)

eax_4.b = 1
return eax_4
