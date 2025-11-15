// 函数: sub_40a380
// 地址: 0x40a380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg3

if (esi == arg2)
    return arg4

int32_t* edi = arg4

do
    if (edi != esi)
        int32_t eax = *esi
        *esi = 0
        int32_t* ecx = *edi
        *edi = eax
        
        if (ecx != 0)
            (**ecx)(1)
    
    esi = &esi[1]
    edi = &edi[1]
while (esi != arg2)

return edi
