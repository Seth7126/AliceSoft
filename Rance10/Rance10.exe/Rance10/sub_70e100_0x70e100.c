// 函数: sub_70e100
// 地址: 0x70e100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 0

int16_t* ecx = arg1
int32_t edi
int32_t var_8 = edi
void* edx = &ecx[1]
int16_t i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
int32_t var_10 = (((ecx - edx) s>> 1) + 1) * 2
int16_t* result = sub_705e22()

if (result == 0)
    return result

if (_wcscpy_s(result, ((ecx - edx) s>> 1) + 1, arg1) == 0)
    return result

int32_t var_20
__builtin_memset(&var_20, 0, 0x14)
__invoke_watson()
noreturn
