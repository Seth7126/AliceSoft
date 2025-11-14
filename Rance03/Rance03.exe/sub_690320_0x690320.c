// 函数: sub_690320
// 地址: 0x690320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg6
int32_t ebp = arg5
int32_t eax = ebp << 1
void* eax_1 = arg4

if (eax s<= ebx)
    int32_t edi_3 = ebp * 0x11
    
    do
        int32_t var_1c_1 = arg7
        void* edx = arg3 + (edi_3 << 2)
        void* esi_1 = edx + (edi_3 << 2)
        eax_1 = sub_6903c0(eax_1, edx, arg3, edx, esi_1, eax_1)
        ebx -= eax
        arg3 = esi_1
    while (ebx s>= eax)
    
    ebp = arg5

if (ebx s<= ebp)
    int32_t __saved_edi = arg5
    return sub_68cec0(eax_1, arg2, arg3, eax_1)

int32_t __saved_edi_1 = arg7
int32_t eax_5 = ebp * 0x11
void* edx_2 = arg3 + (eax_5 << 2)
return sub_6903c0(eax_5, edx_2, arg3, edx_2, arg2, eax_1)
