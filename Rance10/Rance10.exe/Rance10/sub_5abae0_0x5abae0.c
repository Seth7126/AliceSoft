// 函数: sub_5abae0
// 地址: 0x5abae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
char* eax = arg2
char* var_4 = eax
int32_t* ebp = arg3

if (arg4 s>= 0x20)
    uint32_t i_1 = arg4 u>> 5
    uint32_t i
    
    do
        int32_t* var_18_1 = arg3
        sub_5ab9d0(arg3, &arg3[0x20])
        arg3 = &arg3[0x20]
        i = i_1
        i_1 -= 1
    while (i != 1)
    eax = var_4

int32_t* var_18_2 = arg3
char* result
int32_t ecx
result, ecx = sub_5ab9d0(arg3, eax)
int32_t esi_2 = 0x20

if (arg4 s> 0x20)
    do
        int32_t var_18_3 = ecx
        int32_t* ecx_1 = *(arg5 + 0x10)
        int32_t var_1c_1 = arg4
        int32_t var_20_1 = esi_2
        ecx_1[1] = *ecx_1
        int32_t eax_2 = *(arg5 + 0x10)
        int32_t var_24_1 = eax_2
        int32_t eax_3 = sub_5abdc0(eax_2, var_4, ebp, 0, 0, 0, nullptr)
        int32_t** ecx_3 = *(arg5 + 0x10)
        int32_t esi_3 = esi_2 * 2
        result, ecx = sub_5abf20(eax_3, ecx_3[1], *ecx_3, ebp, esi_3, arg4)
        esi_2 = esi_3 * 2
    while (esi_2 s< arg4)

return result
