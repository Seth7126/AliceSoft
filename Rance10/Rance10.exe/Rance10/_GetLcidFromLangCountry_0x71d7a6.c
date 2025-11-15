// 函数: _GetLcidFromLangCountry
// 地址: 0x71d7a6
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
int16_t* ecx_3 = *(esi + 0x54)
int32_t eax_1
eax_1.b = (ecx - &ecx[1]) s>> 1 == 3
*(esi + 0x60) = eax_1

do
    eax_1.w = *ecx_3
    ecx_3 = &ecx_3[1]
while (eax_1.w != 0)

int32_t eax_2
eax_2.b = (ecx_3 - &ecx_3[1]) s>> 1 == 3
*(esi + 0x64) = eax_2
arg1[1] = 0

if (*(esi + 0x60) == 0)
    edx = _GetPrimaryLen(*(esi + 0x50))

*(esi + 0x5c) = edx
EnumSystemLocalesW(_LangCountryEnumProc@4, 1)
int32_t ecx_7 = *arg1
bool result = test_bit(ecx_7, 8)

if ((result & (ecx_7.b & 7) != 0 & test_bit(ecx_7, 9)) == 0)
    *arg1 = 0

return result
