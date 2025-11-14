// 函数: sub_516190
// 地址: 0x516190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result_1 = sub_4ff540(arg1)
int32_t* arg_4
int32_t* edx = arg_4
int32_t result = result_1
arg1 = result
int32_t edi = 0
int32_t* ecx = *edx
int32_t edx_1 = edx[1]
uint32_t ebx_3 = (edx_1 - ecx + 3) u>> 2

if (ecx u> edx_1)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t* eax_1 = *(*ecx + 4)
        
        if (eax_1 != 0)
            eax_1 = eax_1[7]
        
        arg_4 = eax_1
        int32_t* edx_2 = &arg_4
        
        if (result s>= eax_1)
            edx_2 = &arg1
        
        edi += 1
        ecx = &ecx[1]
        result = *edx_2
        arg1 = result
    while (edi != ebx_3)

return result
