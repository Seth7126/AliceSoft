// 函数: sub_5b6bb0
// 地址: 0x5b6bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg4
int32_t ebp = arg5
int32_t edi = arg6
int32_t eax = ebp << 1

if (eax s<= edi)
    void* eax_2 = ebp * 3
    void* ebp_1 = eax_2
    
    do
        int32_t var_1c_1 = 0
        void* edx = &arg3[ebp_1 << 2]
        char* esi_1 = edx + (ebp_1 << 2)
        eax_2 = sub_5b6cb0(eax_2, edx, arg3, edx, esi_1, ebx, arg3.b)
        edi -= eax
        ebx = eax_2
        arg3 = esi_1
    while (edi s>= eax)
    
    ebp = arg5

if (edi s<= ebp)
    return sub_6feca0(ebx, arg3, arg2 - arg3)

int32_t var_1c_3 = 0
int32_t eax_5 = ebp * 3
int64_t* edx_1 = &arg3[eax_5 << 2]
return sub_5b6cb0(eax_5, edx_1, arg3, edx_1, arg2, ebx, arg3.b)
