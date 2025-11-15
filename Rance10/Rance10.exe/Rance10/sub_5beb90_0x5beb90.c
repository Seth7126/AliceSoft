// 函数: sub_5beb90
// 地址: 0x5beb90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg3

if (esi == arg2)
    return arg4

int32_t* edi = arg4

do
    if (edi != esi)
        int32_t eax = *esi
        *esi = 0
        int32_t* ebx_1 = *edi
        *edi = eax
        
        if (ebx_1 != 0)
            sub_5bd030(ebx_1)
            int32_t var_14_1 = 0x80
            operator new(ebx_1)
    
    esi = &esi[1]
    edi = &edi[1]
while (esi != arg2)

return edi
