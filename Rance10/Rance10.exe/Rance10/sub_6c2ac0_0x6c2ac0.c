// 函数: sub_6c2ac0
// 地址: 0x6c2ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = 0xffffffff
int32_t var_4 = 0xffffffff
int32_t* eax = arg1[0xf]
int32_t ebp = arg1[0x72]
void* edx = arg1[0x12]
int32_t var_14 = ebp
int32_t edi = *eax
uint32_t ebx = eax[1]
int32_t eax_1
int32_t edx_1
eax_1, edx_1 = sub_6c2360(arg1, edx)
int32_t ecx = arg1[0xb1]

if (ecx == 0 || arg1[0xb3] == 0)
    arg1[4] = 0xffffffff
    arg1[5] = 0xffffffff
    arg1[2] = 0xffffffff
    arg1[3] = 0xffffffff
else
    ecx(*arg1, 0, 0, 2)
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(arg1[0xb3](*arg1))
    arg1[4] = eax_4
    arg1[5] = edx_2
    arg1[2] = eax_4
    arg1[3] = edx_2

if ((arg1[4] & arg1[5]) == 0xffffffff)
    return 0xffffff7d

void* edx_3 = arg1[0x10]
int32_t result
int32_t edx_5
result, edx_5 = sub_6c1cf0(&var_14, edx_3 + 8, arg1, *(edx_3 + 4), &var_14, &var_8)

if (edx_5 s<= 0 && (edx_5 s< 0 || result u< 0))
    return result

void* eax_9 = arg1[0x10]
int32_t var_28_1 = 0
int32_t var_2c_1 = *(eax_9 + 4)

if (sub_6c24b0(eax_9 + 8, var_14, arg1, 0, 0, edi, ebx, arg1[2], arg1[3], var_8, var_4, eax_9 + 8)
        s< 0)
    return 0xffffff80

int32_t* eax_13 = arg1[0xe]
*eax_13 = 0
eax_13[1] = 0
*arg1[0x10] = ebp
int32_t* eax_15 = arg1[0xf]
*eax_15 = edi
eax_15[1] = ebx
int32_t* eax_16 = arg1[0x11]
*eax_16 = eax_1
eax_16[1] = edx_1
void* eax_17 = arg1[0x11]
int32_t temp1_1 = *(eax_17 + 8)
*(eax_17 + 8) -= eax_1
*(eax_17 + 0xc) = sbb.d(*(eax_17 + 0xc), edx_1, temp1_1 u< eax_1)
void* eax_18 = arg1[0x11]
int32_t temp2_1 = *(eax_18 + 0xc)

if (temp2_1 s<= 0 && (temp2_1 s< 0 || *(eax_18 + 8) u< 0))
    *(eax_18 + 8) = 0
    *(eax_18 + 0xc) = 0

return sub_6c33e0(arg1, edi, ebx)
