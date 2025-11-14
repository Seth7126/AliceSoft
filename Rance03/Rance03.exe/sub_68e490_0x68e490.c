// 函数: sub_68e490
// 地址: 0x68e490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg3
int32_t* eax = arg2
int32_t* var_4 = eax
void* ebp = arg3

if (arg4 s>= 0x20)
    uint32_t i_1 = arg4 u>> 5
    uint32_t i
    
    do
        void* var_18_1 = arg3
        int32_t var_1c_1 = arg6
        sub_6915b0(arg3, arg3 + 0x880)
        arg3 += 0x880
        i = i_1
        i_1 -= 1
    while (i != 1)
    eax = var_4

void* var_18_2 = arg3
int32_t var_1c_2 = arg6
void* result = sub_6915b0(arg3, eax)
int32_t esi_2 = 0x20

if (arg4 s> 0x20)
    do
        int32_t var_18_3 = arg6
        int32_t* ecx = *(arg5 + 0x10)
        void* var_1c_3 = arg4
        ecx[1] = *ecx
        void* eax_2 = *(arg5 + 0x10)
        int32_t* eax_3 = sub_6917e0(eax_2, var_4, ebp, nullptr, 0, 0, 0, eax_2, esi_2)
        void** ecx_2 = *(arg5 + 0x10)
        int32_t esi_3 = esi_2 * 2
        result = sub_6919f0(eax_3, ecx_2[1], *ecx_2, ebp, esi_3, arg4, arg6)
        esi_2 = esi_3 * 2
    while (esi_2 s< arg4)

return result
