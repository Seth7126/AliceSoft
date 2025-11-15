// 函数: __Stollx
// 地址: 0x6e6ca9
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

int32_t eax_3
int32_t edx
eax_3, edx = __Stoullx(esi, edi, arg6, arg7)

if (esi == *edi)
    *edi = arg4

int32_t esi_1 = 0

if ((arg4 != *edi || (eax_3 | edx) == 0)
        && (ebx.b != 0x2b || (edx u<= 0x7fffffff && (edx u< 0x7fffffff || eax_3 u<= 0xffffffff))))
    if (ebx.b != 0x2d)
        return eax_3
    
    esi_1 = 0
    
    if (edx u>= 0x80000000 && (edx u> 0x80000000 || eax_3 u> 0))
        goto label_6e6d4e
    
    return neg.d(eax_3)

label_6e6d4e:
*__errno() = 0x22

if (arg7 != 0)
    *arg7 = 1

if (ebx.b != 0x2d)
    esi_1 = 0xffffffff

return esi_1
