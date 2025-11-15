// 函数: _GetLcidFromLanguage
// 地址: 0x71d841
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_10 = edi
void* esi = sub_714cce()
int32_t edx = 2
int16_t* ecx = *(esi + 0x50)
void* eax

do
    eax.w = *ecx
    ecx = &ecx[1]
while (eax.w != 0)
int32_t eax_1
eax_1.b = (ecx - &ecx[1]) s>> 1 == 3
*(esi + 0x60) = eax_1

if (eax_1 == 0)
    edx = _GetPrimaryLen(*(esi + 0x50))

*(esi + 0x5c) = edx
EnumSystemLocalesW(_LanguageEnumProc@4, 1)

if ((*arg1 & 4) == 0)
    *arg1 = 0

return arg1
