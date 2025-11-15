// 函数: _GetLcidFromCountry
// 地址: 0x71d75b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
void* edx = sub_714cce()
int16_t* ecx = *(edx + 0x54)
void* eax

do
    eax.w = *ecx
    ecx = &ecx[1]
while (eax.w != 0)
int32_t eax_1
eax_1.b = (ecx - &ecx[1]) s>> 1 == 3
*(edx + 0x64) = eax_1
EnumSystemLocalesW(_CountryEnumProc@4, 1)

if ((*arg1 & 4) == 0)
    *arg1 = 0

return arg1
