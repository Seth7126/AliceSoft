// 函数: sub_535130
// 地址: 0x535130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg2
uint32_t ebx_3 = (arg4 - esi + 3) u>> 2
int32_t edi = 0

if (esi u> arg4)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        void* ecx = arg6
        int32_t* edx = *(ecx + 4)
        
        if (edx u>= *(ecx + 8))
            if (edx != 0)
                *edx = *esi
                ecx = arg6
            
            *(ecx + 4) += 4
            *(arg6 + 8) = *(ecx + 4)
        else
            *edx = *esi
            *(arg6 + 4) += 4
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

arg3[4] = arg6
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0

if (arg5 != 0)
    j__free(arg5)

return arg3
