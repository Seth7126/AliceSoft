// 函数: _TestDefaultLanguage
// 地址: 0x71dd4e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t lCData = arg3
int32_t edi
int32_t var_10 = edi
void* eax = sub_714cce()

if (GetLocaleInfoW((arg4 & 0x3ff) | 0x400, 0x20000001, &lCData, 2) != 0)
    if (arg4 == lCData || arg5 == 0)
        return 1
    
    int16_t* esi_1 = *(eax + 0x50)
    int32_t eax_1
    
    do
        eax_1.w = *esi_1
        esi_1 = &esi_1[1]
    while (eax_1.w != 0)
    
    if (_GetPrimaryLen(*(eax + 0x50)) != (esi_1 - &esi_1[1]) s>> 1)
        return 1

return 0
