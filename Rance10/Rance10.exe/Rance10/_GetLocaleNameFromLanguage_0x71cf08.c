// 函数: _GetLocaleNameFromLanguage
// 地址: 0x71cf08
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_10 = edi
int32_t edx = 2
int16_t* ecx = *arg1
int16_t i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
int32_t ecx_2 = (ecx - &ecx[1]) s>> 1
int32_t eax
eax.b = ecx_2 == 3
arg1[4] = eax

if (eax == 0)
    int32_t var_14_1 = *arg1
    ecx_2 = var_14_1
    edx = _GetPrimaryLen(var_14_1)

int32_t var_14_2 = 0
arg1[3] = edx
BOOL result = ___acrt_EnumSystemLocalesEx@16(ecx_2, sub_71d281, 3, 0)

if ((arg1[2].b & 4) == 0)
    arg1[2] = 0

return result
