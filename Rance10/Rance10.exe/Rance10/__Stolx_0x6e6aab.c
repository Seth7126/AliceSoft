// 函数: __Stolx
// 地址: 0x6e6aab
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t* edi = arg5

if (edi == 0)
    edi = &var_8

char* esi = arg4
uint32_t eax_1 = zx.d(*arg4)

while (_isspace(eax_1) != 0)
    esi = &esi[1]
    eax_1 = zx.d(*esi)

int32_t ebx
ebx.b = *esi

if (ebx.b == 0x2d || ebx.b == 0x2b)
    esi = &esi[1]
else
    ebx.b = 0x2b

int32_t result = __Stoulx(esi, edi, arg6, arg7)

if (esi == *edi)
    *edi = arg4

if ((arg4 != *edi || result == 0) && (ebx.b != 0x2b || result u<= 0x7fffffff))
    if (ebx.b != 0x2d)
        return result
    
    if (result u<= 0x80000000)
        return neg.d(result)

*__errno() = 0x22

if (arg7 != 0)
    *arg7 = 1

int32_t eax_5
eax_5.b = ebx.b == 0x2d
return eax_5 + 0x7fffffff
