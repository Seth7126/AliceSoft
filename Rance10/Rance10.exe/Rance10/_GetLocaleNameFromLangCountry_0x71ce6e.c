// 函数: _GetLocaleNameFromLangCountry
// 地址: 0x71ce6e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
int32_t edx = 2
int16_t* ecx_1 = *arg1
int32_t var_8_1 = 0
int16_t i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)

int16_t* ecx_4 = arg1[1]
int32_t ebx
ebx.b = (ecx_1 - &ecx_1[1]) s>> 1 == 3
arg1[4] = ebx

do
    i = *ecx_4
    ecx_4 = &ecx_4[1]
while (i != 0)

int32_t ecx_6 = (ecx_4 - &ecx_4[1]) s>> 1
int32_t eax
eax.b = ecx_6 == 3
arg1[5] = eax

if (ebx == 0)
    int32_t var_18_1 = *arg1
    ecx_6 = var_18_1
    edx = _GetPrimaryLen(var_18_1)

arg1[3] = edx
int32_t var_18_2 = 0
___acrt_EnumSystemLocalesEx@16(ecx_6, sub_71cf97, 3, 0)
int32_t ecx_7 = arg1[2]
bool result = test_bit(ecx_7, 8)

if ((result & (ecx_7.b & 7) != 0 & test_bit(ecx_7, 9)) == 0)
    arg1[2] = 0

return result
