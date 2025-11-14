// 函数: sub_6607c0
// 地址: 0x6607c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg5
int32_t edi = arg6
int32_t eax = ebx * 2
int32_t* eax_1 = arg4

if (eax s<= edi)
    do
        int32_t var_1c_1 = arg7
        int32_t* edx = &arg3[ebx * 0x30]
        int32_t* esi_1 = &edx[ebx * 0x30]
        eax_1 = sub_660850(eax_1, edx, arg3, edx, esi_1, eax_1)
        edi -= eax
        arg3 = esi_1
    while (edi s>= eax)
    
    ebx = arg5

if (edi s<= ebx)
    int32_t __saved_esi = arg5
    return sub_662e20(eax_1, arg2, arg3, eax_1)

int32_t __saved_esi_1 = arg7
void* edx_4 = &arg3[ebx * 0x30]
return sub_660850(eax_1, edx_4, arg3, edx_4, arg2, eax_1)
