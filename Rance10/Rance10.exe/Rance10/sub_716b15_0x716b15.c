// 函数: sub_716b15
// 地址: 0x716b15
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_1c = edi
int32_t eax

eax = arg3 s<= 0 ? 0 : arg3

if (arg2 u<= eax + 9)
    *__errno() = 0x22
    __invalid_parameter_noinfo()
    return 0x22

void* var_14
_LocaleUpdate::_LocaleUpdate(&var_14, arg8)
char edx_1 = arg7

if (edx_1 != 0)
    int32_t eax_4
    eax_4.b = arg3 s> 0
    int32_t var_24_2 = eax_4
    void* eax_5
    eax_5.b = *arg6 == 0x2d
    void* var_28_1 = eax_5 + arg1
    shift_bytes(arg1, arg2)
    edx_1 = arg7

char* esi_1 = arg1

if (*arg6 == 0x2d)
    *arg1 = 0x2d
    esi_1 = &arg1[1]

if (arg3 s> 0)
    int32_t* eax_7
    eax_7.b = esi_1[1]
    *esi_1 = eax_7.b
    esi_1 = &esi_1[1]
    void* var_10
    char* eax_10
    eax_10.b = ***(var_10 + 0x88)
    *esi_1 = eax_10.b

int32_t eax_11
eax_11.b = edx_1 == 0
char* esi_2 = &esi_1[eax_11 + arg3]
void* eax_13 = 0xffffffff

if (arg2 != 0xffffffff)
    eax_13 = arg1 - esi_2 + arg2

int32_t eax_16 = _strcpy_s(esi_2, eax_13, "e+000")

if (eax_16 != 0)
    int32_t var_30_2
    __builtin_memset(&var_30_2, 0, 0x14)
    __invoke_watson()
    noreturn

if (arg4 != eax_16.b)
    *esi_2 = 0x45

if (*arg6[2] != 0x30)
    int32_t edx_3 = arg6[1]
    int32_t edx_4 = edx_3 - 1
    
    if (edx_3 - 1 s< 0)
        edx_4 = neg.d(edx_4)
        esi_2[1] = 0x2d
    
    if (edx_4 s>= 0x64)
        int32_t eax_19
        int32_t edx_5
        edx_5:eax_19 = sx.q(edx_4)
        edx_4 = mods.dp.d(edx_5:eax_19, 0x64)
        esi_2[2] += (divs.dp.d(edx_5:eax_19, 0x64)).b
    
    if (edx_4 s>= 0xa)
        int32_t eax_22
        int32_t edx_6
        edx_6:eax_22 = sx.q(edx_4)
        edx_4 = mods.dp.d(edx_6:eax_22, 0xa)
        esi_2[3] += (divs.dp.d(edx_6:eax_22, 0xa)).b
    
    esi_2[4] += edx_4.b

if (arg5 == 2 && esi_2[2] == 0x30)
    sub_6feca0(&esi_2[2], &esi_2[3], 3)

char var_8

if (var_8 != 0)
    void* eax_25 = var_14
    *(eax_25 + 0x350) &= 0xfffffffd

return 0
