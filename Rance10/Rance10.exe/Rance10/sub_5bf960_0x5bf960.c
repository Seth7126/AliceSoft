// 函数: sub_5bf960
// 地址: 0x5bf960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
void** eax = arg4
int32_t edi = arg6
int32_t ebx = arg5 << 1

if (ebx s<= edi)
    do
        int32_t var_18_1 = 0
        int32_t* edx = &arg3[arg5]
        int32_t* esi_1 = &edx[arg5]
        eax = sub_5bfa30(eax, edx, arg3, edx, esi_1, eax, arg3.b)
        edi -= ebx
        arg3 = esi_1
    while (edi s>= ebx)

if (edi s<= arg5)
    int32_t var_18_2 = 0
    return sub_5beb90(eax, arg2, arg3, eax)

int32_t var_18_3 = 0
void* edx_2 = &arg3[arg5]
return sub_5bfa30(eax, edx_2, arg3, edx_2, arg2, eax, arg3.b)
